// Fill out your copyright notice in the Description page of Project Settings.
#include "PCGRandomWalker.h"

#include "PCGContext.h"
#include "Data/PCGSpatialData.h"
#include "Data/PCGPointData.h"
#include "Helpers/PCGAsync.h"
#include "Helpers/PCGHelpers.h"
#include "Math/RandomStream.h"
#include "Kismet/KismetMathLibrary.h"
//The macro in UE5 for speed up the compilation. Just add it
#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGRandomWalker)
//Using Name Space to avoid variable name conflict with engine code. Just add it
#define LOCTEXT_NAMESPACE "PCGRandomWalker"

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
	check(Context && Context->SourceComponent.Get());
	//Store PCG Settings. Use it for get access to all variables we declared or adjusted in PCG Settings in header
	const UPCGRandomWalkerSettings* Settings = Context->GetInputSettings<UPCGRandomWalkerSettings>();
	check(Settings);
	
	//Pass the UPROPERTY variable here. A bit different from normal actor. We can't get access to the data directly
	const int32& WalkCounts = Settings->WalkCounts;
	const float& WalkStepSize = Settings->WalkStepSize;
	const int32& RandomSeed = Settings->RandomSeed;
	
	//Setup Output data
	TArray<FPCGTaggedData>& Outputs = Context->OutputData.TaggedData;
	FPCGTaggedData& Output = Outputs.Emplace_GetRef();
	UPCGPointData* OutputPointData = NewObject<UPCGPointData>();
	check(OutputPointData);
	TArray<FPCGPoint>& OutputPoints = OutputPointData->GetMutablePoints();
	Output.Data = OutputPointData;
	
	//Prepare walker's step
	FVector WalkerLocation = FVector::Zero();
	FRandomStream RandStream;
	RandStream.Initialize(RandomSeed);

	//Run Point Loop. Data will reference back after the function loop through all PCG points
	FPCGAsync::AsyncPointProcessing(Context, WalkCounts, OutputPoints, [&](int32 Index, FPCGPoint& OutPoint)
	{
		//Create new points
		OutPoint = FPCGPoint();
		
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
		WalkerLocation += WalkerStep;
			
		//This is the final output transform data. Initialize it first
		FTransform PointTransform = FTransform::Identity;
		FVector FinalPosition = WalkerLocation;
		PointTransform.SetLocation(FinalPosition);
			
		//Assign back 
		OutPoint.Transform = PointTransform;
		OutPoint.Seed = PCGHelpers::ComputeSeedFromPosition(PointTransform.GetLocation());
			
		return true;
	}
	);
	
	return true;
}
