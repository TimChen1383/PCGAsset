// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGCreateCirclePoints.generated.h"


UENUM()
enum class EPCGCreateCirclePointsMode : uint8
{
 Inward,
 Outward,
 TangentA,
 TangentB
};


UCLASS()
//Override PCG Settings
class PCGASSET_API UPCGCreateCircleSettings : public UPCGSettings
{
 GENERATED_BODY()

public:
 //Override PCG Settings' default value
 UPCGCreateCircleSettings();

 //~Begin node UI interface setting
#if WITH_EDITOR
 //Set node's display name
 virtual FName GetDefaultNodeName() const override { return FName(TEXT("CreateCirclePoints")); }
 virtual FText GetDefaultNodeTitle() const override { return NSLOCTEXT("CreateCirclePoints", "NodeTitle", "CreateCirclePoints"); }
 virtual FText GetNodeTooltipText() const override { return NSLOCTEXT("PCGCreateCCirclePoints", "NodeTooltip", "Creates circle points on provided points number."); }
 //Set node's category
 virtual EPCGSettingsType GetType() const override { return EPCGSettingsType::Spatial; }
#endif
	

protected:
 //Set Input Pin and Output Pin type to Point type
 virtual TArray<FPCGPinProperties> InputPinProperties() const override; //No input pin for this node
 virtual TArray<FPCGPinProperties> OutputPinProperties() const override { return Super::DefaultPointOutputPinProperties(); }
 virtual FPCGElementPtr CreateElement() const override;
 //~End node UI interface setting

public:
 /*******************************************
 Promote variables that will be shown in details panel
 ********************************************/
 //Control the Perlin noise height and scale

 UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
 int64 CircleDegree = 360;

 UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
 int64 CirclePointCounts = 10;

 UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
 float CircleRadius = 200.0;

 UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
 float SineFrequency = 0.0;

 UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
 float SineAltitude = 0.0;
 
 UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
 EPCGCreateCirclePointsMode FacingDirection = EPCGCreateCirclePointsMode::Inward;
};

//Override PCG Execution
class PCGASSET_API FPCGCreateCircleElement : public IPCGElement
{
protected:
 virtual bool ExecuteInternal(FPCGContext* Context) const override;
};