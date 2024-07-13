// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGPointArray.generated.h"

UCLASS()
class PCGASSET_API UPCGPointArraySettings : public UPCGSettings
{
	GENERATED_BODY()

public:
	//Override PCG Settings' default value
	UPCGPointArraySettings();

	//~Begin node UI interface setting
#if WITH_EDITOR
	//Set node's display name
	virtual FName GetDefaultNodeName() const override { return FName(TEXT("PointArray")); }
	virtual FText GetDefaultNodeTitle() const override { return NSLOCTEXT("PointArray", "NodeTitle", "PointArray"); }
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
	int32 DuplicateCounts = 3;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	FVector ZOffset = FVector(0,0,100);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	FVector ScaleOffset = FVector(0,0,0);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	float AllPointsRotationDegree = 0.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	float ObjectRollOffset = 0.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	float ObjectPitchOffset = 0.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	float ObjectYawOffset = 0.0f;
	
};

//Override PCG Execution
class PCGASSET_API FPCGPointArrayElement : public IPCGElement
{
protected:
	virtual bool ExecuteInternal(FPCGContext* Context) const override;
};