// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGWorleyNoise.generated.h"

UENUM()
enum class EPCGWorleyNoiseMode : uint8
{
	WorleyNoise2D,
	WorleyNoise3D,
};

UCLASS()
//Override PCG Settings
class PCGASSET_API UPCGWorleyNoiseSettings : public UPCGSettings
{
	GENERATED_BODY()

public:
	//Override PCG Settings' default value
	UPCGWorleyNoiseSettings();

	//~Begin node UI interface setting
#if WITH_EDITOR
	//Set node's display name
	virtual FName GetDefaultNodeName() const override { return FName(TEXT("WorleyNoise")); }
	virtual FText GetDefaultNodeTitle() const override { return NSLOCTEXT("WorleyNoise", "NodeTitle", "WorleyNoise"); }
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
	float ScaleMultiplier = 1000.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	float NoiseAttenuation = 0.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	float HeightMultiplier = 300.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	EPCGWorleyNoiseMode Mode = EPCGWorleyNoiseMode::WorleyNoise2D;

	//Generate Worley Noise 2D
	static float WorleyNoise2D(float X, float Y, int Seed, float CellSize, float Attenuation);
	//Generate Worley Noise 3D
	static float WorleyNoise3D(float X, float Y, float Z, int Seed, float CellSize, float Attenuation);
};

//Override PCG Execution
class PCGASSET_API FPCGWorleyNoiseElement : public IPCGElement
{
protected:
	virtual bool ExecuteInternal(FPCGContext* Context) const override;
};