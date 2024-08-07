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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGWorleyNoiseSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGWorleyNoiseSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomOffset_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseCellSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGWorleyNoise.h" },
		{ "PCG_Overridable", "" },
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseCellSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseAttenuation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGWorleyNoiseSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics::NewProp_CustomOffset = { "CustomOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGWorleyNoiseSettings, CustomOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomOffset_MetaData), NewProp_CustomOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics::NewProp_NoiseCellSize = { "NoiseCellSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGWorleyNoiseSettings, NoiseCellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseCellSize_MetaData), NewProp_NoiseCellSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics::NewProp_NoiseAttenuation = { "NoiseAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGWorleyNoiseSettings, NoiseAttenuation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseAttenuation_MetaData), NewProp_NoiseAttenuation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics::NewProp_HeightMultiplier = { "HeightMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGWorleyNoiseSettings, HeightMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMultiplier_MetaData), NewProp_HeightMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics::NewProp_CustomOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics::NewProp_NoiseCellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics::NewProp_NoiseAttenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGWorleyNoiseSettings_Statics::NewProp_HeightMultiplier,
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
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGWorleyNoiseSettings, UPCGWorleyNoiseSettings::StaticClass, TEXT("UPCGWorleyNoiseSettings"), &Z_Registration_Info_UClass_UPCGWorleyNoiseSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGWorleyNoiseSettings), 2775853127U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGWorleyNoise_h_551705085(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGWorleyNoise_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGWorleyNoise_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
