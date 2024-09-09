// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGPerlinNoise.generated.h"

UENUM()
enum class EPCGPerlinNoiseMode : uint8
{
	PelinNoise2D,
	PelinNoise3D
};

UCLASS()
//Override PCG Settings
class PCGASSET_API UPCGPerlinNoise2DSettings: public UPCGSettings
{
	GENERATED_BODY()

public:
	//Override PCG Settings' default value
	UPCGPerlinNoise2DSettings();

	//~Begin node UI interface setting
#if WITH_EDITOR
	//Set node's display name
	virtual FName GetDefaultNodeName() const override { return FName(TEXT("PerlinNoise")); }
	virtual FText GetDefaultNodeTitle() const override { return NSLOCTEXT("PerlinNoise", "NodeTitle", "PerlinNoise"); }
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
	float HeightMultiplier = 1.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	float ScaleMultiplier = 0.001f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	EPCGPerlinNoiseMode Mode = EPCGPerlinNoiseMode::PelinNoise2D;

};


//Override Execute function

class PCGASSET_API FPCGPerlinNoise2DElement : public IPCGElement
{
protected:
	virtual bool ExecuteInternal(FPCGContext* Context) const override;
};