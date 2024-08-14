// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGAsset/Public/PCGCubeDivide.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGCubeDivide() {}

// Begin Cross Module References
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGCubeDivideSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGCubeDivideSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

// Begin Class UPCGCubeDivideSettings
void UPCGCubeDivideSettings::StaticRegisterNativesUPCGCubeDivideSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGCubeDivideSettings);
UClass* Z_Construct_UClass_UPCGCubeDivideSettings_NoRegister()
{
	return UPCGCubeDivideSettings::StaticClass();
}
struct Z_Construct_UClass_UPCGCubeDivideSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGCubeDivide.h" },
		{ "ModuleRelativePath", "Public/PCGCubeDivide.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointDivideCounts_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*******************************************\n\x09Promote variables that will be shown in details panel\n\x09********************************************///Control the Perlin noise height and scale\n" },
#endif
		{ "ModuleRelativePath", "Public/PCGCubeDivide.h" },
		{ "PCG_Overridable", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Promote variables that will be shown in details panel\n******************************************//Control the Perlin noise height and scale" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGCubeDivide.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitSizeM_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGCubeDivide.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointDivideCounts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnitSizeM;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGCubeDivideSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGCubeDivideSettings_Statics::NewProp_PointDivideCounts = { "PointDivideCounts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCubeDivideSettings, PointDivideCounts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointDivideCounts_MetaData), NewProp_PointDivideCounts_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGCubeDivideSettings_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCubeDivideSettings, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGCubeDivideSettings_Statics::NewProp_UnitSizeM = { "UnitSizeM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCubeDivideSettings, UnitSizeM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitSizeM_MetaData), NewProp_UnitSizeM_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGCubeDivideSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCubeDivideSettings_Statics::NewProp_PointDivideCounts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCubeDivideSettings_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCubeDivideSettings_Statics::NewProp_UnitSizeM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCubeDivideSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCGCubeDivideSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCubeDivideSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGCubeDivideSettings_Statics::ClassParams = {
	&UPCGCubeDivideSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGCubeDivideSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCubeDivideSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCubeDivideSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGCubeDivideSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGCubeDivideSettings()
{
	if (!Z_Registration_Info_UClass_UPCGCubeDivideSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGCubeDivideSettings.OuterSingleton, Z_Construct_UClass_UPCGCubeDivideSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGCubeDivideSettings.OuterSingleton;
}
template<> PCGASSET_API UClass* StaticClass<UPCGCubeDivideSettings>()
{
	return UPCGCubeDivideSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGCubeDivideSettings);
UPCGCubeDivideSettings::~UPCGCubeDivideSettings() {}
// End Class UPCGCubeDivideSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCubeDivide_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGCubeDivideSettings, UPCGCubeDivideSettings::StaticClass, TEXT("UPCGCubeDivideSettings"), &Z_Registration_Info_UClass_UPCGCubeDivideSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGCubeDivideSettings), 4048923129U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCubeDivide_h_3151675602(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCubeDivide_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCubeDivide_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
