// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGRotateAroundCenter.generated.h"

UENUM()
enum class EPCGRotateAroundCenterMode : uint8
{
	X,
	Y,
	Z
};


UCLASS()
//Override PCG Settings
class PCGASSET_API UPCGRotateAroundCenterSettings : public UPCGSettings
{
	GENERATED_BODY()

public:
	//Override PCG Settings' default value
	UPCGRotateAroundCenterSettings();

	//~Begin node UI interface setting
#if WITH_EDITOR
	//Set node's display name
	virtual FName GetDefaultNodeName() const override { return FName(TEXT("RotateAroundCenter")); }
	virtual FText GetDefaultNodeTitle() const override { return NSLOCTEXT("RotateAroundCenter", "NodeTitle", "RotateAroundCenter"); }
	//Set node's category
	virtual EPCGSettingsType GetType() const override { return EPCGSettingsType::PointOps; }
#endif
	

protected:
	//Set Input Pin and Output Pin type to Point type
	virtual TArray<FPCGPinProperties> InputPinProperties() const override { return Super::DefaultPointInputPinProperties(); }
	virtual TArray<FPCGPinProperties> OutputPinProperties() const override { return Super::DefaultPointOutputPinProperties(); }
	virtual FPCGElementPtr CreateElement() const override;
	//~End node UI interface setting

public:
	/*******************************************
	Promote variables that will be shown in details panel
	********************************************/
	//Control the Perlin noise height and scale
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	FVector CenterLocation = FVector::Zero();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	float RotateDegree = 0.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	EPCGRotateAroundCenterMode RotateAxis = EPCGRotateAroundCenterMode::Z;
	
};

//Override PCG Execution
class PCGASSET_API FPCGRotateAroundCenterElement : public IPCGElement
{
protected:
	virtual bool ExecuteInternal(FPCGContext* Context) const override;
};