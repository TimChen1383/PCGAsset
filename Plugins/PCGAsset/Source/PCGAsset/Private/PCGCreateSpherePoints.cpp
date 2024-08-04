// Fill out your copyright notice in the Description page of Project Settings.
#include "PCGCreateSpherePoints.h"

#include "PCGContext.h"
#include "Data/PCGSpatialData.h"
#include "Data/PCGPointData.h"
#include "Helpers/PCGAsync.h"
#include "Helpers/PCGHelpers.h"
#include "Math/RandomStream.h"
//The macro in UE5 for speed up the compilation. Just add it
#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGCreateSpherePoints)
//Using Name Space to avoid variable name conflict with engine code. Just add it
#define LOCTEXT_NAMESPACE "PCGCreateSpherePoints"

float u = FMath::GetMappedRangeValueClamped(FVector2D(0, 1), FVector2D(0, 100), 23);

UPCGCreateSpherePointsSettings::UPCGCreateSpherePointsSettings()
{
	bUseSeed = true;
}

FPCGElementPtr UPCGCreateSpherePointsSettings::CreateElement() const
{
	return MakeShared<FPCGCreateSpherePointsElement>();
}

bool FPCGCreateSpherePointsElement::ExecuteInternal(FPCGContext* Context) const
{
	check(Context && Context->SourceComponent.Get());
	
	//Store PCG Settings. Use it for get access to all variables we declared or adjusted in PCG Settings in header
	const UPCGCreateSpherePointsSettings* Settings = Context->GetInputSettings<UPCGCreateSpherePointsSettings>();
	check(Settings);
	

	//Pass the UPROPERTY variable here. A bit different from normal actor. We can't get access to the data directly
	const int32& TotalPointCount = Settings->TotalPointCount;
	
	
	//Setup Output data
	TArray<FPCGTaggedData>& Outputs = Context->OutputData.TaggedData;
	FPCGTaggedData& Output = Outputs.Emplace_GetRef();
	UPCGPointData* OutputPointData = NewObject<UPCGPointData>();
	check(OutputPointData);
	TArray<FPCGPoint>& OutputPoints = OutputPointData->GetMutablePoints();
	Output.Data = OutputPointData;


	//Run Iteration Loop. Data will reference back after the function loop through all PCG points
	FPCGAsync::AsyncPointProcessing(Context, TotalPointCount, OutputPoints, [&](int32 Index, FPCGPoint& OutPoint)
	{
		OutPoint = FPCGPoint();
		/*******************************************
		Actual Point adjustment - start
		********************************************/
			
		//Create new points
		
		FTransform PointTransform = FTransform::Identity;
		//FTransform FinalTransform = FTransform(LookAtRot,CenterDirectVec,OutScale);
		//PointTransform = FinalTransform;
			
		/*******************************************
		Actual Point adjustment - end
		********************************************/
		OutPoint.Transform = PointTransform;
		OutPoint.Seed = PCGHelpers::ComputeSeedFromPosition(PointTransform.GetLocation());
	
		return true;
		});
	return true;
}
