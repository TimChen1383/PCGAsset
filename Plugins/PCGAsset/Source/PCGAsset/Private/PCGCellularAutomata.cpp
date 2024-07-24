// Fill out your copyright notice in the Description page of Project Settings.
#include "PCGCellularAutomata.h"

#include "PCGContext.h"
#include "Data/PCGSpatialData.h"
#include "Data/PCGPointData.h"
#include "Helpers/PCGAsync.h"
#include "Helpers/PCGHelpers.h"
#include "Math/RandomStream.h"
//The macro in UE5 for speed up the compilation. Just add it
#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGCellularAutomata)
//Using Name Space to avoid variable name conflict with engine code. Just add it
#define LOCTEXT_NAMESPACE "PCGCellularAutomata"

UPCGCellularAutomataSettings::UPCGCellularAutomataSettings()
{
	bUseSeed = true;
}

FPCGElementPtr UPCGCellularAutomataSettings::CreateElement() const
{
	return MakeShared<FPCGCellularAutomataElement>();
}

bool FPCGCellularAutomataElement::ExecuteInternal(FPCGContext* Context) const
{
	//Store PCG Settings. Use it for get access to all variables we declared or adjusted in PCG Settings in header
	const UPCGCellularAutomataSettings* Settings = Context->GetInputSettings<UPCGCellularAutomataSettings>();
	check(Settings);
	
	//Create Input and Output data first. We will adjust, set the value and reference back to this variable
	const TArray<FPCGTaggedData> InputsTaggedDatas = Context->InputData.GetInputs();
	TArray<FPCGTaggedData>& Outputs = Context->OutputData.TaggedData;

	//Pass the UPROPERTY variable here. A bit different from normal actor. We can't get access to the data directly
	const FVector& CustomOffset = Settings->CustomOffset;
	const int32& GridWidthPointCounts = Settings->GridWidthPointCounts;
	const int32& GridHeightPointCounts = Settings->GridHeightPointCounts;
	const int32& IterationCounts = Settings->IterationCounts;



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



		
		
		//How many Cellular Automata iteration I want to run
		for(int32 i = 1; i < IterationCounts; i++)
		{
			//Make a temporary copy of all the points
			TArray<FPCGPoint> TempOutputPoints = OutputPoints;
			//looping grids from left to right
			for(int32 j = 1; j < GridHeightPointCounts; j++)
			{
				//looping grids from bottom to top
				for(int32 k = 1; k < GridWidthPointCounts; k++)
				{
					//the counter that count the neighbor wall count
					int32 NeighborWallCounts = 0;
					//looping grid's neighbor, from left to right
					for(int32 y = j-1; y <= j+1; y++)
					{
						//looping grid's neighbor, from bottom to top
						for(int32 x = k-1; x <= k+1; k++)
						{
							//Check if the checking point is inside All Point Grid
							if(x<0 || x>GridWidthPointCounts || y<0 || y>GridHeightPointCounts)
							{
								//condition: outside the bounds - make it become wall
								NeighborWallCounts++;
							}
							else
							{
								//Make sure it's not the center grid. If it's center grid of the checking bound, won't add any number to the neighbor counter
								if(y != j || x != k)
								{
									int32 TempNum = (x*GridWidthPointCounts)+y;
									if(TempOutputPoints[0].Density == 1)
									{
										NeighborWallCounts++;
									}
								}
							}
						}
					}

					//if(k*GridWidthPointCounts+k <= GridWidthPointCounts*GridWidthPointCounts)
					//{
					//	if(NeighborWallCounts > 4)
					//	{
					//		TempOutputPoints[k*GridWidthPointCounts+k].Density = 1;
					//	}
					//	else
					//	{
					//		TempOutputPoints[k*GridWidthPointCounts+k].Density = 0;
					//	}
					//}
					
				}
				
			}

			//Apply the new points value back to original points
			//OutputPoints = TempOutputPoints;
		}
		
	}
	
	return true;
}
