// Fill out your copyright notice in the Description page of Project Settings.
#include "PCGPointGroup.h"

#include "PCGContext.h"
#include "Data/PCGSpatialData.h"
#include "Data/PCGPointData.h"
#include "PCGParamData.h"
#include "Helpers/PCGAsync.h"
#include "Elements/Metadata/PCGMetadataElementCommon.h"
#include "Metadata/Accessors/PCGAttributeAccessorHelpers.h"
#include "Helpers/PCGHelpers.h"
#include "Math/RandomStream.h"
#include "Metadata/PCGMetadataTypesConstantStruct.h"
//The macro in UE5 for speed up the compilation. Just add it
#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGPointGroup)
//Using Name Space to avoid variable name conflict with engine code. Just add it
#define LOCTEXT_NAMESPACE "PCGPointGroup"

namespace PCGCreateAttribute
{
	FPCGMetadataAttributeBase* ClearOrCreateAttribute(const FPCGMetadataTypesConstantStruct& AttributeTypes, UPCGMetadata* Metadata, const FName OutputAttributeName)
	{
		check(Metadata);

		auto CreateAttribute = [Metadata, OutputAttributeName](auto&& Value) -> FPCGMetadataAttributeBase*
		{
			return PCGMetadataElementCommon::ClearOrCreateAttribute(Metadata, OutputAttributeName, std::forward<decltype(Value)>(Value));
		};

		return AttributeTypes.Dispatcher(CreateAttribute);
	}
}

UPCGPointGroupSettings::UPCGPointGroupSettings()
{
	bUseSeed = false;
}

FPCGElementPtr UPCGPointGroupSettings::CreateElement() const
{
	return MakeShared<FPCGPointGroupElement>();
}

bool FPCGPointGroupElement::ExecuteInternal(FPCGContext* Context) const
{
	//Store PCG Settings. Use it for get access to all variables we declared or adjusted in PCG Settings in header
	const UPCGPointGroupSettings* Settings = Context->GetInputSettings<UPCGPointGroupSettings>();
	check(Settings);
	
	//Create Input and Output data first. We will adjust, set the value and reference back to this variable
	const TArray<FPCGTaggedData> InputsTaggedDatas = Context->InputData.GetInputs();
	TArray<FPCGTaggedData>& Outputs = Context->OutputData.TaggedData;

	//Pass the UPROPERTY variable here. A bit different from normal actor. We can't get access to the data directly
	const FVector& CustomOffset = Settings->CustomOffset;
	const FName& GroupName = Settings->GroupName;


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
		FPCGTaggedData& Output = Outputs.Add_GetRef(InputsTaggedData);
		UPCGPointData* OutputPointData = NewObject<UPCGPointData>();
		OutputPointData->InitializeFromData(InputPointData);
		TArray<FPCGPoint>& OutputPoints = OutputPointData->GetMutablePoints();
		Output.Data = OutputPointData;

		//Create new attribute data for output. Initialize the metadata with input data first
		const UPCGData* InData = InputsTaggedData.Data;
		UPCGData* OutputData = InData->DuplicateData();
		check(OutputData);
		UPCGMetadata* OutputMetadata = OutputData->MutableMetadata();
		//Not sure where the default value of attribute type come from???
		//No need to initialize this attribute column???
		//Currently user will define the parameter type in editor
		PCGCreateAttribute::ClearOrCreateAttribute(Settings->AttributeTypes, OutputMetadata, GroupName);
		
		// Making sure we have at least one entry.
		if (OutputMetadata && OutputMetadata->GetItemCountForChild() == 0)
		{
			OutputMetadata->AddEntry();
		}
		
		//Assign adjusted attribute back
		//FPCGTaggedData& NewData = Context->OutputData.TaggedData.Add_GetRef(InputsTaggedData);
		Output.Data = OutputData;


		
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
			FVector FinalPosition = FVector(SourceTransform.GetLocation() + CustomOffset);
			FinalTransform.SetLocation(FinalPosition);
			
			//Assign back 
			OutPoint.Transform = FinalTransform;
			
			return true;
		}
		);
	}
	
	return true;
}
