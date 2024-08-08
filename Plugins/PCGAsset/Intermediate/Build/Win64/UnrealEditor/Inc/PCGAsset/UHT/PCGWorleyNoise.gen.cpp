// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGAsset/Public/PCGWorleyNoise.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGWorleyNoise() {}

// Begin Cross Module References
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGWorleyNoiseSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGWorleyNoiseSettings_NoRegister();
PCGASSET_API UEnum* Z_Construct_UEnum_PCGAsset_EPCGWorleyNoiseMode();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

// Begin Enum EPCGWorleyNoiseMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGWorleyNoiseMode;
static UEnum* EPCGWorleyNoiseMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGWorleyNoiseMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGWorleyNoiseMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGAsset_EPCGWorleyNoiseMode, (UObject*)Z_Construct_UPackage__Script_PCGAsset(), TEXT("EPCGWorleyNoiseMode"));
	}
	return Z_Registration_Info_UEnum_EPCGWorleyNoiseMode.OuterSingleton;
}
template<> PCGASSET_API UEnum* StaticEnum<EPCGWorleyNoiseMode>()
{
	return EPCGWorleyNoiseMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGAsset_EPCGWorleyNoiseMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PCGWorleyNoise.h" },
		{ "WorleyNoise2D.Name", "EPCGWorleyNoiseMode::WorleyNoise2D" },
		{ "WorleyNoise3D.Name", "EPCGWorleyNoiseMode::WorleyNoise3D" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGWorleyNoiseMode::WorleyNoise2D", (int64)EPCGWorleyNoiseMode::WorleyNoise2D },
		{ "EPCGWorleyNoiseMode::WorleyNoise3D", (int64)EPCGWorleyNoiseMode::WorleyNoise3D },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGAsset_EPCGWorleyNoiseMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGAsset,
	nullptr,
	"EPCGWorleyNoiseMode",
	"EPCGWorleyNoiseMode",
	Z_Construct_UEnum_PCGAsset_EPCGWorleyNoiseMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGAsset_EPCGWorleyNoiseMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGAsset_EPCGWorleyNoiseMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGAsset_EPCGWorleyNoiseMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGAsset_EPCGWorleyNoiseMode()
{
	if (!Z_Registration_Info_UEnum_EPCGWorleyNoiseMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGWorleyNoiseMode.InnerSingleton, Z_Construct_UEnum_PCGAsset_EPCGWorleyNoiseMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGWorleyNoiseMode.InnerSingleton;
}
// End Enum EPCGWorleyNoiseMode

// Begin Class UPCGWorleyNoiseSettings
void UPCGWorleyNoiseSettings::StaticRegisterNativesUPCGWorleyNoiseSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGWorleyNoiseSettings);
UClass* Z_Construct_UClass_UPCGWorleyNoiseSettings_NoRegister()
{
	return UPCGWorleyNoiseSettings::StaticClass();
}
struct Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGWorleyNoise.h" },
		{ "ModuleRelativePath", "Public/PCGWorleyNoise.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseCellSize_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*******************************************\n\x09Promote variables that will be shown in details panel\n\x09********************************************///Control the Perlin noise height and scale\n" },
#endif
		{ "ModuleRelativePath", "Public/PCGWorleyNoise.h" },
		{ "PCG_Overridable", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Promote variables that will be shown in details panel\n******************************************//Control the Perlin noise height and scale" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseAttenuation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGWorleyNoise.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightMultiplier_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGWorleyNoise.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGWorleyNoise.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseCellSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseAttenuation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightMultiplier;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGWorleyNoiseSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics::NewProp_NoiseCellSize = { "NoiseCellSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGWorleyNoiseSettings, NoiseCellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseCellSize_MetaData), NewProp_NoiseCellSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics::NewProp_NoiseAttenuation = { "NoiseAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGWorleyNoiseSettings, NoiseAttenuation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseAttenuation_MetaData), NewProp_NoiseAttenuation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics::NewProp_HeightMultiplier = { "HeightMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGWorleyNoiseSettings, HeightMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMultiplier_MetaData), NewProp_HeightMultiplier_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGWorleyNoiseSettings, Mode), Z_Construct_UEnum_PCGAsset_EPCGWorleyNoiseMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 3954747096
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics::NewProp_NoiseCellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics::NewProp_NoiseAttenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics::NewProp_HeightMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics::NewProp_Mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics::ClassParams = {
	&UPCGWorleyNoiseSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGWorleyNoiseSettings()
{
	if (!Z_Registration_Info_UClass_UPCGWorleyNoiseSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGWorleyNoiseSettings.OuterSingleton, Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGWorleyNoiseSettings.OuterSingleton;
}
template<> PCGASSET_API UClass* StaticClass<UPCGWorleyNoiseSettings>()
{
	return UPCGWorleyNoiseSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGWorleyNoiseSettings);
UPCGWorleyNoiseSettings::~UPCGWorleyNoiseSettings() {}
// End Class UPCGWorleyNoiseSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGWorleyNoise_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGWorleyNoiseMode_StaticEnum, TEXT("EPCGWorleyNoiseMode"), &Z_Registration_Info_UEnum_EPCGWorleyNoiseMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3954747096U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGWorleyNoiseSettings, UPCGWorleyNoiseSettings::StaticClass, TEXT("UPCGWorleyNoiseSettings"), &Z_Registration_Info_UClass_UPCGWorleyNoiseSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGWorleyNoiseSettings), 3307552555U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGWorleyNoise_h_2433574225(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGWorleyNoise_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGWorleyNoise_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGWorleyNoise_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGWorleyNoise_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
