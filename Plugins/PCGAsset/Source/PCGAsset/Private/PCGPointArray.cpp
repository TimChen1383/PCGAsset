// Fill out your copyright notice in the Description page of Project Settings.
#include "PCGPointArray.h"

#include "PCGContext.h"
#include "Data/PCGSpatialData.h"
#include "Data/PCGPointData.h"
#include "Helpers/PCGAsync.h"
#include "Helpers/PCGHelpers.h"
#include "Math/RandomStream.h"
//The macro in UE5 for speed up the compilation. Just add it
#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGPointArray)
//Using Name Space to avoid variable name conflict with engine code. Just add it
#define LOCTEXT_NAMESPACE "PCGPointArray"

/**********************************************************************
To do list
- This node should has 1 input pin and 3 output pins
- If I do the scale offset, the mesh will have some overlap. Is there a way to avoid it?

***********************************************************************/

UPCGPointArraySettings::UPCGPointArraySettings()
{
	bUseSeed = true;
}

FPCGElementPtr UPCGPointArraySettings::CreateElement() const
{
	return MakeShared<FPCGPointArrayElement>();
}

bool FPCGPointArrayElement::ExecuteInternal(FPCGContext* Context) const
{
	//Store PCG Settings. Use it for get access to all variables we declared or adjusted in PCG Settings in header
	const UPCGPointArraySettings* Settings = Context->GetInputSettings<UPCGPointArraySettings>();
	check(Settings);
	
	//Create Input and Output data first. We will adjust, set the value and reference back to this variable
	const TArray<FPCGTaggedData> Inputs = Context->InputData.GetInputs();
	TArray<FPCGTaggedData>& Outputs = Context->OutputData.TaggedData;

	//Pass the UPROPERTY variable here
	const int32& DuplicateCounts = Settings->DuplicateCounts;
	const FVector& ZOffset = Settings->ZOffset;
	const FVector& ScaleOffset = Settings->ScaleOffset;
	const float& AllPointsRotationDegree = Settings->AllPointsRotationDegree;
	const float& ObjectRollOffset = Settings->ObjectRollOffset;
	const float& ObjectPitchOffset = Settings->ObjectPitchOffset;
	const float& ObjectYawOffset = Settings->ObjectYawOffset;

	//Loop through all the input PCG Tagged Data. Most of the time we should only have 1 PCG Tagged Data input
	for (const FPCGTaggedData& Input : Inputs)
	{
		//Input : PCG Tagged Data > PCG Spatial Data > PCG Point Data > PCG Points
		const UPCGSpatialData* InputSpatialData = Cast<UPCGSpatialData>(Input.Data);
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
		
		for(int32 DuplicateCount = 0; DuplicateCount<DuplicateCounts; DuplicateCount++)
		{
			//Output : New PCG Points > PCG Point Data > PCG Tagged Data > reference output PCG Tagged Data Array
			FPCGTaggedData& Output = Outputs.Add_GetRef(Input);
			UPCGPointData* OutputPointData = NewObject<UPCGPointData>();
			OutputPointData->InitializeFromData(InputPointData);
			TArray<FPCGPoint>& OutputPoints = OutputPointData->GetMutablePoints();
			Output.Data = OutputPointData;
			
			//Point Loop
			FPCGAsync::AsyncPointProcessing(Context, InputPoints.Num(), OutputPoints, [&](int32 Index, FPCGPoint& OutPoint)
			{
				//Get each single point
				const FPCGPoint& InputPoint = InputPoints[Index];
				OutPoint = InputPoint; //initialize
				
				//Input point transform
				FTransform SourceTransform = InputPoint.Transform;
				FTransform FinalTransform = InputPoint.Transform; //Initialize
				
				//Adjust Z offset and Rotate all points around center
				FVector FinalPosition = (SourceTransform.GetLocation() + (ZOffset * DuplicateCount)).RotateAngleAxis(AllPointsRotationDegree * DuplicateCount, FVector(0,0,1));
				FinalTransform.SetLocation(FinalPosition);

				//Adjust single point rotation
				float PointPitch = SourceTransform.GetRotation().Rotator().Pitch + (ObjectPitchOffset * DuplicateCount);
				float PointYaw = SourceTransform.GetRotation().Rotator().Yaw + (ObjectYawOffset * DuplicateCount);
				float PointRoll = SourceTransform.GetRotation().Rotator().Roll + (ObjectRollOffset * DuplicateCount);
				FQuat QuatRotation = FRotator(PointPitch,PointYaw,PointRoll).Quaternion();
				FinalTransform.SetRotation(QuatRotation);

				
				//Adjust scale
				FVector FinalScale = SourceTransform.GetScale3D() + (ScaleOffset*DuplicateCount);
				FinalTransform.SetScale3D(FinalScale);
				
				//Return final transform
				OutPoint.Transform = FinalTransform;
			
				return true;
				
			}
			);
		}
	}
	return true;
}

