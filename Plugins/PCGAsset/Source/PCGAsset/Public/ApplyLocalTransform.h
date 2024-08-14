// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "ApplyLocalTransform.generated.h"

UCLASS()
//Override PCG Settings
class PCGASSET_API UPCGApplyLocalTransformSettings : public UPCGSettings
{

	GENERATED_BODY()

public:
	//Override PCG Settings' default value
	UPCGApplyLocalTransformSettings();

	virtual void PostLoad() override;

	//~Begin node UI interface setting
#if WITH_EDITOR
	//Set node's display name
	virtual FName GetDefaultNodeName() const override { return FName(TEXT("ApplyLocalTransform")); }
	virtual FText GetDefaultNodeTitle() const override { return NSLOCTEXT("ApplyLocalTransform", "NodeTitle", "ApplyLocalTransform"); }
	//Set node's category
	virtual EPCGSettingsType GetType() const override { return EPCGSettingsType::Spatial; }
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

	
	
};

//Override PCG Execution
class PCGASSET_API FPCGApplyLocalTransformElement : public IPCGElement
{
protected:
	virtual bool ExecuteInternal(FPCGContext* Context) const override;
	
};

