// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGAsset/Public/PCGSineWave.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGSineWave() {}

// Begin Cross Module References
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGSineWaveSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGSineWaveSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

// Begin Class UPCGSineWaveSettings
void UPCGSineWaveSettings::StaticRegisterNativesUPCGSineWaveSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGSineWaveSettings);
UClass* Z_Construct_UClass_UPCGSineWaveSettings_NoRegister()
{
	return UPCGSineWaveSettings::StaticClass();
}
struct Z_Construct_UClass_UPCGSineWaveSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGSineWave.h" },
		{ "ModuleRelativePath", "Public/PCGSineWave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMultiplier_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*******************************************\n\x09Promote variables that will be shown in details panel\n\x09********************************************/" },
#endif
		{ "ModuleRelativePath", "Public/PCGSineWave.h" },
		{ "PCG_Overridable", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Promote variables that will be shown in details panel" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightMultiplier_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGSineWave.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGSineWaveSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGSineWaveSettings_Statics::NewProp_ScaleMultiplier = { "ScaleMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSineWaveSettings, ScaleMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleMultiplier_MetaData), NewProp_ScaleMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGSineWaveSettings_Statics::NewProp_HeightMultiplier = { "HeightMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSineWaveSettings, HeightMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMultiplier_MetaData), NewProp_HeightMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGSineWaveSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSineWaveSettings_Statics::NewProp_ScaleMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSineWaveSettings_Statics::NewProp_HeightMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSineWaveSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCGSineWaveSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSineWaveSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGSineWaveSettings_Statics::ClassParams = {
	&UPCGSineWaveSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGSineWaveSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSineWaveSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSineWaveSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGSineWaveSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGSineWaveSettings()
{
	if (!Z_Registration_Info_UClass_UPCGSineWaveSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGSineWaveSettings.OuterSingleton, Z_Construct_UClass_UPCGSineWaveSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGSineWaveSettings.OuterSingleton;
}
template<> PCGASSET_API UClass* StaticClass<UPCGSineWaveSettings>()
{
	return UPCGSineWaveSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGSineWaveSettings);
UPCGSineWaveSettings::~UPCGSineWaveSettings() {}
// End Class UPCGSineWaveSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGSineWave_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGSineWaveSettings, UPCGSineWaveSettings::StaticClass, TEXT("UPCGSineWaveSettings"), &Z_Registration_Info_UClass_UPCGSineWaveSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGSineWaveSettings), 1469549597U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGSineWave_h_3213120295(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGSineWave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGSineWave_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
