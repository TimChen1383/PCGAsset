// Fill out your copyright notice in the Description page of Project Settings.

#include "ApplyLocalTransform.h"
#include "PCGTemplate.h"
#include "PCGContext.h"
#include "PCGPin.h"
#include "Data/PCGSpatialData.h"
#include "Data/PCGPointData.h"
#include "Helpers/PCGAsync.h"
#include "Helpers/PCGHelpers.h"
#include "Math/RandomStream.h"
//The macro in UE5 for speed up the compilation. Just add it
#include "PCGComponent.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(ApplyLocalTransform)
//Using Name Space to avoid variable name conflict with engine code. Just add it
#define LOCTEXT_NAMESPACE "ApplyLocalTransform"


UPCGApplyLocalTransformSettings::UPCGApplyLocalTransformSettings()
{
	bUseSeed = true;
}

void UPCGApplyLocalTransformSettings::PostLoad()
{
	Super::PostLoad();
}

FPCGElementPtr UPCGApplyLocalTransformSettings::CreateElement() const
{
	return MakeShared<FPCGApplyLocalTransformElement>();
}

bool FPCGApplyLocalTransformElement::ExecuteInternal(FPCGContext* Context) const
{
	
	//Store PCG Settings. Use it for get access to all variables we declared or adjusted in PCG Settings in header
	const UPCGApplyLocalTransformSettings* Settings = Context->GetInputSettings<UPCGApplyLocalTransformSettings>();
	check(Settings);
	
	//Create Input and Output data first. We will adjust, set the value and reference back to this variable
	const TArray<FPCGTaggedData> InputsTaggedDatas = Context->InputData.GetInputs();
	TArray<FPCGTaggedData>& Outputs = Context->OutputData.TaggedData;




	//Loop through all the input PCG Tagged Data. Most of the time we should only have 1 PCG Tagged Data input
	for (const FPCGTaggedData& InputsTaggedData : InputsTaggedDatas)
	{
		//Debug message
		if(GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Debug message from apply transform Tagged Data!"));	

		//Input : PCG Tagged Data > PCG Spatial Data > PCG Point Data > PCG Points
		const UPCGSpatialData* InputSpatialData = Cast<UPCGSpatialData>(InputsTaggedData.Data);
		if (!InputSpatialData)
		{
			PCGE_LOG(Error, GraphAndLog, LOCTEXT("InputMissingSpatialData", "Unable to get Spatial data from input"));
			continue;
		}
		const UPCGPointData* InputPointData = InputSpatialData->ToPointData(Context);
		if (!InputPointData)
		{
			PCGE_LOG(Error, GraphAndLog, LOCTEXT("InputMissingPointData", "Unable to get Point data from input"));
			continue;
		}
		const TArray<FPCGPoint>& InputPoints = InputPointData->GetPoints();

		
		//Output : New PCG Points > PCG Point Data > PCG Tagged Data > reference output PCG Tagged Data Array
		//It's using reference. Adjust the data and send it back later
		FPCGTaggedData& Output = Outputs.Add_GetRef(InputsTaggedData);
		UPCGPointData* OutputPointData = NewObject<UPCGPointData>();
		OutputPointData->InitializeFromData(InputPointData);
		TArray<FPCGPoint>& OutputPoints = OutputPointData->GetMutablePoints();
		Output.Data = OutputPointData;



		
		//Run Point Loop. Data will reference back after the function loop through all PCG points
		FPCGAsync::AsyncPointProcessing(Context, InputPoints.Num(), OutputPoints, [&](int32 Index, FPCGPoint& OutPoint)
		//Pass the function as parameter. This is a 2 inputs function: Index and PCG Point. Definition below
		{
			//Debug message
			//if(GEngine)
			//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Debug message from apply transform Async!"));	

			//Not sure it works or not. Just for test purpose
			OutPoint = FPCGPoint();
			
			//Get each single point. Output Point's value will be the final output value. Initialize with Input value first
			const FPCGPoint& InputPoint = InputPoints[Index];
			OutPoint = InputPoint;

			/*******************************************
			Actual Point adjustment - start
			********************************************/

			//Get Current actor transform. Can't be inside Point Loop!?
			FTransform LocalTransform = FTransform::Identity;
			check(Context->SourceComponent->GetOriginalComponent() && Context->SourceComponent->GetOriginalComponent()->GetOwner());
			LocalTransform = Context->SourceComponent->GetOriginalComponent()->GetOwner()->GetActorTransform();

			//FVector DebugValue= LocalTransform.GetLocation();
			//GEngine->AddOnScreenDebugMessage(-1,200,FColor::Green,FString::Printf(TEXT("Hello %s"),DebugValue.ToString()));
			//UE_LOG(LogTemp,Warning,TEXT("MyCharacter's Location is %s"), *DebugValue.ToString());

			OutPoint.Transform *= LocalTransform;

			
			/*******************************************
			Actual Point adjustment - end
			********************************************/
			
			//Not sure it works or not. Just for test purpose
			OutPoint.Seed = PCGHelpers::ComputeSeedFromPosition(LocalTransform.GetLocation());
			
			return true;
		}
		);
		
	}
	
	return true;
}



