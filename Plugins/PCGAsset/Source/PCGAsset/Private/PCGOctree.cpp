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

		//Remove a random chosen point - the output points get populate during Async Point Processing
		int32 ChosenPointID = FMath::RandRange(0, OutputPoints.Num()-1);
		const FPCGPoint& ChosenPoint= OutputPoints[ChosenPointID];
		FVector ChosenPointLocation = ChosenPoint.Transform.GetLocation();
		FVector ChosenPointScale = ChosenPoint.Transform.GetScale3D();
		//ChosenPoint.BoundsMax;
		OutputPoints.RemoveAt(ChosenPointID);

		//Test add 1st point - I don't know why it's 25 not 50!?
		FPCGPoint NewPoint1 = FPCGPoint();
		NewPoint1.Transform.SetLocation(ChosenPointLocation + FVector(25,25,25));
		NewPoint1.Transform.SetScale3D(ChosenPointScale * 0.5);
		OutputPoints.Add(NewPoint1);

		//Test add 2nd point
		FPCGPoint NewPoint2 = FPCGPoint();
		NewPoint2.Transform.SetLocation(ChosenPointLocation + FVector(25,-25,25));
		NewPoint2.Transform.SetScale3D(ChosenPointScale * 0.5);
		OutputPoints.Add(NewPoint2);

		//Test add 3rd point
		FPCGPoint NewPoint3 = FPCGPoint();
		NewPoint3.Transform.SetLocation(ChosenPointLocation + FVector(-25,25,25));
		NewPoint3.Transform.SetScale3D(ChosenPointScale * 0.5);
		OutputPoints.Add(NewPoint3);

		//Test add 4th point
		FPCGPoint NewPoint4 = FPCGPoint();
		NewPoint4.Transform.SetLocation(ChosenPointLocation + FVector(-25,-25,25));
		NewPoint4.Transform.SetScale3D(ChosenPointScale * 0.5);
		OutputPoints.Add(NewPoint4);
		
		//Test add 5th point
		FPCGPoint NewPoint5 = FPCGPoint();
		NewPoint5.Transform.SetLocation(ChosenPointLocation + FVector(25,25,-25));
		NewPoint5.Transform.SetScale3D(ChosenPointScale * 0.5);
		OutputPoints.Add(NewPoint5);

		//Test add 6th point
		FPCGPoint NewPoint6 = FPCGPoint();
		NewPoint6.Transform.SetLocation(ChosenPointLocation + FVector(25,-25,-25));
		NewPoint6.Transform.SetScale3D(ChosenPointScale * 0.5);
		OutputPoints.Add(NewPoint6);

		//Test add 7th point
		FPCGPoint NewPoint7 = FPCGPoint();
		NewPoint7.Transform.SetLocation(ChosenPointLocation + FVector(-25,25,-25));
		NewPoint7.Transform.SetScale3D(ChosenPointScale * 0.5);
		OutputPoints.Add(NewPoint7);

		//Test add 8th point
		FPCGPoint NewPoint8 = FPCGPoint();
		NewPoint8.Transform.SetLocation(ChosenPointLocation + FVector(-25,-25,-25));
		NewPoint8.Transform.SetScale3D(ChosenPointScale * 0.5);
		OutputPoints.Add(NewPoint8);
		
		
	}
	
	return true;
}
