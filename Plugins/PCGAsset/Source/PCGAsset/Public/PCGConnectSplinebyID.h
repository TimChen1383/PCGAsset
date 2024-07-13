// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGConnectSplinebyID.generated.h"

struct FPCGContext;

namespace PCGConnectSplinebyIDConstants
{
	const FName SourcePointsLabel = TEXT("Source");
	const FName TargetPointsLabel = TEXT("Target");
}


UENUM()
enum class EPCGConnectSplinebyIDMode : uint8
{
	CreateDataOnly,
	CreateComponent,
	//Actually we can't choose this in PCG Graph
	CreateNewActor UMETA(Hidden)
};

UCLASS(BlueprintType, ClassGroup = (Procedural))
//Override PCG Settings
class PCGASSET_API UPCGConnectSplinebyIDSettings : public UPCGSettings
{
	GENERATED_BODY()

public:
	//Override PCG Settings' default value
	UPCGConnectSplinebyIDSettings();

	//~Begin node UI interface setting
#if WITH_EDITOR
	//Set node's display name
	virtual FName GetDefaultNodeName() const override { return FName(TEXT("ConnectSplinebyID")); }
	virtual FText GetDefaultNodeTitle() const override { return NSLOCTEXT("ConnectSplinebyID", "NodeTitle", "ConnectSplinebyID"); }
	//Set node's category
	virtual EPCGSettingsType GetType() const override { return EPCGSettingsType::PointOps; }
#endif
	

protected:
	//Set Input Pin and Output Pin type to Point type
	virtual TArray<FPCGPinProperties> InputPinProperties() const override ;
	virtual TArray<FPCGPinProperties> OutputPinProperties() const override ;
	virtual FPCGElementPtr CreateElement() const override;
	//~End node UI interface setting

public:
	/*******************************************
	Promote variables that will be shown in details panel
	********************************************/
	//Control the Perlin noise height and scale
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	EPCGConnectSplinebyIDMode Mode = EPCGConnectSplinebyIDMode::CreateDataOnly;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	FVector CustomOffset = FVector::Zero();
	
	UPROPERTY(meta = (PCG_Overridable))
	TSoftObjectPtr<AActor> TargetActor;
	
};

//Override PCG Execution
class PCGASSET_API FPCGConnectSplinebyIDElement : public IPCGElement
{
protected:
	virtual bool ExecuteInternal(FPCGContext* Context) const override;
};