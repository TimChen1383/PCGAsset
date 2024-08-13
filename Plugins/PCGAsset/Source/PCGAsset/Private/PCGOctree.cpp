// Fill out your copyright notice in the Description page of Project Settings.
#include "PCGOctree.h"

#include "PCGContext.h"
#include "Data/PCGSpatialData.h"
#include "Data/PCGPointData.h"
#include "Helpers/PCGAsync.h"
#include "Helpers/PCGHelpers.h"
#include "Math/RandomStream.h"
//The macro in UE5 for speed up the compilation. Just add it
#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGOctree)
//Using Name Space to avoid variable name conflict with engine code. Just add it
#define LOCTEXT_NAMESPACE "PCGOctree"

/**********************************************************************
To do list
- need to use random stream
- There are some mesh overlap. Not sure why
- PointsDivideNums should always be 4, no need to promote as a variable

- If I don't set the scale but output them as different pin, I should be able to use these point to spawn different scale module
- temp solution - just do a point filter to found out the points with different scale
- use random stream for random value

***********************************************************************/
namespace PCGOctreeConstants
{
	const FName OutputLabelA = TEXT("Original");
	const FName OutputLabelB = TEXT("Divided");
}

UPCGOctreeSettings::UPCGOctreeSettings()
{
	bUseSeed = true;
}

TArray<FPCGPinProperties> UPCGOctreeSettings::OutputPinProperties() const
{
	TArray<FPCGPinProperties> PinProperties;
	PinProperties.Emplace(PCGPinConstants::DefaultInFilterLabel,
		EPCGDataType::Point,
		/*bInAllowMultipleConnections=*/true,
		/*bAllowMultipleData=*/true,
		LOCTEXT("OutputPinTooltipA", "Original Points"));
	PinProperties.Emplace(PCGPinConstants::DefaultOutFilterLabel,
		EPCGDataType::Point,
		/*bInAllowMultipleConnections=*/true,
		/*bAllowMultipleData=*/true,
		LOCTEXT("OutputPinTooltipB", "Divided Points"));

	return PinProperties;
}

FPCGElementPtr UPCGOctreeSettings::CreateElement() const
{
	return MakeShared<FPCGOctreeElement>();
}

//Define how we divide 1 point into 8 points - We should input Output Points as DivideSourcePoints
TArray<FPCGPoint> UPCGOctreeSettings::DividePoint(TArray<FPCGPoint>& DivideSourcePoints, int32 PointsDivideNums)
{
	//This will be the final Output point back to main function - no matter divide 1 time or multiple times
	TArray<FPCGPoint> DividedPoints;
	
	if(PointsDivideNums < 1 || DivideSourcePoints.Num() < PointsDivideNums)
	{
		UE_LOG(LogTemp, Error, TEXT("PointsDivideNums need to be greater than 0"));
		//Do nothing - the point will not be divided
	}
	else
	{
		for(int32 PointDivideNum = 0; PointDivideNum < PointsDivideNums; PointDivideNum++)
		{
			//Choose 1 point from Source Point to divide
			int32 ChosenPointID = FMath::RandRange(0, (DivideSourcePoints.Num()-1-PointDivideNum));
			const FPCGPoint& ChosenPoint= DivideSourcePoints[ChosenPointID];
			FVector ChosenPointLocation = ChosenPoint.Transform.GetLocation();
			FVector ChosenPointScale = ChosenPoint.Transform.GetScale3D();
			float UnitLength  = (ChosenPointScale.X * 100 / 4);
			//Remove point Source Point
			DivideSourcePoints.RemoveAt(ChosenPointID);
			//Add 1st point - the cube is 100*100, 50 will be center, 25 will be octree point
			FPCGPoint NewPoint1 = FPCGPoint();
			NewPoint1.Transform.SetLocation(ChosenPointLocation + FVector(UnitLength,UnitLength,UnitLength));
			NewPoint1.Transform.SetScale3D(ChosenPointScale * 0.5);
			DividedPoints.Add(NewPoint1);
			//Add 2nd point
			FPCGPoint NewPoint2 = FPCGPoint();
			NewPoint2.Transform.SetLocation(ChosenPointLocation + FVector(UnitLength,-UnitLength,UnitLength));
			NewPoint2.Transform.SetScale3D(ChosenPointScale * 0.5);
			DividedPoints.Add(NewPoint2);
			//Add 3rd point
			FPCGPoint NewPoint3 = FPCGPoint();
			NewPoint3.Transform.SetLocation(ChosenPointLocation + FVector(-UnitLength,UnitLength,UnitLength));
			NewPoint3.Transform.SetScale3D(ChosenPointScale * 0.5);
			DividedPoints.Add(NewPoint3);
			//Add 4th point
			FPCGPoint NewPoint4 = FPCGPoint();
			NewPoint4.Transform.SetLocation(ChosenPointLocation + FVector(-UnitLength,-UnitLength,UnitLength));
			NewPoint4.Transform.SetScale3D(ChosenPointScale * 0.5);
			DividedPoints.Add(NewPoint4);
			//Add 5th point
			FPCGPoint NewPoint5 = FPCGPoint();
			NewPoint5.Transform.SetLocation(ChosenPointLocation + FVector(UnitLength,UnitLength,-UnitLength));
			NewPoint5.Transform.SetScale3D(ChosenPointScale * 0.5);
			DividedPoints.Add(NewPoint5);
			//Add 6th point
			FPCGPoint NewPoint6 = FPCGPoint();
			NewPoint6.Transform.SetLocation(ChosenPointLocation + FVector(UnitLength,-UnitLength,-UnitLength));
			NewPoint6.Transform.SetScale3D(ChosenPointScale * 0.5);
			DividedPoints.Add(NewPoint6);
			//Add 7th point
			FPCGPoint NewPoint7 = FPCGPoint();
			NewPoint7.Transform.SetLocation(ChosenPointLocation + FVector(-UnitLength,UnitLength,-UnitLength));
			NewPoint7.Transform.SetScale3D(ChosenPointScale * 0.5);
			DividedPoints.Add(NewPoint7);
			//Add 8th point
			FPCGPoint NewPoint8 = FPCGPoint();
			NewPoint8.Transform.SetLocation(ChosenPointLocation + FVector(-UnitLength,-UnitLength,-UnitLength));
			NewPoint8.Transform.SetScale3D(ChosenPointScale * 0.5);
			DividedPoints.Add(NewPoint8);
		}
	}
	//return back the new point for adding back to the Output Points
	return DividedPoints;
}

bool FPCGOctreeElement::ExecuteInternal(FPCGContext* Context) const
{
	//Store PCG Settings. Use it for get access to all variables we declared or adjusted in PCG Settings in header
	const UPCGOctreeSettings* Settings = Context->GetInputSettings<UPCGOctreeSettings>();
	check(Settings);
	
	//Create Input and Output data first. We will adjust, set the value and reference back to this variable
	const TArray<FPCGTaggedData> InputsTaggedDatas = Context->InputData.GetInputs();
	TArray<FPCGTaggedData>& Outputs = Context->OutputData.TaggedData;

	//Pass the UPROPERTY variable here. A bit different from normal actor. We can't get access to the data directly
	const int32& SelectedPointCount = Settings->SelectedPointCount;

	//OperationData is a struct contain the original points, points be filtered in, points be filtered out
	//struct FOperationData
	//{
		//const TArray<FPCGPoint>* OriginalPoints = nullptr;
		//TArray<FPCGPoint>* InFilterPoints = nullptr;
		//TArray<FPCGPoint>* OutFilterPoints = nullptr;

		//const UPCGMetadata* OriginalMetadata = nullptr;
		//UPCGMetadata* InFilterMetadata = nullptr;
		//UPCGMetadata* OutFilterMetadata = nullptr;

	//} OperationData;




	//Previous code are fine



	
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


		//Initializing new output data
		//UPCGData* InFilterData = nullptr;
		//UPCGData* OutFilterData = nullptr;
		//UPCGPointData* InFilterPointData = NewObject<UPCGPointData>();
		//const TArray<FPCGPoint>& InFilterPoint = InFilterPointData->GetPoints();
		//UPCGPointData* OutFilterPointData = NewObject<UPCGPointData>();
		//InFilterPointData->InitializeFromData(OriginalPointData);
		//OutFilterPointData->InitializeFromData(OriginalPointData);

		//if(OriginalPoints[0].Density == 0)
		//{
		//InFilterPointData
		//}
		//Link the data with Operation Data struct
		//OperationData.OriginalPoints = &OriginalPointData->GetPoints();
		//OperationData.InFilterPoints = &InFilterPointData->GetMutablePoints();
		//OperationData.OutFilterPoints = &OutFilterPointData->GetMutablePoints();
		//OperationData.InFilterPoints->Reserve(InFilterPointData->GetPoints().Num());
		//OperationData.OutFilterPoints->Reserve(OutFilterPointData->GetPoints().Num());

		//After finish the calculating in Operation Data, assign the data back
		//InFilterData = InFilterPointData;
		//OutFilterData = OutFilterPointData;
		
		//Create new Tagged Data, link to pin "InsideFilter", link Point Data
		FPCGTaggedData& InFilterOutput = Outputs.Add_GetRef(Input);
		UPCGPointData* InFilterPointData = NewObject<UPCGPointData>();
		InFilterPointData->InitializeFromData(OriginalPointData);
		TArray<FPCGPoint>& InFilterOutputPoints = InFilterPointData->GetMutablePoints();
		InFilterOutput.Pin = PCGPinConstants::DefaultInFilterLabel;
		InFilterOutput.Data = InFilterPointData;
		InFilterOutput.Tags = Input.Tags;
		//Run Point Loop. Data will reference back after the function loop through all PCG points
		FPCGAsync::AsyncPointProcessing(Context, OriginalPoints.Num(), InFilterOutputPoints, [&](int32 Index, FPCGPoint& OutPoint)
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
		OutFilterOutput.Pin = PCGPinConstants::DefaultOutFilterLabel;
		OutFilterOutput.Data = OutFilterPointData;
		OutFilterOutput.Tags = Input.Tags;
		//FPCGAsync::AsyncPointProcessing(Context, OriginalPoints.Num(), OutFilterOutputPoints, [&](int32 Index, FPCGPoint& OutPoint)
		//{
			//Get each single point. Output Point's value will be the final output value. Initialize with Input value first
			//const FPCGPoint& InputPoint = OriginalPoints[Index];
			//OutPoint = InputPoint;
			//return true;
		//}
		//);
		
		
		
		//First divide
		//TArray<FPCGPoint> FinalPoints = UPCGOctreeSettings::DividePoint(OutputPoints, SelectedPointCount);
		//OutputPoints.Append(FinalPoints);

		for(int32 PointDivideNum = 0; PointDivideNum < SelectedPointCount; PointDivideNum++)
		{
			//Choose 1 point from Source Point to divide
			int32 ChosenPointID = FMath::RandRange(0, (OriginalPoints.Num()-1-PointDivideNum));
			const FPCGPoint& ChosenPoint= OriginalPoints[ChosenPointID];
			FVector ChosenPointLocation = ChosenPoint.Transform.GetLocation();
			FVector ChosenPointScale = ChosenPoint.Transform.GetScale3D();
			float UnitLength  = (ChosenPointScale.X * 100 / 4);
			
			//Remove point Source Point
			InFilterOutputPoints.RemoveAt(ChosenPointID);
			
			//Add 1st point - the cube is 100*100, 50 will be center, 25 will be octree point
			FPCGPoint NewPoint1 = FPCGPoint();
			NewPoint1.Transform.SetLocation(ChosenPointLocation + FVector(UnitLength,UnitLength,UnitLength));
			NewPoint1.Transform.SetScale3D(ChosenPointScale * 0.5);
			OutFilterOutputPoints.Add(NewPoint1);
			//Add 2nd point
			FPCGPoint NewPoint2 = FPCGPoint();
			NewPoint2.Transform.SetLocation(ChosenPointLocation + FVector(UnitLength,-UnitLength,UnitLength));
			NewPoint2.Transform.SetScale3D(ChosenPointScale * 0.5);
			OutFilterOutputPoints.Add(NewPoint2);
			//Add 3rd point
			FPCGPoint NewPoint3 = FPCGPoint();
			NewPoint3.Transform.SetLocation(ChosenPointLocation + FVector(-UnitLength,UnitLength,UnitLength));
			NewPoint3.Transform.SetScale3D(ChosenPointScale * 0.5);
			OutFilterOutputPoints.Add(NewPoint3);
			//Add 4th point
			FPCGPoint NewPoint4 = FPCGPoint();
			NewPoint4.Transform.SetLocation(ChosenPointLocation + FVector(-UnitLength,-UnitLength,UnitLength));
			NewPoint4.Transform.SetScale3D(ChosenPointScale * 0.5);
			OutFilterOutputPoints.Add(NewPoint4);
			//Add 5th point
			FPCGPoint NewPoint5 = FPCGPoint();
			NewPoint5.Transform.SetLocation(ChosenPointLocation + FVector(UnitLength,UnitLength,-UnitLength));
			NewPoint5.Transform.SetScale3D(ChosenPointScale * 0.5);
			OutFilterOutputPoints.Add(NewPoint5);
			//Add 6th point
			FPCGPoint NewPoint6 = FPCGPoint();
			NewPoint6.Transform.SetLocation(ChosenPointLocation + FVector(UnitLength,-UnitLength,-UnitLength));
			NewPoint6.Transform.SetScale3D(ChosenPointScale * 0.5);
			OutFilterOutputPoints.Add(NewPoint6);
			//Add 7th point
			FPCGPoint NewPoint7 = FPCGPoint();
			NewPoint7.Transform.SetLocation(ChosenPointLocation + FVector(-UnitLength,UnitLength,-UnitLength));
			NewPoint7.Transform.SetScale3D(ChosenPointScale * 0.5);
			OutFilterOutputPoints.Add(NewPoint7);
			//Add 8th point
			FPCGPoint NewPoint8 = FPCGPoint();
			NewPoint8.Transform.SetLocation(ChosenPointLocation + FVector(-UnitLength,-UnitLength,-UnitLength));
			NewPoint8.Transform.SetScale3D(ChosenPointScale * 0.5);
			OutFilterOutputPoints.Add(NewPoint8);
		}
	}
	
	return true;
}
