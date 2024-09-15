// Fill out your copyright notice in the Description page of Project Settings.
#include "PCGRandomWalker.h"

#include "PCGContext.h"
#include "Data/PCGSpatialData.h"
#include "Data/PCGPointData.h"
#include "Helpers/PCGAsync.h"
#include "Helpers/PCGHelpers.h"
#include "Math/RandomStream.h"
//The macro in UE5 for speed up the compilation. Just add it
#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGRandomWalker)
//Using Name Space to avoid variable name conflict with engine code. Just add it
#define LOCTEXT_NAMESPACE "PCGRandomWalker"
/**********************************************************************
To do list
- Random walker should not need input point
***********************************************************************/
UPCGRandomWalkerSettings::UPCGRandomWalkerSettings()
{
	bUseSeed = false;
}

FPCGElementPtr UPCGRandomWalkerSettings::CreateElement() const
{
	return MakeShared<FPCGRandomWalkerElement>();
}

bool FPCGRandomWalkerElement::ExecuteInternal(FPCGContext* Context) const
{
	//Store PCG Settings. Use it for get access to all variables we declared or adjusted in PCG Settings in header
	const UPCGRandomWalkerSettings* Settings = Context->GetInputSettings<UPCGRandomWalkerSettings>();
	check(Settings);
	
	//Create Input and Output data first. We will adjust, set the value and reference back to this variable
	const TArray<FPCGTaggedData> InputsTaggedDatas = Context->InputData.GetInputs();
	TArray<FPCGTaggedData>& Outputs = Context->OutputData.TaggedData;

	//Pass the UPROPERTY variable here. A bit different from normal actor. We can't get access to the data directly
	const FVector& CustomOffset = Settings->CustomOffset;
	const int32& WalkCounts = Settings->WalkCounts;
	const float& WalkStepSize = Settings->WalkStepSize;
	const int32& RandomSeed = Settings->RandomSeed;

	FRandomStream RandStream;
	RandStream.Initialize(RandomSeed);

	//Loop through all the input PCG Tagged Data. Most of the time we should only have 1 PCG Tagged Data input
	for (const FPCGTaggedData& InputsTaggedData : InputsTaggedDatas)
	{
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

		FVector WalkerLocation = FVector::Zero();
		for(int32 WalkCount = 0; WalkCount < WalkCounts; WalkCount++)
		{
			//Walk one new step
			int32 WalkerDirection = RandStream.RandRange(0,3);
			FVector WalkerStep = FVector::Zero();
			if(WalkerDirection == 0)
			{
				WalkerStep = FVector(0,WalkStepSize,0);
			}
			else if (WalkerDirection == 1)
			{
				WalkerStep = FVector(WalkStepSize,0,0);
			}
			else if (WalkerDirection == 2)
			{
				WalkerStep = FVector(0,-WalkStepSize,0);
			}
			else
			{
				WalkerStep = FVector(-WalkStepSize,0,0);
			}
			WalkerLocation = WalkerLocation + WalkerStep;
			
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
				//Get each single point. Output Point's value will be the final output value. Initialize with Input value first
				const FPCGPoint& InputPoint = InputPoints[Index];
				OutPoint = InputPoint;

				/*******************************************
				Actual Point adjustment - start
				********************************************/
			
				//This is the final output transform data. Initialize it first
				FTransform SourceTransform = InputPoint.Transform;
				FTransform FinalTransform = InputPoint.Transform;
				FVector FinalPosition = WalkerLocation;
				FinalTransform.SetLocation(FinalPosition);
			
			
				/*******************************************
				Actual Point adjustment - end
				********************************************/
			
				//Assign back 
				OutPoint.Transform = FinalTransform;
			
				return true;
			}
			);
		}
		
		
	}
	
	return true;
}
