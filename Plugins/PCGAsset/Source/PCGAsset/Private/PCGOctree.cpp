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
- I should be able to decide how many times I should divide

- If I don't set the scale but output them as different pin, I should be able to use these point to spawn different scale module
- temp solution - just do a point filter to found out the points with different scale

- How to calculate the relationship of scale?
- Scale: First loop /2 /2
- Scale : Second loop /2 /2 /2
- I guess I can use the bounds information
***********************************************************************/

UPCGOctreeSettings::UPCGOctreeSettings()
{
	bUseSeed = true;
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
			UE_LOG(LogTemp, Warning, TEXT("Running"));
			//Choose 1 point from Source Point to divide
			int32 ChosenPointID = FMath::RandRange(0, (DivideSourcePoints.Num()-1-PointDivideNum));
			const FPCGPoint& ChosenPoint= DivideSourcePoints[ChosenPointID];
			FVector ChosenPointLocation = ChosenPoint.Transform.GetLocation();
			FVector ChosenPointScale = ChosenPoint.Transform.GetScale3D();
			//Remove point Source Point
			DivideSourcePoints.RemoveAt(ChosenPointID);
			//Add 1st point - the cube is 100*100, 50 will be center, 25 will be octree point
			FPCGPoint NewPoint1 = FPCGPoint();
			NewPoint1.Transform.SetLocation(ChosenPointLocation + FVector(25,25,25));
			NewPoint1.Transform.SetScale3D(ChosenPointScale * 0.5);
			DividedPoints.Add(NewPoint1);
			//Add 2nd point
			FPCGPoint NewPoint2 = FPCGPoint();
			NewPoint2.Transform.SetLocation(ChosenPointLocation + FVector(25,-25,25));
			NewPoint2.Transform.SetScale3D(ChosenPointScale * 0.5);
			DividedPoints.Add(NewPoint2);
			//Add 3rd point
			FPCGPoint NewPoint3 = FPCGPoint();
			NewPoint3.Transform.SetLocation(ChosenPointLocation + FVector(-25,25,25));
			NewPoint3.Transform.SetScale3D(ChosenPointScale * 0.5);
			DividedPoints.Add(NewPoint3);
			//Add 4th point
			FPCGPoint NewPoint4 = FPCGPoint();
			NewPoint4.Transform.SetLocation(ChosenPointLocation + FVector(-25,-25,25));
			NewPoint4.Transform.SetScale3D(ChosenPointScale * 0.5);
			DividedPoints.Add(NewPoint4);
			//Add 5th point
			FPCGPoint NewPoint5 = FPCGPoint();
			NewPoint5.Transform.SetLocation(ChosenPointLocation + FVector(25,25,-25));
			NewPoint5.Transform.SetScale3D(ChosenPointScale * 0.5);
			DividedPoints.Add(NewPoint5);
			//Add 6th point
			FPCGPoint NewPoint6 = FPCGPoint();
			NewPoint6.Transform.SetLocation(ChosenPointLocation + FVector(25,-25,-25));
			NewPoint6.Transform.SetScale3D(ChosenPointScale * 0.5);
			DividedPoints.Add(NewPoint6);
			//Add 7th point
			FPCGPoint NewPoint7 = FPCGPoint();
			NewPoint7.Transform.SetLocation(ChosenPointLocation + FVector(-25,25,-25));
			NewPoint7.Transform.SetScale3D(ChosenPointScale * 0.5);
			DividedPoints.Add(NewPoint7);
			//Add 8th point
			FPCGPoint NewPoint8 = FPCGPoint();
			NewPoint8.Transform.SetLocation(ChosenPointLocation + FVector(-25,-25,-25));
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
	const FVector& CustomOffset = Settings->CustomOffset;
	const int32& SelectedPointCount = Settings->SelectedPointCount;
	const int32& DivideNum = Settings->DivideNum;

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

			/*******************************************
			Actual Point adjustment - start
			********************************************/
			
			//This is the final output transform data. Initialize it first
			FTransform SourceTransform = InputPoint.Transform;
			FTransform FinalTransform = InputPoint.Transform;
			FVector FinalPosition = FVector(SourceTransform.GetLocation() + CustomOffset);
			FinalTransform.SetLocation(FinalPosition);

			/*******************************************
			Actual Point adjustment - end
			********************************************/
			
			//Assign back 
			OutPoint.Transform = FinalTransform;
			
			return true;
		}
		);
		
		//Function > input a reference to an array > randomly pick 1 point from the array > remove it > divide it
		TArray<FPCGPoint> FinalPoints = UPCGOctreeSettings::DividePoint(OutputPoints, SelectedPointCount);
		//Secondary divide
		//FinalPoints = UPCGOctreeSettings::DividePoint(FinalPoints,4);
		OutputPoints.Append(FinalPoints);
		
	}
	
	return true;
}
