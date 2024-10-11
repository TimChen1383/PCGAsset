// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGAsset/Public/PCGSetDensity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGSetDensity() {}

// Begin Cross Module References
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGSetDensitySettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGSetDensitySettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

// Begin Class UPCGSetDensitySettings
void UPCGSetDensitySettings::StaticRegisterNativesUPCGSetDensitySettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGSetDensitySettings);
UClass* Z_Construct_UClass_UPCGSetDensitySettings_NoRegister()
{
	return UPCGSetDensitySettings::StaticClass();
}
struct Z_Construct_UClass_UPCGSetDensitySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGSetDensity.h" },
		{ "ModuleRelativePath", "Public/PCGSetDensity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DensityValue_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*******************************************\n\x09Promote variables that will be shown in details panel\n\x09********************************************///Control the Perlin noise height and scale\n" },
#endif
		{ "ModuleRelativePath", "Public/PCGSetDensity.h" },
		{ "PCG_Overridable", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Promote variables that will be shown in details panel\n******************************************//Control the Perlin noise height and scale" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DensityValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGSetDensitySettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGSetDensitySettings_Statics::NewProp_DensityValue = { "DensityValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSetDensitySettings, DensityValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DensityValue_MetaData), NewProp_DensityValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGSetDensitySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSetDensitySettings_Statics::NewProp_DensityValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSetDensitySettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCGSetDensitySettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSetDensitySettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGSetDensitySettings_Statics::ClassParams = {
	&UPCGSetDensitySettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGSetDensitySettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSetDensitySettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSetDensitySettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGSetDensitySettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGSetDensitySettings()
{
	if (!Z_Registration_Info_UClass_UPCGSetDensitySettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGSetDensitySettings.OuterSingleton, Z_Construct_UClass_UPCGSetDensitySettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGSetDensitySettings.OuterSingleton;
}
template<> PCGASSET_API UClass* StaticClass<UPCGSetDensitySettings>()
{
	return UPCGSetDensitySettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGSetDensitySettings);
UPCGSetDensitySettings::~UPCGSetDensitySettings() {}
// End Class UPCGSetDensitySettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGSetDensity_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGSetDensitySettings, UPCGSetDensitySettings::StaticClass, TEXT("UPCGSetDensitySettings"), &Z_Registration_Info_UClass_UPCGSetDensitySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGSetDensitySettings), 1181685604U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGSetDensity_h_2827107275(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGSetDensity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGSetDensity_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
