// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGRandom90Rotate.generated.h"

UENUM()
enum class EPCGRadom90RotateMode : uint8
{
	Roll,
	Pitch,
	Yaw
};


UCLASS()
//Override PCG Settings
class PCGASSET_API UPCGRandom90RotateSettings : public UPCGSettings
{
	GENERATED_BODY()

public:
	//Override PCG Settings' default value
	UPCGRandom90RotateSettings();

	//~Begin node UI interface setting
#if WITH_EDITOR
	//Set node's display name
	virtual FName GetDefaultNodeName() const override { return FName(TEXT("Random90Rotate")); }
	virtual FText GetDefaultNodeTitle() const override { return NSLOCTEXT("Random90Rotate", "NodeTitle", "Random90Rotate"); }
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
	EPCGRadom90RotateMode RotateDirection = EPCGRadom90RotateMode::Yaw;

	
};


//Override PCG Execution
class PCGASSET_API FPCGRandom90RotateElement : public IPCGElement
{
protected:
	virtual bool ExecuteInternal(FPCGContext* Context) const override;
};