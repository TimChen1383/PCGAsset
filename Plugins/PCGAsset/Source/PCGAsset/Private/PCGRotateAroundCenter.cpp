// Fill out your copyright notice in the Description page of Project Settings.
#include "PCGRotateAroundCenter.h"

#include "PCGContext.h"
#include "Data/PCGSpatialData.h"
#include "Data/PCGPointData.h"
#include "Helpers/PCGAsync.h"
#include "Helpers/PCGHelpers.h"
#include "Math/RandomStream.h"
//The macro in UE5 for speed up the compilation. Just add it
#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGRotateAroundCenter)
//Using Name Space to avoid variable name conflict with engine code. Just add it
#define LOCTEXT_NAMESPACE "PCGRotateAroundCenter"


UPCGRotateAroundCenterSettings::UPCGRotateAroundCenterSettings()
{
	bUseSeed = false;
}

FPCGElementPtr UPCGRotateAroundCenterSettings::CreateElement() const
{
	return MakeShared<FPCGRotateAroundCenterElement>();
}

bool FPCGRotateAroundCenterElement::ExecuteInternal(FPCGContext* Context) const
{
	//Store PCG Settings. Use it for get access to all variables we declared or adjusted in PCG Settings in header
	const UPCGRotateAroundCenterSettings* Settings = Context->GetInputSettings<UPCGRotateAroundCenterSettings>();
	check(Settings);
	
	//Create Input and Output data first. We will adjust, set the value and reference back to this variable
	const TArray<FPCGTaggedData> InputsTaggedDatas = Context->InputData.GetInputs();
	TArray<FPCGTaggedData>& Outputs = Context->OutputData.TaggedData;

	//Pass the UPROPERTY variable here. A bit different from normal actor. We can't get access to the data directly
	const FVector& CenterLocation = Settings->CenterLocation;
	const float& RotateDegree = Settings->RotateDegree;
	const EPCGRotateAroundCenterMode& RotateAxis = Settings->RotateAxis;


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
		FPCGAsync::AsyncPointProcessing(Context, InputPoints.Num(), OutputPoints, [&](int32 Index, FPCGPoint& OutPoint)
		//Pass the function as parameter. This is a 2 inputs function: Index and PCG Point. Definition below
		{
			//Get each single point. Output Point's value will be the final output value. Initialize with Input value first
			const FPCGPoint& InputPoint = InputPoints[Index];
			OutPoint = InputPoint;
			
			//This is the final output transform data. Initialize it first
			FTransform SourceTransform = InputPoint.Transform;
			FTransform FinalTransform = InputPoint.Transform;
			FVector SourceLoc = SourceTransform.GetLocation();
			FVector RotateLoc =  SourceLoc - CenterLocation;
			FVector FinalPosition = FVector::Zero();
			if(RotateAxis == EPCGRotateAroundCenterMode::Z)
			{
				FinalPosition = CenterLocation + (RotateLoc.RotateAngleAxis(RotateDegree,FVector(0,0,1)));
			}
			else if (RotateAxis == EPCGRotateAroundCenterMode::Y)
			{
				FinalPosition = CenterLocation + (RotateLoc.RotateAngleAxis(RotateDegree,FVector(0,1,0)));
			}
			else
			{
				FinalPosition = CenterLocation + (RotateLoc.RotateAngleAxis(RotateDegree,FVector(1,0,0)));
			}
			
			FinalTransform.SetLocation(FinalPosition);
			
			//Assign back 
			OutPoint.Transform = FinalTransform;
			
			return true;
		}
		);
		
	}
	
	return true;
}
