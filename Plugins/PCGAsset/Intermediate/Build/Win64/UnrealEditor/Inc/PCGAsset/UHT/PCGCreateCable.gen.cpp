// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGAsset/Public/PCGCreateCable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGCreateCable() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGAttachOptions();
PCGASSET_API UClass* Z_Construct_UClass_UPCGCreateCableSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGCreateCableSettings_NoRegister();
PCGASSET_API UEnum* Z_Construct_UEnum_PCGAsset_EPCGCreateCableMode();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

// Begin Enum EPCGCreateCableMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGCreateCableMode;
static UEnum* EPCGCreateCableMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGCreateCableMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGCreateCableMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGAsset_EPCGCreateCableMode, (UObject*)Z_Construct_UPackage__Script_PCGAsset(), TEXT("EPCGCreateCableMode"));
	}
	return Z_Registration_Info_UEnum_EPCGCreateCableMode.OuterSingleton;
}
template<> PCGASSET_API UEnum* StaticEnum<EPCGCreateCableMode>()
{
	return EPCGCreateCableMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGAsset_EPCGCreateCableMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CreateComponent.Name", "EPCGCreateCableMode::CreateComponent" },
		{ "CreateDataOnly.Name", "EPCGCreateCableMode::CreateDataOnly" },
		{ "CreateNewActor.Comment", "//Actually we can't choose this in PCG Graph\n" },
		{ "CreateNewActor.Hidden", "" },
		{ "CreateNewActor.Name", "EPCGCreateCableMode::CreateNewActor" },
		{ "CreateNewActor.ToolTip", "Actually we can't choose this in PCG Graph" },
		{ "ModuleRelativePath", "Public/PCGCreateCable.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGCreateCableMode::CreateDataOnly", (int64)EPCGCreateCableMode::CreateDataOnly },
		{ "EPCGCreateCableMode::CreateComponent", (int64)EPCGCreateCableMode::CreateComponent },
		{ "EPCGCreateCableMode::CreateNewActor", (int64)EPCGCreateCableMode::CreateNewActor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGAsset_EPCGCreateCableMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGAsset,
	nullptr,
	"EPCGCreateCableMode",
	"EPCGCreateCableMode",
	Z_Construct_UEnum_PCGAsset_EPCGCreateCableMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGAsset_EPCGCreateCableMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGAsset_EPCGCreateCableMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGAsset_EPCGCreateCableMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGAsset_EPCGCreateCableMode()
{
	if (!Z_Registration_Info_UEnum_EPCGCreateCableMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGCreateCableMode.InnerSingleton, Z_Construct_UEnum_PCGAsset_EPCGCreateCableMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGCreateCableMode.InnerSingleton;
}
// End Enum EPCGCreateCableMode

// Begin Class UPCGCreateCableSettings
void UPCGCreateCableSettings::StaticRegisterNativesUPCGCreateCableSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGCreateCableSettings);
UClass* Z_Construct_UClass_UPCGCreateCableSettings_NoRegister()
{
	return UPCGCreateCableSettings::StaticClass();
}
struct Z_Construct_UClass_UPCGCreateCableSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This is different\n" },
#endif
		{ "IncludePath", "PCGCreateCable.h" },
		{ "ModuleRelativePath", "Public/PCGCreateCable.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is different" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGCreateCable.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CableCounts_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGCreateCable.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentAmount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGCreateCable.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGCreateCable.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGCreateCable.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachOptions_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Mode==EPCGCreateCableMode::CreateNewActor" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGCreateCable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CableCounts;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TangentAmount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_AttachOptions_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttachOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGCreateCableSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGCreateCableSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGCreateCableSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCreateCableSettings, Mode), Z_Construct_UEnum_PCGAsset_EPCGCreateCableMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 640622336
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGCreateCableSettings_Statics::NewProp_CableCounts = { "CableCounts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCreateCableSettings, CableCounts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CableCounts_MetaData), NewProp_CableCounts_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGCreateCableSettings_Statics::NewProp_TangentAmount = { "TangentAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCreateCableSettings, TangentAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentAmount_MetaData), NewProp_TangentAmount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGCreateCableSettings_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCreateCableSettings, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGCreateCableSettings_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCreateCableSettings, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPCGCreateCableSettings_Statics::NewProp_AttachOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGCreateCableSettings_Statics::NewProp_AttachOptions = { "AttachOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCreateCableSettings, AttachOptions), Z_Construct_UEnum_PCG_EPCGAttachOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachOptions_MetaData), NewProp_AttachOptions_MetaData) }; // 3528313874
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGCreateCableSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateCableSettings_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateCableSettings_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateCableSettings_Statics::NewProp_CableCounts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateCableSettings_Statics::NewProp_TangentAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateCableSettings_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateCableSettings_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateCableSettings_Statics::NewProp_AttachOptions_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateCableSettings_Statics::NewProp_AttachOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateCableSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCGCreateCableSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateCableSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGCreateCableSettings_Statics::ClassParams = {
	&UPCGCreateCableSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGCreateCableSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateCableSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateCableSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGCreateCableSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGCreateCableSettings()
{
	if (!Z_Registration_Info_UClass_UPCGCreateCableSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGCreateCableSettings.OuterSingleton, Z_Construct_UClass_UPCGCreateCableSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGCreateCableSettings.OuterSingleton;
}
template<> PCGASSET_API UClass* StaticClass<UPCGCreateCableSettings>()
{
	return UPCGCreateCableSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGCreateCableSettings);
UPCGCreateCableSettings::~UPCGCreateCableSettings() {}
// End Class UPCGCreateCableSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCable_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGCreateCableMode_StaticEnum, TEXT("EPCGCreateCableMode"), &Z_Registration_Info_UEnum_EPCGCreateCableMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 640622336U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGCreateCableSettings, UPCGCreateCableSettings::StaticClass, TEXT("UPCGCreateCableSettings"), &Z_Registration_Info_UClass_UPCGCreateCableSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGCreateCableSettings), 919306293U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCable_h_2396158520(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCable_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCable_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCable_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
