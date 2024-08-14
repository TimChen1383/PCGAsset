// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGAsset/Public/PCGInternalToDensity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGInternalToDensity() {}

// Begin Cross Module References
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGInternalToDensitySettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGInternalToDensitySettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

// Begin Class UPCGInternalToDensitySettings
void UPCGInternalToDensitySettings::StaticRegisterNativesUPCGInternalToDensitySettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGInternalToDensitySettings);
UClass* Z_Construct_UClass_UPCGInternalToDensitySettings_NoRegister()
{
	return UPCGInternalToDensitySettings::StaticClass();
}
struct Z_Construct_UClass_UPCGInternalToDensitySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGInternalToDensity.h" },
		{ "ModuleRelativePath", "Public/PCGInternalToDensity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchDistance_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*******************************************\n\x09Promote variables that will be shown in details panel\n\x09********************************************///Control the Perlin noise height and scale\n" },
#endif
		{ "ModuleRelativePath", "Public/PCGInternalToDensity.h" },
		{ "PCG_Overridable", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Promote variables that will be shown in details panel\n******************************************//Control the Perlin noise height and scale" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoveThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGInternalToDensity.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemoveThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGInternalToDensitySettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGInternalToDensitySettings_Statics::NewProp_SearchDistance = { "SearchDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGInternalToDensitySettings, SearchDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchDistance_MetaData), NewProp_SearchDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGInternalToDensitySettings_Statics::NewProp_RemoveThreshold = { "RemoveThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGInternalToDensitySettings, RemoveThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoveThreshold_MetaData), NewProp_RemoveThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGInternalToDensitySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGInternalToDensitySettings_Statics::NewProp_SearchDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGInternalToDensitySettings_Statics::NewProp_RemoveThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGInternalToDensitySettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCGInternalToDensitySettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGInternalToDensitySettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGInternalToDensitySettings_Statics::ClassParams = {
	&UPCGInternalToDensitySettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGInternalToDensitySettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGInternalToDensitySettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGInternalToDensitySettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGInternalToDensitySettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGInternalToDensitySettings()
{
	if (!Z_Registration_Info_UClass_UPCGInternalToDensitySettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGInternalToDensitySettings.OuterSingleton, Z_Construct_UClass_UPCGInternalToDensitySettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGInternalToDensitySettings.OuterSingleton;
}
template<> PCGASSET_API UClass* StaticClass<UPCGInternalToDensitySettings>()
{
	return UPCGInternalToDensitySettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGInternalToDensitySettings);
UPCGInternalToDensitySettings::~UPCGInternalToDensitySettings() {}
// End Class UPCGInternalToDensitySettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGInternalToDensity_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGInternalToDensitySettings, UPCGInternalToDensitySettings::StaticClass, TEXT("UPCGInternalToDensitySettings"), &Z_Registration_Info_UClass_UPCGInternalToDensitySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGInternalToDensitySettings), 1686452441U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGInternalToDensity_h_489919443(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGInternalToDensity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGInternalToDensity_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
