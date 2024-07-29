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


/**********************************************************************
To do list
- the node won't crash now. However seems like the value change of density is not much??
- the check point already print correctly, why the density is still not correct
- The value almost didn't change - I guess the issue is come from output points
- Looks like first look is correct but second loop is already wrong
- The multiple iteration loop print correctly

***********************************************************************/


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
		for(int32 i = 1; i <= IterationCounts; i++)
		{
			//Make a temporary copy of all the points
			TArray<FPCGPoint> TempOutputPoints = OutputPoints;
			
			//looping grids from left to right
			for(int32 GridHeightPointCount = 0; GridHeightPointCount < GridHeightPointCounts; GridHeightPointCount++)
			{
				//looping grids from bottom to top
				for(int32 GridWidthPointCount = 0; GridWidthPointCount < GridWidthPointCounts; GridWidthPointCount++)
				{
					//the counter that count the neighbor wall count
					int32 NeighborWallCounts = 0;

					//Print current point number for debugging
					//int32 CurrentPointNum = GridHeightPointCount*GridHeightPointCounts + GridWidthPointCount;
					//UE_LOG(LogTemp, Warning, TEXT("Current Point : %d"), CurrentPointNum);
					
					//looping grid's neighbor, from left to right
					for(int32 HeightCheckPoint = (GridHeightPointCount-1); HeightCheckPoint <= (GridHeightPointCount+1); HeightCheckPoint++)
					{
						//looping grid's neighbor, from bottom to top
						for(int32 WidthCheckPoint = (GridWidthPointCount-1); WidthCheckPoint <= (GridWidthPointCount+1); WidthCheckPoint++)
						{
							//Check if the checking point is inside All Point Grid
							if(HeightCheckPoint<0 || HeightCheckPoint >= GridHeightPointCounts || WidthCheckPoint<0 || WidthCheckPoint >= GridWidthPointCounts  )
							{
								//condition: outside the bounds - make it become wall
								NeighborWallCounts++;
							}
							else
							{
								//Make sure it's not the center grid. If it's center grid of the checking bound, won't add any number to the neighbor counter
								if(HeightCheckPoint == GridHeightPointCount && WidthCheckPoint == GridWidthPointCount)
								{
									//Center check point do nothing
								}
								else
								{
									int32 TempNum = (HeightCheckPoint*GridWidthPointCounts) + WidthCheckPoint;
									//UE_LOG(LogTemp, Warning, TEXT("Checking point : %d"), TempNum);
									if(TempOutputPoints[TempNum].Density == 1)
									{
										NeighborWallCounts++;
									}
								}
							}
						}
					}

					//Debug neighbor count
					UE_LOG(LogTemp, Warning, TEXT("NeighborWallCounts : %d"), NeighborWallCounts);

					//Debug output point order - this is correct
					//int32 OutputPointOrder = (GridHeightPointCount*GridHeightPointCounts) + GridWidthPointCount;
					//UE_LOG(LogTemp, Warning, TEXT("Output Point Order : %d"), OutputPointOrder);
					
					//Change the density value of current point
					if(NeighborWallCounts > 4)
					{
						OutputPoints[(GridHeightPointCount*GridHeightPointCounts) + GridWidthPointCount].Density = 1;
					}
					else
					{
						OutputPoints[(GridHeightPointCount*GridHeightPointCounts) + GridWidthPointCount].Density = 0;
					}
					
				}
			}
		}
	}
	return true;
}
