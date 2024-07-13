// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGAsset/Public/PCGPerlinNoise2D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGPerlinNoise2D() {}

// Begin Cross Module References
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGPerlinNoise2DSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGPerlinNoise2DSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

// Begin Class UPCGPerlinNoise2DSettings
void UPCGPerlinNoise2DSettings::StaticRegisterNativesUPCGPerlinNoise2DSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGPerlinNoise2DSettings);
UClass* Z_Construct_UClass_UPCGPerlinNoise2DSettings_NoRegister()
{
	return UPCGPerlinNoise2DSettings::StaticClass();
}
struct Z_Construct_UClass_UPCGPerlinNoise2DSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGPerlinNoise2D.h" },
		{ "ModuleRelativePath", "Public/PCGPerlinNoise2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightMultiplier_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*******************************************\n\x09Promote variables that will be shown in details panel\n\x09********************************************///Control the Perlin noise height and scale\n" },
#endif
		{ "ModuleRelativePath", "Public/PCGPerlinNoise2D.h" },
		{ "PCG_Overridable", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Promote variables that will be shown in details panel\n******************************************//Control the Perlin noise height and scale" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMultiplier_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPerlinNoise2D.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGPerlinNoise2DSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGPerlinNoise2DSettings_Statics::NewProp_HeightMultiplier = { "HeightMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPerlinNoise2DSettings, HeightMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMultiplier_MetaData), NewProp_HeightMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGPerlinNoise2DSettings_Statics::NewProp_ScaleMultiplier = { "ScaleMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPerlinNoise2DSettings, ScaleMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleMultiplier_MetaData), NewProp_ScaleMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGPerlinNoise2DSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPerlinNoise2DSettings_Statics::NewProp_HeightMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPerlinNoise2DSettings_Statics::NewProp_ScaleMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPerlinNoise2DSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCGPerlinNoise2DSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPerlinNoise2DSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGPerlinNoise2DSettings_Statics::ClassParams = {
	&UPCGPerlinNoise2DSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGPerlinNoise2DSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPerlinNoise2DSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPerlinNoise2DSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGPerlinNoise2DSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGPerlinNoise2DSettings()
{
	if (!Z_Registration_Info_UClass_UPCGPerlinNoise2DSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGPerlinNoise2DSettings.OuterSingleton, Z_Construct_UClass_UPCGPerlinNoise2DSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGPerlinNoise2DSettings.OuterSingleton;
}
template<> PCGASSET_API UClass* StaticClass<UPCGPerlinNoise2DSettings>()
{
	return UPCGPerlinNoise2DSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGPerlinNoise2DSettings);
UPCGPerlinNoise2DSettings::~UPCGPerlinNoise2DSettings() {}
// End Class UPCGPerlinNoise2DSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPerlinNoise2D_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGPerlinNoise2DSettings, UPCGPerlinNoise2DSettings::StaticClass, TEXT("UPCGPerlinNoise2DSettings"), &Z_Registration_Info_UClass_UPCGPerlinNoise2DSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGPerlinNoise2DSettings), 1917530356U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPerlinNoise2D_h_1013005824(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPerlinNoise2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPerlinNoise2D_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
