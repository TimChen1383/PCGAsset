// Fill out your copyright notice in the Description page of Project Settings.
#include "PCGWorleyNoise.h"

#include "PCGContext.h"
#include "Data/PCGSpatialData.h"
#include "Data/PCGPointData.h"
#include "Helpers/PCGAsync.h"
#include "Helpers/PCGHelpers.h"
#include "Math/RandomStream.h"
//The macro in UE5 for speed up the compilation. Just add it
#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGWorleyNoise)
//Using Name Space to avoid variable name conflict with engine code. Just add it
#define LOCTEXT_NAMESPACE "PCGWorleyNoise"

UPCGWorleyNoiseSettings::UPCGWorleyNoiseSettings()
{
	bUseSeed = false;
}

FPCGElementPtr UPCGWorleyNoiseSettings::CreateElement() const
{
	return MakeShared<FPCGWorleyNoiseElement>();
}


float UPCGWorleyNoiseSettings::WorleyNoise2D(float X, float Y, int Seed, float CellSize, float Attenuation)
{
	FRandomStream RandomStream(Seed);
	float MinDistance = MAX_flt;

	// Determine cell indices based on CellSize
	int CellX = FMath::FloorToInt(X / CellSize);
	int CellY = FMath::FloorToInt(Y / CellSize);

	// Inspect surrounding cells
	for (int offsetY = -1; offsetY <= 1; offsetY++)
	{
		for (int offsetX = -1; offsetX <= 1; offsetX++)
		{
			// Unique seed for each cell based on its coordinates and the global seed
			int CellSeed = (CellX + offsetX) * 73856093 ^ (CellY + offsetY) * 19349663 ^ Seed;
			RandomStream.Initialize(CellSeed);

			// Random point within this cell
			float PointX = (CellX + offsetX) * CellSize + RandomStream.FRand() * CellSize;
			float PointY = (CellY + offsetY) * CellSize + RandomStream.FRand() * CellSize;

			// Update minimum distance
			float Distance = FMath::Sqrt(FMath::Pow(PointX - X, 2) + FMath::Pow(PointY - Y, 2));
			MinDistance = FMath::Min(MinDistance, Distance);
		}
	}

	float NoiseValue = ((MinDistance / CellSize)*2)-1;

	//Calculate attentuation
	float Distance = FMath::Sqrt(X * X + Y * Y); // Calculate distance from origin
	float AttenuatedAmplitude = (1.0f - FMath::Exp(-Distance / Attenuation));

	NoiseValue *= AttenuatedAmplitude;

	// Normalize distance
	return FMath::Clamp(NoiseValue, -1.0f, 1.0f);
}

float UPCGWorleyNoiseSettings::WorleyNoise3D(float X, float Y, float Z, int Seed, float CellSize, float Attenuation)
{
	FRandomStream RandomStream(Seed);
	float MinDistance = MAX_flt;

	// Determine cell indices based on CellSize
	int CellX = FMath::FloorToInt(X / CellSize);
	int CellY = FMath::FloorToInt(Y / CellSize);
	int CellZ = FMath::FloorToInt(Z / CellSize);

	// Inspect surrounding cells in 3D
	for (int offsetZ = -1; offsetZ <= 1; offsetZ++)
	{
		for (int offsetY = -1; offsetY <= 1; offsetY++)
		{
			for (int offsetX = -1; offsetX <= 1; offsetX++)
			{
				// Unique seed for each cell based on its coordinates and the global seed
				int CellSeed = (CellX + offsetX) * 73856093 ^ (CellY + offsetY) * 19349663 ^ (CellZ + offsetZ) * 83492791 ^ Seed;
				RandomStream.Initialize(CellSeed);

				// Random point within this cell
				float PointX = (CellX + offsetX) * CellSize + RandomStream.FRand() * CellSize;
				float PointY = (CellY + offsetY) * CellSize + RandomStream.FRand() * CellSize;
				float PointZ = (CellZ + offsetZ) * CellSize + RandomStream.FRand() * CellSize;

				// Update minimum distance
				float Distance = FMath::Sqrt(FMath::Pow(PointX - X, 2) + FMath::Pow(PointY - Y, 2) + FMath::Pow(PointZ - Z, 2));
				MinDistance = FMath::Min(MinDistance, Distance);
			}
		}
	}

	float NoiseValue = ((MinDistance / CellSize) * 2) - 1;

	//Calculate attentuation
	float Distance = FMath::Sqrt(X * X + Y * Y + Z * Z); // Calculate distance from origin
	float AttenuatedAmplitude = (1.0f - FMath::Exp(-Distance / Attenuation));

	NoiseValue *= AttenuatedAmplitude;

	// Normalize distance
	return FMath::Clamp(NoiseValue, -1.0f, 1.0f);
}

bool FPCGWorleyNoiseElement::ExecuteInternal(FPCGContext* Context) const
{
	//Store PCG Settings. Use it for get access to all variables we declared or adjusted in PCG Settings in header
	const UPCGWorleyNoiseSettings* Settings = Context->GetInputSettings<UPCGWorleyNoiseSettings>();
	check(Settings);
	
	//Create Input and Output data first. We will adjust, set the value and reference back to this variable
	const TArray<FPCGTaggedData> InputsTaggedDatas = Context->InputData.GetInputs();
	TArray<FPCGTaggedData>& Outputs = Context->OutputData.TaggedData;

	//Pass the UPROPERTY variable here. A bit different from normal actor. We can't get access to the data directly
	const float& ScaleMultiplier = Settings->ScaleMultiplier;
	const float& NoiseAttenuation = Settings->NoiseAttenuation;
	const float& HeightMultiplier = Settings->HeightMultiplier;
	EPCGWorleyNoiseMode Mode = Settings->Mode;


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
			float PointLocX = SourceTransform.GetLocation().X;
			float PointLocY = SourceTransform.GetLocation().Y;
			float PointLocZ = SourceTransform.GetLocation().Z;

			if(Mode == EPCGWorleyNoiseMode::WorleyNoise2D)
			{
				float WorleyNoiseHeight = UPCGWorleyNoiseSettings::WorleyNoise2D(PointLocX,PointLocY,1,ScaleMultiplier,NoiseAttenuation) * HeightMultiplier;
				FVector FinalPosition = FVector(PointLocX, PointLocY, PointLocZ + WorleyNoiseHeight);
				FinalTransform.SetLocation(FinalPosition);
			}
			else
			{
				float WorleyNoiseHeight = UPCGWorleyNoiseSettings::WorleyNoise3D(PointLocX, PointLocY, PointLocZ, 1, ScaleMultiplier, NoiseAttenuation) * HeightMultiplier;
				FVector FinalPosition = FVector(PointLocX + WorleyNoiseHeight, PointLocY + WorleyNoiseHeight, PointLocZ + WorleyNoiseHeight);
				FinalTransform.SetLocation(FinalPosition);
			}
			
			//Assign back 
			OutPoint.Transform = FinalTransform;
			
			return true;
		}
		);
		
	}
	
	return true;
}
