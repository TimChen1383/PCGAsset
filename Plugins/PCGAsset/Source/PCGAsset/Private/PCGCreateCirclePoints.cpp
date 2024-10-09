// Fill out your copyright notice in the Description page of Project Settings.
#include "PCGCreateCirclePoints.h"
#include "PCGContext.h"
#include "PCGPin.h"
#include "Data/PCGSpatialData.h"
#include "Data/PCGPointData.h"
#include "Helpers/PCGAsync.h"
#include "Helpers/PCGHelpers.h"
#include "Math/RandomStream.h"
#include "Kismet/KismetMathLibrary.h"
//The macro in UE5 for speed up the compilation. Just add it
#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGCreateCirclePoints)
//Using Name Space to avoid variable name conflict with engine code. Just add it
#define LOCTEXT_NAMESPACE "PCGCreateCirclePoints"

/*******************************************
To do list:
- when circle point counts more than 40, it will not be a full circle (generate a gap) - close Loop?
- add sine wave to the circle
- Sine wave works very weird. Suppose to generate star shape base on frequency 1,2,3,4,5...(but it generated a weird shape)
- choose the point to face center or face tangent
- direction face in, direction face out
- rotate along circle
- Do something like this : https://www.youtube.com/watch?v=s7bJrqeDQCY&ab_channel=MustafaMahirAtar
- How to achieve this : https://www.youtube.com/watch?v=_vP2vukNEZo&ab_channel=Qworco-UnrealEngine
********************************************/

//Override PCG Settings' default value
UPCGCreateCircleSettings::UPCGCreateCircleSettings()
{
	bUseSeed = true;
}

TArray<FPCGPinProperties> UPCGCreateCircleSettings::InputPinProperties() const
{
	//Input nothing. No input pin
	return TArray<FPCGPinProperties>();
}

FPCGElementPtr UPCGCreateCircleSettings::CreateElement() const
{
	return MakeShared<FPCGCreateCircleElement>();
}

//No need to loop through all PCG Tagged Data because there is no input
bool FPCGCreateCircleElement::ExecuteInternal(FPCGContext* Context) const
{
	check(Context && Context->SourceComponent.Get());
	
	//Store PCG Settings. Use it for get access to all variables we declared or adjusted in PCG Settings in header
	const UPCGCreateCircleSettings* Settings = Context->GetInputSettings<UPCGCreateCircleSettings>();
	check(Settings);
	

	//Pass the UPROPERTY variable here. A bit different from normal actor. We can't get access to the data directly
	const int64& CircleDegree = Settings->CircleDegree;
	const int64& CirclePointCounts = Settings->CirclePointCounts;
	const float& CircleRadius = Settings->CircleRadius;
	const float& SineFrequency = Settings->SineFrequency;
	const float& SineAltitude = Settings->SineAltitude;
	const bool& ReverseDirection = Settings->ReverseDirection;
	const EPCGCreateCirclePointsMode& FacingDirection = Settings->FacingDirection;
	
	//Setup Output data
	TArray<FPCGTaggedData>& Outputs = Context->OutputData.TaggedData;
	FPCGTaggedData& Output = Outputs.Emplace_GetRef();
	UPCGPointData* OutputPointData = NewObject<UPCGPointData>();
	check(OutputPointData);
	TArray<FPCGPoint>& OutputPoints = OutputPointData->GetMutablePoints();
	Output.Data = OutputPointData;


	//Run Iteration Loop. Data will reference back after the function loop through all PCG points
	FPCGAsync::AsyncPointProcessing(Context, CirclePointCounts, OutputPoints, [&](int32 Index, FPCGPoint& OutPoint)
	{
		//Create new points
		OutPoint = FPCGPoint();
		/*******************************************
		Actual Point adjustment - start
		********************************************/




		
		FTransform PointTransform = FTransform::Identity;
		int64 CurrentPointDegree = CircleDegree/CirclePointCounts*Index;
		float AdditionalSineWave = (FMath::Sin(CurrentPointDegree*SineFrequency)*SineAltitude)+CircleRadius;
		FRotator CenterDirectRot = FRotator(0,CurrentPointDegree,0);
		FVector CenterDirectVec = CenterDirectRot.Vector()*AdditionalSineWave;
		FRotator LookAtRot;
		
		if(FacingDirection== EPCGCreateCirclePointsMode::Inward)
		{
			LookAtRot = UKismetMathLibrary::FindLookAtRotation(CenterDirectVec,FVector::Zero());
		}
		else if(FacingDirection== EPCGCreateCirclePointsMode::Outward)
		{
			
			LookAtRot = UKismetMathLibrary::FindLookAtRotation(FVector::Zero(),CenterDirectVec);
		}
		else if (FacingDirection== EPCGCreateCirclePointsMode::TangentA)
		{
			LookAtRot = CenterDirectVec.Cross(FVector(0,0,1)).Rotation();
		}
		else
		{
			LookAtRot = CenterDirectVec.Cross(FVector(0,0,-1)).Rotation();
		}
		FVector OutScale = FVector(1,1,1);
		FTransform FinalTransform = FTransform(LookAtRot,CenterDirectVec,OutScale);
		PointTransform = FinalTransform;
			
		/*******************************************
		Actual Point adjustment - end
		********************************************/
		OutPoint.Transform = PointTransform;
		OutPoint.Seed = PCGHelpers::ComputeSeedFromPosition(PointTransform.GetLocation());
	
		return true;
		});
	return true;
}


