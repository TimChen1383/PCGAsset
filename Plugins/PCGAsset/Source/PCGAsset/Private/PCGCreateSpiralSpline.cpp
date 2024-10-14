// Fill out your copyright notice in the Description page of Project Settings.
#include "PCGCreateSpiralSpline.h"

#include "PCGContext.h"
#include "Data/PCGSpatialData.h"
#include "Data/PCGPointData.h"
#include "Helpers/PCGAsync.h"
#include "Kismet/KismetMathLibrary.h"
#include "Helpers/PCGHelpers.h"
#include "Math/RandomStream.h"
//The macro in UE5 for speed up the compilation. Just add it
#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGCreateSpiralSpline)
//Using Name Space to avoid variable name conflict with engine code. Just add it
#define LOCTEXT_NAMESPACE "PCGCreateSpiralSpline"

/*******************************************
To do list:
- Currently only spiral points. Create a spline component later. - Can decide to show it or hide it
- Make sure the object rotation face the center
- The size can be bigger and bigger
- The size can be big > small > big
- for arch shape, can be combined with my twist spline node (If we use big > small > big scale)
- for arch shape, we can have 3 splines with slightly offset. The shape will looks cooler
https://www.youtube.com/watch?v=JlQZZg2akDk&ab_channel=Om.egvo
- We can also have multiple spline twisted together
https://www.youtube.com/watch?v=3xhevkiefMA&ab_channel=webduncetv
********************************************/

UPCGCreateSpiralSplineSettings::UPCGCreateSpiralSplineSettings()
{
	bUseSeed = false;
}

FPCGElementPtr UPCGCreateSpiralSplineSettings::CreateElement() const
{
	return MakeShared<FPCGCreateSpiralSplineElement>();
}

bool FPCGCreateSpiralSplineElement::ExecuteInternal(FPCGContext* Context) const
{
	//Store PCG Settings. Use it for get access to all variables we declared or adjusted in PCG Settings in header
	const UPCGCreateSpiralSplineSettings* Settings = Context->GetInputSettings<UPCGCreateSpiralSplineSettings>();
	check(Settings);
	
	//Pass the UPROPERTY variable here. A bit different from normal actor. We can't get access to the data directly
	const FVector& IncrementZOffset = Settings->IncrementZOffset;
	const float& IncrementDegree = Settings->IncrementDegree;
	const float& CircleRadius = Settings->CircleRadius;
	const int32& CirclePointCounts = Settings->CirclePointCounts;

	//Setup Output data
	TArray<FPCGTaggedData>& Outputs = Context->OutputData.TaggedData;
	FPCGTaggedData& Output = Outputs.Emplace_GetRef();
	UPCGPointData* OutputPointData = NewObject<UPCGPointData>();
	check(OutputPointData);
	TArray<FPCGPoint>& OutputPoints = OutputPointData->GetMutablePoints();
	Output.Data = OutputPointData;


	//Run Point Loop. Data will reference back after the function loop through all PCG points
	FPCGAsync::AsyncPointProcessing(Context, CirclePointCounts, OutputPoints, [&](int32 Index, FPCGPoint& OutPoint)
	//Pass the function as parameter. This is a 2 inputs function: Index and PCG Point. Definition below
	{
		OutPoint = FPCGPoint();
			
		/*******************************************
		Actual Point adjustment - start
		********************************************/
			
		//Create new points
		FTransform PointTransform = FTransform::Identity;
		int64 CurrentPointDegree = IncrementDegree * Index;
		FRotator CenterDirectRot = FRotator(0,CurrentPointDegree,0);
		FVector CenterDirectVec = CenterDirectRot.Vector() * CircleRadius;
		FVector PointPos =  CenterDirectVec + (Index * IncrementZOffset);
		FRotator LookAtRot = UKismetMathLibrary::FindLookAtRotation(CenterDirectVec,FVector::Zero());
		FVector OutScale = FVector(1,1,1);
		FTransform FinalTransform = FTransform(LookAtRot,PointPos,OutScale);
		PointTransform = FinalTransform;
			
		/*******************************************
		Actual Point adjustment - end
		********************************************/
		OutPoint.Transform = PointTransform;
		OutPoint.Seed = PCGHelpers::ComputeSeedFromPosition(PointTransform.GetLocation());
	
		return true;
	}
	);
	return true;
}

