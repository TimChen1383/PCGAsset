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

UPCGPointArraySettings::UPCGPointArraySettings()
{
	bUseSeed = false;
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
	const FVector& LocationIncrement = Settings->LocationIncrement;
	const FVector& ScaleOffset = Settings->ScaleOffset;
	const float& RotateAlongAxisDegree = Settings->RotateAlongAxisDegree;
	const FRotator& RotationOffset = Settings->RotationOffset;
	const EPCGPointArrayScaleMode& ScaleMode = Settings->ScaleMode;
	const EPCGPointArrayRotationMode& RotationMode = Settings->RotationMode;
	const EPCGPointArrayRotateAlongAxisMode& RotateAlongAxisMode = Settings->RotateAlongAxisMode;

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
				
				//Rotate along axis
				if(RotateAlongAxisMode == EPCGPointArrayRotateAlongAxisMode::Z)
				{
					FVector FinalPosition = (SourceTransform.GetLocation() + (LocationIncrement * DuplicateCount)).RotateAngleAxis(RotateAlongAxisDegree * DuplicateCount, FVector(0,0,1));
					FinalTransform.SetLocation(FinalPosition);
				}
				else if (RotateAlongAxisMode == EPCGPointArrayRotateAlongAxisMode::Y)
				{
					FVector FinalPosition = (SourceTransform.GetLocation() + (LocationIncrement * DuplicateCount)).RotateAngleAxis(RotateAlongAxisDegree * DuplicateCount, FVector(0,1,0));
					FinalTransform.SetLocation(FinalPosition);	
				}
				else
				{
					FVector FinalPosition = (SourceTransform.GetLocation() + (LocationIncrement * DuplicateCount)).RotateAngleAxis(RotateAlongAxisDegree * DuplicateCount, FVector(1,0,0));
					FinalTransform.SetLocation(FinalPosition);
				}


				//Adjust point rotation
				if(RotationMode == EPCGPointArrayRotationMode::Fix)
				{
					float PointPitch = SourceTransform.GetRotation().Rotator().Pitch + (RotationOffset.Pitch);
					float PointYaw = SourceTransform.GetRotation().Rotator().Yaw + (RotationOffset.Yaw);
					float PointRoll = SourceTransform.GetRotation().Rotator().Roll + (RotationOffset.Roll);
					FQuat QuatRotation = FRotator(PointPitch,PointYaw,PointRoll).Quaternion();
					FinalTransform.SetRotation(QuatRotation);
				}
				else
				{
					float PointPitch = SourceTransform.GetRotation().Rotator().Pitch + (RotationOffset.Pitch * DuplicateCount);
					float PointYaw = SourceTransform.GetRotation().Rotator().Yaw + (RotationOffset.Yaw * DuplicateCount);
					float PointRoll = SourceTransform.GetRotation().Rotator().Roll + (RotationOffset.Roll * DuplicateCount);
					FQuat QuatRotation = FRotator(PointPitch,PointYaw,PointRoll).Quaternion();
					FinalTransform.SetRotation(QuatRotation);
				}
				
				//Adjust point scale
				if(ScaleMode == EPCGPointArrayScaleMode::Fix)
				{
					FVector FinalScale = SourceTransform.GetScale3D() + ScaleOffset;
					FinalTransform.SetScale3D(FinalScale);
				}
				else
				{
					FVector FinalScale = SourceTransform.GetScale3D() + (ScaleOffset*DuplicateCount);
					FinalTransform.SetScale3D(FinalScale);
				}

				
				//Return final transform
				OutPoint.Transform = FinalTransform;
			
				return true;
				
			}
			);
		}
	}
	return true;
}

