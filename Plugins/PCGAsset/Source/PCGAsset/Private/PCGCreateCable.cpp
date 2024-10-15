// Fill out your copyright notice in the Description page of Project Settings.

#include "PCGCreateCable.h"

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

#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGCreateCable)

#define LOCTEXT_NAMESPACE "PCGCreateCable"


UPCGCreateCableSettings::UPCGCreateCableSettings(const FObjectInitializer& ObjectInitializer)
	: UPCGSettings(ObjectInitializer)
{
	if (PCGHelpers::IsNewObjectAndNotDefault(this))
	{
		AttachOptions = EPCGAttachOptions::InFolder;
	}
}

#if WITH_EDITOR
FText UPCGCreateCableSettings::GetNodeTooltipText() const
{
	return LOCTEXT("CreateSplineTooltip", "Creates PCG spline data from the input PCG point data, in a sequential order.");
}
#endif

//Change Output pin type to spline
TArray<FPCGPinProperties> UPCGCreateCableSettings::OutputPinProperties() const
{
	TArray<FPCGPinProperties> PinProperties;
	PinProperties.Emplace(PCGPinConstants::DefaultOutputLabel, EPCGDataType::Spline);

	return PinProperties;
}

FPCGElementPtr UPCGCreateCableSettings::CreateElement() const
{
	return MakeShared<FPCGCreateCableElement>();
}


bool FPCGCreateCableElement::CanExecuteOnlyOnMainThread(FPCGContext* Context) const
{
	const UPCGCreateCableSettings* Settings = Context->GetInputSettings<UPCGCreateCableSettings>();
	return Settings && Settings->Mode == EPCGCreateCableMode::CreateNewActor;
}


bool FPCGCreateCableElement::IsCacheable(const UPCGSettings* InSettings) const
{
	const UPCGCreateCableSettings* Settings = Cast<const UPCGCreateCableSettings>(InSettings);
	return !Settings || Settings->Mode == EPCGCreateCableMode::CreateDataOnly;
}

bool FPCGCreateCableElement::ExecuteInternal(FPCGContext* Context) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGCreateCableElement::Execute);

	//All kind of input default settings
	const UPCGCreateCableSettings* Settings = Context->GetInputSettings<UPCGCreateCableSettings>();
	check(Settings);
	TArray<FPCGTaggedData> Inputs = Context->InputData.GetInputs();
	TArray<FPCGTaggedData>& Outputs = Context->OutputData.TaggedData;
	EPCGCreateCableMode Mode = Settings->Mode;

	//User Custom Value
	const int32& CableCounts = Settings->CableCounts;
	const float& TangentAmount = Settings->TangentAmount;
	const int32& RandomSeed = Settings->RandomSeed;
	
	FRandomStream RandStream;
	RandStream.Initialize(RandomSeed);

	for (const FPCGTaggedData& Input : Inputs)
	{
		//All kind of pre-setup for input and output data
		const UPCGSpatialData* SpatialData = Cast<UPCGSpatialData>(Input.Data);
		if (!SpatialData)
		{
			PCGE_LOG(Error, GraphAndLog, LOCTEXT("InvalidInputData", "Invalid input data"));
			continue;
		}
		AActor* TargetActor = Settings->TargetActor.Get() ? Settings->TargetActor.Get() : Context->GetTargetActor(nullptr);
		if (!TargetActor)
		{
			PCGE_LOG(Error, GraphAndLog, LOCTEXT("InvalidTargetActor", "Invalid target actor. Ensure TargetActor member is initialized when creating SpatialData."));
			continue;
		}
		const UPCGPointData* PointData = SpatialData->ToPointData(Context);
		if (!PointData)
		{
			PCGE_LOG(Error, GraphAndLog, LOCTEXT("UnableToGetPointData", "Unable to get point data from input"));
			continue;
		}
		
		AActor* SplineActor = TargetActor;
		
		//Essential Data no need to be in loop
		const TArray<FPCGPoint>& Points = PointData->GetPoints();
		const FTransform SplineActorTransform = SplineActor->GetTransform(); //Store spline location
		//Set spline curve type. For custom tangent value to work, we need to set the mode to Curve Custom Tangent
		ESplinePointType::Type PointType = ESplinePointType::CurveCustomTangent;
		int32 PointNum = Points.Num();

		if(PointNum > 0)
		{
		for(int32 CableCount = 0; CableCount < CableCounts; CableCount++)
		{
			//Create PCG Spline Data and Spline Points
			UPCGSplineData* SplineData = NewObject<UPCGSplineData>();
			TArray<FSplinePoint> SplinePoints;
			SplinePoints.Empty();
			SplinePoints.Reserve(2); //We will only randomly pick 2 points for generating spline

			//Get data from input PCG point
			int32 Point1Num = RandStream.RandRange(0,Points.Num()-1);
			int32 Point2Num = RandStream.RandRange(0,Points.Num()-1);
			if(Point2Num == Point1Num)
			{
				Point2Num = Point2Num + 1;
				if (Point2Num > (Points.Num()-1))
				{
					Point2Num = Point2Num - 2;
				}
			}
			const FPCGPoint& Point1 = Points[RandStream.RandRange(0,Points.Num()-1)]; //Get first PCG Point from input
			const FTransform& PointTransform1 = Point1.Transform; //Get transform of first PCG Point
			const FVector LocalPosition1 = PointTransform1.GetLocation() - SplineActorTransform.GetLocation();
			const FPCGPoint& Point2 = Points[RandStream.RandRange(0,Points.Num()-1)]; //Get seconds PCG Point from input
			const FTransform& PointTransform2 = Point2.Transform; //Get transform of second PCG Point
			const FVector LocalPosition2 = PointTransform2.GetLocation() - SplineActorTransform.GetLocation();
			
			//Add randomly picked 2 points to Spline points
			//First point
			SplinePoints.Emplace(static_cast<float>(0),
				LocalPosition1,
				FVector(0,0,-(TangentAmount)),
				FVector(0,0,-(TangentAmount)),
				PointTransform1.GetRotation().Rotator(),
				PointTransform1.GetScale3D(),
				PointType);

			//Second point
			SplinePoints.Emplace(static_cast<float>(1),
				LocalPosition2,
				FVector(0,0,TangentAmount),
				FVector(0,0,TangentAmount),
				PointTransform2.GetRotation().Rotator(),
				PointTransform2.GetScale3D(),
				PointType);
			
			//Seems like this will use the spline points to re-sample the Spline Data. The point counts may be different compare to input
			//This will sample by a default distance. EX: no matter input 10 points or 60 points, it will output 30 points as final
			SplineData->Initialize(SplinePoints, false, FTransform(SplineActorTransform.GetLocation() ));

			FPCGTaggedData& Output = Outputs.Add_GetRef(Input);
			//Modify output data. If I don't adjust the data, nothing will happen. Just pass by
			Output.Data = SplineData;

			//Create Spline Component
			USplineComponent* SplineComponent = nullptr;
			if (Settings->Mode != EPCGCreateCableMode::CreateDataOnly)
			{
				SplineComponent = NewObject<USplineComponent>(SplineActor); //Spline Actor is the owner of this new component
				SplineComponent->ComponentTags.Add(Context->SourceComponent.Get()->GetFName());
				SplineComponent->ComponentTags.Add(PCGHelpers::DefaultPCGTag);

				//Seems like using Spline Component to initialize spline data
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
	}

	// Pass-through settings & exclusions
	Context->OutputData.TaggedData.Append(Context->InputData.GetAllSettings());

	return true;
}

#undef LOCTEXT_NAMESPACE