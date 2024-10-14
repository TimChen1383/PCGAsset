// Fill out your copyright notice in the Description page of Project Settings.

#include "PCGConnectSplinebyID.h"

#include "PCGCommon.h"
#include "PCGComponent.h"
#include "PCGContext.h"
#include "PCGManagedResource.h"
#include "PCGPin.h"
#include "Data/PCGPointData.h"
#include "Data/PCGSplineData.h"
#include "Helpers/PCGHelpers.h"
#include "Metadata/PCGMetadataAttributeTpl.h"

#include "Components/SplineComponent.h"
#include "Engine/World.h"

#include "Math/RandomStream.h"
//The macro in UE5 for speed up the compilation. Just add it
#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGConnectSplinebyID)
//Using Name Space to avoid variable name conflict with engine code. Just add it
#define LOCTEXT_NAMESPACE "PCGConnectSplinebyID"


UPCGConnectSplinebyIDSettings::UPCGConnectSplinebyIDSettings()
{
	bUseSeed = false;
}

TArray<FPCGPinProperties> UPCGConnectSplinebyIDSettings::InputPinProperties() const
{
	TArray<FPCGPinProperties> PinProperties;
	//Source pin input. Giving the data a source label
	FPCGPinProperties& SourcePinProperty = PinProperties.Emplace_GetRef(PCGConnectSplinebyIDConstants::SourcePointsLabel, EPCGDataType::Point, /*bAllowMultipleConnections=*/true);
	SourcePinProperty.SetRequiredPin();
	//Target input pin. Giving the data a target label
	FPCGPinProperties& TargetPinProperty = PinProperties.Emplace_GetRef(PCGConnectSplinebyIDConstants::TargetPointsLabel, EPCGDataType::Point, /*bAllowMultipleConnections=*/true);
	TargetPinProperty.SetRequiredPin();

	return PinProperties;
}

TArray<FPCGPinProperties> UPCGConnectSplinebyIDSettings::OutputPinProperties() const
{
	TArray<FPCGPinProperties> PinProperties;
	PinProperties.Emplace(PCGPinConstants::DefaultOutputLabel, EPCGDataType::Spline);

	return PinProperties;
}

FPCGElementPtr UPCGConnectSplinebyIDSettings::CreateElement() const
{
	return MakeShared<FPCGConnectSplinebyIDElement>();
}

bool FPCGConnectSplinebyIDElement::ExecuteInternal(FPCGContext* Context) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGCreateCableElement::Execute);

	//Input and Output Tagged Data
	const UPCGConnectSplinebyIDSettings* Settings = Context->GetInputSettings<UPCGConnectSplinebyIDSettings>();
	check(Settings);
	const TArray<FPCGTaggedData> Sources = Context->InputData.GetInputsByPin(PCGConnectSplinebyIDConstants::SourcePointsLabel);
	const TArray<FPCGTaggedData> Targets = Context->InputData.GetInputsByPin(PCGConnectSplinebyIDConstants::TargetPointsLabel);
	TArray<FPCGTaggedData>& Outputs = Context->OutputData.TaggedData;
	
	//const int32& CableCounts = Settings->CableCounts;
	EPCGConnectSplinebyIDMode Mode = Settings->Mode;


	//Nested for loop. Source Tagged Data and Target Tagged Data
	//Use Nested Loop directly should be fine because I only have 1 source input and 1 target input
	for (const FPCGTaggedData& Source : Sources)
	{
		for (const FPCGTaggedData& Target : Targets)
		{
			//All kind of pre-setup for input and output data
			//Tagged Data to Spatial Data
			const UPCGSpatialData* SourceSpatialData = Cast<UPCGSpatialData>(Source.Data);
			const UPCGSpatialData* TargetSpatialData = Cast<UPCGSpatialData>(Target.Data);
			if (!SourceSpatialData || !TargetSpatialData)
			{
				PCGE_LOG(Error, GraphAndLog, LOCTEXT("CouldNotObtainSpatialData", "Unable to get Spatial Data from input"));
				return true;
			}

			//Spatial Data to Point Data
			const UPCGPointData* SourcePointData = SourceSpatialData->ToPointData(Context);
			const UPCGPointData* TargetPointData = TargetSpatialData->ToPointData(Context);
			if (!SourcePointData || !TargetPointData)
			{
				PCGE_LOG(Error, GraphAndLog, LOCTEXT("CouldNotGetPointData", "Unable to get Point Data from input"));
				return true;
			}

			//Point Data to Point
			const TArray<FPCGPoint>& SourcePoints = SourcePointData->GetPoints();
			const TArray<FPCGPoint>& TargetPoints = TargetPointData->GetPoints();

			if(SourcePoints.Num()==TargetPoints.Num())
			{
				//Attribute Data
				const UPCGMetadata* SourcePointMetadata = SourcePointData->Metadata;
				const UPCGMetadata* TargetPointMetadata = TargetPointData->Metadata;

				//Get Original Actor
				AActor* TargetActor = Settings->TargetActor.Get() ? Settings->TargetActor.Get() : Context->GetTargetActor(nullptr);
				if (!TargetActor)
				{
					PCGE_LOG(Error, GraphAndLog, LOCTEXT("InvalidTargetActor", "Invalid target actor. Ensure TargetActor member is initialized when creating SpatialData."));
					continue;
				}
				AActor* SplineActor = TargetActor;
				const FTransform SplineActorTransform = SplineActor->GetTransform(); //Store actor location

				//Set spline curve type. For custom tangent value to work, we need to set the mode to Curve Custom Tangent
				ESplinePointType::Type PointType = ESplinePointType::CurveCustomTangent; 

				for(int32 LoopPointCount = 0; LoopPointCount < SourcePoints.Num(); LoopPointCount++)
				{
					//Create PCG Spline Data and Spline Points
					UPCGSplineData* SplineData = NewObject<UPCGSplineData>();
					TArray<FSplinePoint> SplinePoints;
					SplinePoints.Empty();
					SplinePoints.Reserve(2); //We will only randomly pick 2 points for generating spline

					//Use input PCG point to create spline point
					const FPCGPoint& StartPoint = SourcePoints[LoopPointCount]; //Get first PCG Point from input
					const FTransform& StartPointTransform = StartPoint.Transform; //Get transform of first PCG Point
					const FPCGPoint& EndPoint = TargetPoints[LoopPointCount]; //Get seconds PCG Point from input
					const FTransform& EndPointTransform = EndPoint.Transform; //Get transform of second PCG Point
					const FVector StartPointLocalPosition = StartPointTransform.GetLocation() - SplineActorTransform.GetLocation();
					const FVector EndPointLocalPosition = EndPointTransform.GetLocation() - SplineActorTransform.GetLocation();
			
					//Add Start Point from Source pin and End Point from Target pin to Spline points
					//Start point
				
					SplinePoints.Emplace(static_cast<float>(0),
					StartPointLocalPosition,
					FVector(0,0,0),
					FVector(0,0,0),
					StartPointTransform.GetRotation().Rotator(),
					StartPointTransform.GetScale3D(),
					PointType);

					//End point
					SplinePoints.Emplace(static_cast<float>(1),
					EndPointLocalPosition,
					FVector(0,0,0),
					FVector(0,0,0),
					EndPointTransform.GetRotation().Rotator(),
					EndPointTransform.GetScale3D(),
					PointType);
			
					//This will sample by a default distance. EX: no matter input 10 points or 60 points, it will output 30 points as final
					SplineData->Initialize(SplinePoints, false, FTransform(SplineActorTransform.GetLocation() ));

					FPCGTaggedData& Output = Outputs.Add_GetRef(Source);
					//Modify output data. If I don't adjust the data, nothing will happen. Just pass by
					Output.Data = SplineData;

					//Create Spline Component
					USplineComponent* SplineComponent = nullptr;
					if (Settings->Mode != EPCGConnectSplinebyIDMode::CreateDataOnly)
					{
						SplineComponent = NewObject<USplineComponent>(SplineActor); //Spline Actor is the owner of this new component
						SplineComponent->ComponentTags.Add(Context->SourceComponent.Get()->GetFName());
						SplineComponent->ComponentTags.Add(PCGHelpers::DefaultPCGTag);

						//Using Spline Component to initialize spline data
						SplineData->ApplyTo(SplineComponent);

						SplineComponent->RegisterComponent();//Why I need to register? look like new object need to be registered
						SplineActor->AddInstanceComponent(SplineComponent);//why I need to add instance?
						SplineComponent->AttachToComponent(SplineActor->GetRootComponent(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, false));

						UPCGManagedComponent* ManagedComponent = NewObject<UPCGManagedComponent>(Context->SourceComponent.Get());
						ManagedComponent->GeneratedComponent = SplineComponent;
						Context->SourceComponent->AddToManagedResources(ManagedComponent);
					}
				}
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("Source Point counts need to be as same as Target Point counts"));
			}
		}
	}

	// Pass-through settings & exclusions
	Context->OutputData.TaggedData.Append(Context->InputData.GetAllSettings());

	return true;
	}
