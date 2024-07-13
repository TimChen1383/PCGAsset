// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGAsset/Public/PCGScaleAffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGScaleAffect() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGScaleAffectSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGScaleAffectSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

// Begin Class UPCGScaleAffectSettings
void UPCGScaleAffectSettings::StaticRegisterNativesUPCGScaleAffectSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGScaleAffectSettings);
UClass* Z_Construct_UClass_UPCGScaleAffectSettings_NoRegister()
{
	return UPCGScaleAffectSettings::StaticClass();
}
struct Z_Construct_UClass_UPCGScaleAffectSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGScaleAffect.h" },
		{ "ModuleRelativePath", "Public/PCGScaleAffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SacleAffectPointLocation_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*******************************************\n\x09Promote variables that will be shown in details panel\n\x09********************************************///Control the Perlin noise height and scale\n" },
#endif
		{ "ModuleRelativePath", "Public/PCGScaleAffect.h" },
		{ "PCG_Overridable", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Promote variables that will be shown in details panel\n******************************************//Control the Perlin noise height and scale" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleAffectMaxDistance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGScaleAffect.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleAffectStrength_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGScaleAffect.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SacleAffectPointLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleAffectMaxDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleAffectStrength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGScaleAffectSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGScaleAffectSettings_Statics::NewProp_SacleAffectPointLocation = { "SacleAffectPointLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGScaleAffectSettings, SacleAffectPointLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SacleAffectPointLocation_MetaData), NewProp_SacleAffectPointLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGScaleAffectSettings_Statics::NewProp_ScaleAffectMaxDistance = { "ScaleAffectMaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGScaleAffectSettings, ScaleAffectMaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleAffectMaxDistance_MetaData), NewProp_ScaleAffectMaxDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGScaleAffectSettings_Statics::NewProp_ScaleAffectStrength = { "ScaleAffectStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGScaleAffectSettings, ScaleAffectStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleAffectStrength_MetaData), NewProp_ScaleAffectStrength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGScaleAffectSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGScaleAffectSettings_Statics::NewProp_SacleAffectPointLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGScaleAffectSettings_Statics::NewProp_ScaleAffectMaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGScaleAffectSettings_Statics::NewProp_ScaleAffectStrength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGScaleAffectSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCGScaleAffectSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGScaleAffectSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGScaleAffectSettings_Statics::ClassParams = {
	&UPCGScaleAffectSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGScaleAffectSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGScaleAffectSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGScaleAffectSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGScaleAffectSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGScaleAffectSettings()
{
	if (!Z_Registration_Info_UClass_UPCGScaleAffectSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGScaleAffectSettings.OuterSingleton, Z_Construct_UClass_UPCGScaleAffectSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGScaleAffectSettings.OuterSingleton;
}
template<> PCGASSET_API UClass* StaticClass<UPCGScaleAffectSettings>()
{
	return UPCGScaleAffectSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGScaleAffectSettings);
UPCGScaleAffectSettings::~UPCGScaleAffectSettings() {}
// End Class UPCGScaleAffectSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGScaleAffect_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGScaleAffectSettings, UPCGScaleAffectSettings::StaticClass, TEXT("UPCGScaleAffectSettings"), &Z_Registration_Info_UClass_UPCGScaleAffectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGScaleAffectSettings), 2439461188U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGScaleAffect_h_3362795815(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGScaleAffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGScaleAffect_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
