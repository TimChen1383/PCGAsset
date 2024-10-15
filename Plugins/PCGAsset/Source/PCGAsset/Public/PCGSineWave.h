// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGSineWave.generated.h"


UCLASS()
class PCGASSET_API UPCGSineWaveSettings : public UPCGSettings
{
	GENERATED_BODY()

public:
	//Override PCG Settings' default value
	UPCGSineWaveSettings();

	//~Begin node UI interface setting
#if WITH_EDITOR
	//Set node's display name
	virtual FName GetDefaultNodeName() const override { return FName(TEXT("SineWave")); }
	virtual FText GetDefaultNodeTitle() const override { return NSLOCTEXT("SineWave", "NodeTitle", "SineWave"); }
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
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	float ScaleMultiplier = 0.01f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	float HeightMultiplier = 100.0f;
};

//Override PCG Execution
class PCGASSET_API FPCGSineWaveElement : public IPCGElement
{
protected:
	virtual bool ExecuteInternal(FPCGContext* Context) const override;
};