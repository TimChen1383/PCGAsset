// Fill out your copyright notice in the Description page of Project Settings.
#include "PCGCubeDivide.h"

#include "PCGContext.h"
#include "Data/PCGSpatialData.h"
#include "Data/PCGPointData.h"
#include "Helpers/PCGAsync.h"
#include "Helpers/PCGHelpers.h"
#include "Math/RandomStream.h"
//The macro in UE5 for speed up the compilation. Just add it
#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGCubeDivide)
//Using Name Space to avoid variable name conflict with engine code. Just add it
#define LOCTEXT_NAMESPACE "PCGCubeDivide"

namespace PCGOctreeConstants
{
	const FName OutputLabelA = TEXT("Original");
	const FName OutputLabelB = TEXT("Divided");
}

UPCGCubeDivideSettings::UPCGCubeDivideSettings()
{
	bUseSeed = false;
}

TArray<FPCGPinProperties> UPCGCubeDivideSettings::OutputPinProperties() const
{
	TArray<FPCGPinProperties> PinProperties;
	PinProperties.Emplace(PCGOctreeConstants::OutputLabelA,
	                      EPCGDataType::Point,
	                      /*bInAllowMultipleConnections=*/true,
	                      /*bAllowMultipleData=*/true,
	                      LOCTEXT("OutputPinTooltipA", "Original Points"));
	PinProperties.Emplace(PCGOctreeConstants::OutputLabelB,
	                      EPCGDataType::Point,
	                      /*bInAllowMultipleConnections=*/true,
	                      /*bAllowMultipleData=*/true,
	                      LOCTEXT("OutputPinTooltipB", "Divided Points"));

	return PinProperties;
}

FPCGElementPtr UPCGCubeDivideSettings::CreateElement() const
{
	return MakeShared<FPCGCubeDivideElement>();
}

bool FPCGCubeDivideElement::ExecuteInternal(FPCGContext* Context) const
{
	//Store PCG Settings. Use it for get access to all variables we declared or adjusted in PCG Settings in header
	const UPCGCubeDivideSettings* Settings = Context->GetInputSettings<UPCGCubeDivideSettings>();
	check(Settings);

	//Create Input and Output data first. We will adjust, set the value and reference back to this variable
	const TArray<FPCGTaggedData> InputsTaggedDatas = Context->InputData.GetInputs();
	TArray<FPCGTaggedData>& Outputs = Context->OutputData.TaggedData;

	//Pass the UPROPERTY variable here. A bit different from normal actor. We can't get access to the data directly
	const int32& PointDivideCounts = Settings->PointDivideCounts;
	const int32& RandomSeed = Settings->RandomSeed;
	const float& UnitSizeM = Settings->UnitSizeM;

	//Use random stream to stabilize the random result
	FRandomStream RandStream;
	RandStream.Initialize(RandomSeed);

	//Loop through all the input PCG Tagged Data. Most of the time we should only have 1 PCG Tagged Data input
	for (const FPCGTaggedData& Input : InputsTaggedDatas)
	{
		//Processing Input data : Tagged Data > PCG Data > Spatial Data > Point Data
		const UPCGData* OriginalData = Input.Data;
		if (!OriginalData)
		{
			continue;
		}
		const UPCGSpatialData* SpatialInput = Cast<const UPCGSpatialData>(OriginalData);
		if (!SpatialInput)
		{
			PCGE_LOG(Error, GraphAndLog, LOCTEXT("InputMissingSpatialData", "Unable to get Spatial data from input"));
			continue;
		}
		const UPCGPointData* OriginalPointData = SpatialInput->ToPointData(Context);
		if (!OriginalPointData)
		{
			PCGE_LOG(Error, GraphAndLog, LOCTEXT("InputMissingPointData", "Unable to get Point data from input"));
			continue;
		}
		const TArray<FPCGPoint>& OriginalPoints = OriginalPointData->GetPoints();

		//Create new Tagged Data, link to pin "InsideFilter", link Point Data
		FPCGTaggedData& InFilterOutput = Outputs.Add_GetRef(Input);
		UPCGPointData* InFilterPointData = NewObject<UPCGPointData>();
		InFilterPointData->InitializeFromData(OriginalPointData);
		TArray<FPCGPoint>& InFilterOutputPoints = InFilterPointData->GetMutablePoints();
		InFilterOutput.Pin = PCGOctreeConstants::OutputLabelA;
		InFilterOutput.Data = InFilterPointData;
		InFilterOutput.Tags = Input.Tags;
		//Run Point Loop. Data will reference back after the function loop through all PCG points
		FPCGAsync::AsyncPointProcessing(Context, OriginalPoints.Num(), InFilterOutputPoints,
		                                [&](int32 Index, FPCGPoint& OutPoint)
		                                {
			                                //Get each single point. Output Point's value will be the final output value. Initialize with Input value first
			                                const FPCGPoint& InputPoint = OriginalPoints[Index];
			                                OutPoint = InputPoint;
			                                return true;
		                                }
		);

		//Create new Tagged Data, link to pin "OutsideFilter", link Point Data
		FPCGTaggedData& OutFilterOutput = Outputs.Add_GetRef(Input);
		UPCGPointData* OutFilterPointData = NewObject<UPCGPointData>();
		//OutFilterPointData->InitializeFromData(OriginalPointData);
		TArray<FPCGPoint>& OutFilterOutputPoints = OutFilterPointData->GetMutablePoints();
		OutFilterOutput.Pin = PCGOctreeConstants::OutputLabelB;
		OutFilterOutput.Data = OutFilterPointData;
		OutFilterOutput.Tags = Input.Tags;

		if (PointDivideCounts < 0 || PointDivideCounts > OriginalPoints.Num())
		{
			UE_LOG(LogTemp, Error, TEXT("Point Divide Counts is less than 0 or more than input point counts"));
		}
		else
		{
			//Divide Points
			for (int32 PointDivideCount = 0; PointDivideCount < PointDivideCounts; PointDivideCount++)
			{
				//Choose 1 point from Input Point to divide
				int32 ChosenPointID = RandStream.RandRange(0, (InFilterOutputPoints.Num() - 1 - PointDivideCount));
				const FPCGPoint& ChosenPoint = InFilterOutputPoints[ChosenPointID];
				FVector ChosenPointLocation = ChosenPoint.Transform.GetLocation();
				float UnitLength = (UnitSizeM * 100 / 4);

				//Remove point Source Point
				InFilterOutputPoints.RemoveAt(ChosenPointID);

				//Add 1st point - the cube is 100*100, 50 will be center, 25 will be octree point
				FPCGPoint NewPoint1 = FPCGPoint();
				NewPoint1.Transform.SetLocation(ChosenPointLocation + FVector(UnitLength, UnitLength, UnitLength));
				OutFilterOutputPoints.Add(NewPoint1);
				//Add 2nd point
				FPCGPoint NewPoint2 = FPCGPoint();
				NewPoint2.Transform.SetLocation(ChosenPointLocation + FVector(UnitLength, -UnitLength, UnitLength));
				OutFilterOutputPoints.Add(NewPoint2);
				//Add 3rd point
				FPCGPoint NewPoint3 = FPCGPoint();
				NewPoint3.Transform.SetLocation(ChosenPointLocation + FVector(-UnitLength, UnitLength, UnitLength));
				OutFilterOutputPoints.Add(NewPoint3);
				//Add 4th point
				FPCGPoint NewPoint4 = FPCGPoint();
				NewPoint4.Transform.SetLocation(ChosenPointLocation + FVector(-UnitLength, -UnitLength, UnitLength));
				OutFilterOutputPoints.Add(NewPoint4);
				//Add 5th point
				FPCGPoint NewPoint5 = FPCGPoint();
				NewPoint5.Transform.SetLocation(ChosenPointLocation + FVector(UnitLength, UnitLength, -UnitLength));
				OutFilterOutputPoints.Add(NewPoint5);
				//Add 6th point
				FPCGPoint NewPoint6 = FPCGPoint();
				NewPoint6.Transform.SetLocation(ChosenPointLocation + FVector(UnitLength, -UnitLength, -UnitLength));
				OutFilterOutputPoints.Add(NewPoint6);
				//Add 7th point
				FPCGPoint NewPoint7 = FPCGPoint();
				NewPoint7.Transform.SetLocation(ChosenPointLocation + FVector(-UnitLength, UnitLength, -UnitLength));
				OutFilterOutputPoints.Add(NewPoint7);
				//Add 8th point
				FPCGPoint NewPoint8 = FPCGPoint();
				NewPoint8.Transform.SetLocation(ChosenPointLocation + FVector(-UnitLength, -UnitLength, -UnitLength));
				OutFilterOutputPoints.Add(NewPoint8);
			}
		}
	}

	return true;
}
