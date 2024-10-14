// Fill out your copyright notice in the Description page of Project Settings.
#include "PCGPerlinNoise.h"

#include "PCGContext.h"
#include "PCGPin.h"
#include "Data/PCGSpatialData.h"
#include "Data/PCGPointData.h"
#include "Helpers/PCGAsync.h"
#include "Helpers/PCGHelpers.h"
#include "Math/RandomStream.h"
//The macro in UE5 for speed up the compilation. Just add it
#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGPerlinNoise)
//Using Name Space to avoid variable name conflict with engine code. Just add it
#define LOCTEXT_NAMESPACE "PCGPerlinNoise"


UPCGPerlinNoise2DSettings::UPCGPerlinNoise2DSettings()
{
	bUseSeed = false;
}

FPCGElementPtr UPCGPerlinNoise2DSettings::CreateElement() const
{
	return MakeShared<FPCGPerlinNoise2DElement>();
}

bool FPCGPerlinNoise2DElement::ExecuteInternal(FPCGContext* Context) const
{
	//Store PCG Settings. Use it for get access to all variables we declared or adjusted in PCG Settings in header
	const UPCGPerlinNoise2DSettings* Settings = Context->GetInputSettings<UPCGPerlinNoise2DSettings>();
	check(Settings);
	
	//Create Input and Output data first. We will adjust, set the value and reference back to this variable
	const TArray<FPCGTaggedData> InputsTaggedDatas = Context->InputData.GetInputs();
	TArray<FPCGTaggedData>& Outputs = Context->OutputData.TaggedData;

	//Pass the UPROPERTY variable here. A bit different from normal actor. We can't get access to the data directly
	const float& PerlinHeightMultiplier = Settings->HeightMultiplier;
	const float& PerlinScaleMultiplier = Settings->ScaleMultiplier;
	EPCGPerlinNoiseMode Mode = Settings->Mode;

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
			FTransform FinalTransform = InputPoint.Transform;
			FTransform SourceTransform = InputPoint.Transform;
			FVector Location3D = SourceTransform.GetLocation()*PerlinScaleMultiplier+0.1;
			FVector2D Location2D = FVector2D(SourceTransform.GetLocation().X*PerlinScaleMultiplier+0.1, SourceTransform.GetLocation().Y*PerlinScaleMultiplier+0.1);

			if(Mode == EPCGPerlinNoiseMode::PelinNoise2D)
			{
				//Perlin noise value will be gone after we rotate the actor
				float PerlinFloat2D = FMath::PerlinNoise2D(Location2D);
				FVector PerlinLocation2D = FVector(SourceTransform.GetLocation().X, SourceTransform.GetLocation().Y, SourceTransform.GetLocation().Z + PerlinFloat2D*PerlinHeightMultiplier);
				FinalTransform.SetLocation(PerlinLocation2D);
			}
			else
			{
				float PerlinFloat3D = FMath::PerlinNoise3D(Location3D);
				FVector PerlinLocation3D = FVector(SourceTransform.GetLocation().X + (PerlinFloat3D * PerlinHeightMultiplier), SourceTransform.GetLocation().Y+ (PerlinFloat3D * PerlinHeightMultiplier), SourceTransform.GetLocation().Z+ (PerlinFloat3D * PerlinHeightMultiplier));
				FinalTransform.SetLocation(PerlinLocation3D);
			}
			
			//Assign back 
			OutPoint.Transform = FinalTransform;
			
			return true;
		}
		);
		
	}
	
	return true;
	
}
