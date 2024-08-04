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

UPCGCreateSpiralSplineSettings::UPCGCreateSpiralSplineSettings()
{
	bUseSeed = true;
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
	
	//Create Input and Output data first. We will adjust, set the value and reference back to this variable
	const TArray<FPCGTaggedData> InputsTaggedDatas = Context->InputData.GetInputs();
	TArray<FPCGTaggedData>& Outputs = Context->OutputData.TaggedData;

	//Pass the UPROPERTY variable here. A bit different from normal actor. We can't get access to the data directly
	const FVector& IncrementZOffset = Settings->IncrementZOffset;
	const float& IncrementDegree = Settings->IncrementDegree;
	const float& CircleRadius = Settings->CircleRadius;
	const int32& CirclePointCounts = Settings->CirclePointCounts;


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

		
		//Output : New PCG Points > PCG Point Data > PCG Tagged Data > reference output PCG Tagged Data Array
		//It's using reference. Adjust the data and send it back later
		FPCGTaggedData& Output = Outputs.Add_GetRef(InputsTaggedData);
		UPCGPointData* OutputPointData = NewObject<UPCGPointData>();
		OutputPointData->InitializeFromData(InputPointData);
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
	}
	
	return true;
}
