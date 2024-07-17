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


UPCGOctreeSettings::UPCGOctreeSettings()
{
	bUseSeed = true;
}

FPCGElementPtr UPCGOctreeSettings::CreateElement() const
{
	return MakeShared<FPCGOctreeElement>();
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


		//Choosing point
		int32 FirstChosenPointID = FMath::RandRange(0, OutputPoints.Num()-1);
		const FPCGPoint& FirstChosenPoint= OutputPoints[FirstChosenPointID];
		FVector FirstChosenPointLocation = FirstChosenPoint.Transform.GetLocation();
		FVector FirstChosenPointScale = FirstChosenPoint.Transform.GetScale3D();
		//ChosenPoint.BoundsMax;

		
		/////First Divide
		//Remove point
		OutputPoints.RemoveAt(FirstChosenPointID);
		//Store points for secondary divide
		TArray<FPCGPoint> SecondaryPoints;
		//Add 1st point - I don't know why it's 25 not 50!?
		FPCGPoint FirstNewPoint1 = FPCGPoint();
		FirstNewPoint1.Transform.SetLocation(FirstChosenPointLocation + FVector(25,25,25));
		FirstNewPoint1.Transform.SetScale3D(FirstChosenPointScale * 0.5);
		OutputPoints.Add(FirstNewPoint1);
		SecondaryPoints.Add(FirstNewPoint1);
		//Add 2nd point
		FPCGPoint FirstNewPoint2 = FPCGPoint();
		FirstNewPoint2.Transform.SetLocation(FirstChosenPointLocation + FVector(25,-25,25));
		FirstNewPoint2.Transform.SetScale3D(FirstChosenPointScale * 0.5);
		OutputPoints.Add(FirstNewPoint2);
		SecondaryPoints.Add(FirstNewPoint2);
		//Add 3rd point
		FPCGPoint FirstNewPoint3 = FPCGPoint();
		FirstNewPoint3.Transform.SetLocation(FirstChosenPointLocation + FVector(-25,25,25));
		FirstNewPoint3.Transform.SetScale3D(FirstChosenPointScale * 0.5);
		OutputPoints.Add(FirstNewPoint3);
		SecondaryPoints.Add(FirstNewPoint3);
		//Add 4th point
		FPCGPoint FirstNewPoint4 = FPCGPoint();
		FirstNewPoint4.Transform.SetLocation(FirstChosenPointLocation + FVector(-25,-25,25));
		FirstNewPoint4.Transform.SetScale3D(FirstChosenPointScale * 0.5);
		OutputPoints.Add(FirstNewPoint4);
		SecondaryPoints.Add(FirstNewPoint4);
		//Add 5th point
		FPCGPoint FirstNewPoint5 = FPCGPoint();
		FirstNewPoint5.Transform.SetLocation(FirstChosenPointLocation + FVector(25,25,-25));
		FirstNewPoint5.Transform.SetScale3D(FirstChosenPointScale * 0.5);
		OutputPoints.Add(FirstNewPoint5);
		SecondaryPoints.Add(FirstNewPoint5);
		//Add 6th point
		FPCGPoint FirstNewPoint6 = FPCGPoint();
		FirstNewPoint6.Transform.SetLocation(FirstChosenPointLocation + FVector(25,-25,-25));
		FirstNewPoint6.Transform.SetScale3D(FirstChosenPointScale * 0.5);
		OutputPoints.Add(FirstNewPoint6);
		SecondaryPoints.Add(FirstNewPoint6);
		//Add 7th point
		FPCGPoint FirstNewPoint7 = FPCGPoint();
		FirstNewPoint7.Transform.SetLocation(FirstChosenPointLocation + FVector(-25,25,-25));
		FirstNewPoint7.Transform.SetScale3D(FirstChosenPointScale * 0.5);
		OutputPoints.Add(FirstNewPoint7);
		SecondaryPoints.Add(FirstNewPoint7);
		//Add 8th point
		FPCGPoint FirstNewPoint8 = FPCGPoint();
		FirstNewPoint8.Transform.SetLocation(FirstChosenPointLocation + FVector(-25,-25,-25));
		FirstNewPoint8.Transform.SetScale3D(FirstChosenPointScale * 0.5);
		OutputPoints.Add(FirstNewPoint8);
		SecondaryPoints.Add(FirstNewPoint8);

		/////Secondary Divide
		int32 SecondChosenPointID = FMath::RandRange(0, SecondaryPoints.Num()-1);
		const FPCGPoint& SecondChosenPoint = SecondaryPoints[SecondChosenPointID];
		FVector SecondChosenPointLocation = SecondChosenPoint.Transform.GetLocation();
		FVector SecondChosenPointScale = SecondChosenPoint.Transform.GetScale3D();
		//Remove point
		SecondaryPoints.RemoveAt(SecondChosenPointID);
		//Add 1st point - I don't know why it's 25 not 50!?
		FPCGPoint SecondNewPoint1 = FPCGPoint();
		SecondNewPoint1.Transform.SetLocation(SecondChosenPointLocation + FVector(12.5,12.5,12.5));
		SecondNewPoint1.Transform.SetScale3D(SecondChosenPointScale * 0.5);
		OutputPoints.Add(SecondNewPoint1);

		//Add 2nd point
		FPCGPoint SecondNewPoint2 = FPCGPoint();
		SecondNewPoint2.Transform.SetLocation(SecondChosenPointLocation + FVector(12.5,-12.5,12.5));
		SecondNewPoint2.Transform.SetScale3D(SecondChosenPointScale * 0.5);
		OutputPoints.Add(SecondNewPoint2);
		//Add 3rd point
		FPCGPoint SecondNewPoint3 = FPCGPoint();
		SecondNewPoint3.Transform.SetLocation(SecondChosenPointLocation + FVector(-12.5,12.5,12.5));
		SecondNewPoint3.Transform.SetScale3D(SecondChosenPointScale * 0.5);
		OutputPoints.Add(SecondNewPoint3);
		//Add 4th point
		FPCGPoint SecondNewPoint4 = FPCGPoint();
		SecondNewPoint4.Transform.SetLocation(SecondChosenPointLocation + FVector(-12.5,-12.5,12.5));
		SecondNewPoint4.Transform.SetScale3D(SecondChosenPointScale * 0.5);
		OutputPoints.Add(SecondNewPoint4);

		//Add 5th point
		FPCGPoint SecondNewPoint5 = FPCGPoint();
		SecondNewPoint5.Transform.SetLocation(SecondChosenPointLocation + FVector(12.5,12.5,-12.5));
		SecondNewPoint5.Transform.SetScale3D(SecondChosenPointScale * 0.5);
		OutputPoints.Add(SecondNewPoint5);
		//Add 6th point
		FPCGPoint SecondNewPoint6 = FPCGPoint();
		SecondNewPoint6.Transform.SetLocation(SecondChosenPointLocation + FVector(12.5,-12.5,-12.5));
		SecondNewPoint6.Transform.SetScale3D(SecondChosenPointScale * 0.5);
		OutputPoints.Add(SecondNewPoint6);
		//Add 7th point
		FPCGPoint SecondNewPoint7 = FPCGPoint();
		SecondNewPoint7.Transform.SetLocation(SecondChosenPointLocation + FVector(-12.5,12.5,-12.5));
		SecondNewPoint7.Transform.SetScale3D(SecondChosenPointScale * 0.5);
		OutputPoints.Add(SecondNewPoint7);
		//Add 8th point
		FPCGPoint SecondNewPoint8 = FPCGPoint();
		SecondNewPoint8.Transform.SetLocation(SecondChosenPointLocation + FVector(-12.5,-12.5,-12.5));
		SecondNewPoint8.Transform.SetScale3D(SecondChosenPointScale * 0.5);
		OutputPoints.Add(SecondNewPoint8);
		
		
	}
	
	return true;
}
