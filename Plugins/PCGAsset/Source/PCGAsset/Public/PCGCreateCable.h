// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PCGElement.h"
#include "PCGSettings.h"
#include "Data/PCGSplineData.h"

#include "PCGCreateCable.generated.h"

struct FPCGContext;

UENUM()
enum class EPCGCreateCableMode : uint8
{
	CreateDataOnly,
	CreateComponent,
	//Actually we can't choose this in PCG Graph
	CreateNewActor UMETA(Hidden)
};

//This is different
UCLASS(BlueprintType, ClassGroup = (Procedural))
class PCGASSET_API UPCGCreateCableSettings : public UPCGSettings
{
	GENERATED_BODY()

public:
	UPCGCreateCableSettings(const FObjectInitializer& ObjectInitializer);

	//~Begin node UI interface setting
#if WITH_EDITOR
	virtual FName GetDefaultNodeName() const override { return FName(TEXT("CreateCable")); }
	virtual FText GetDefaultNodeTitle() const override { return NSLOCTEXT("CreateCable", "NodeTitle", "CreateCable"); }
	virtual FText GetNodeTooltipText() const override;
	virtual EPCGSettingsType GetType() const override { return EPCGSettingsType::Spatial; }
#endif
	
	
	virtual TArray<FPCGPinProperties> InputPinProperties() const override { return Super::DefaultPointInputPinProperties(); }
	virtual TArray<FPCGPinProperties> OutputPinProperties() const override ;

protected:
	virtual FPCGElementPtr CreateElement() const override;
	//~End node UI interface setting

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	EPCGCreateCableMode Mode = EPCGCreateCableMode::CreateDataOnly;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	int32 CableCounts = 3;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	float TangentAmount = 500.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	int32 RandomSeed = 100;
	
	//UPROPERTY(meta = (PCG_Overridable))
	TSoftObjectPtr<AActor> TargetActor;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (EditCondition = "Mode==EPCGCreateCableMode::CreateNewActor", EditConditionHides))
	EPCGAttachOptions AttachOptions = EPCGAttachOptions::Attached; 
	
};

class PCGASSET_API FPCGCreateCableElement : public IPCGElement
{
protected:
	virtual bool CanExecuteOnlyOnMainThread(FPCGContext* Context) const override;
	virtual bool IsCacheable(const UPCGSettings* InSettings) const override;
	virtual bool ExecuteInternal(FPCGContext* Context) const override;
};
