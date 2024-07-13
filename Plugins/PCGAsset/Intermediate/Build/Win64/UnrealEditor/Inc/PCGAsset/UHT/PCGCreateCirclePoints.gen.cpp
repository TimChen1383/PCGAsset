// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGAsset/Public/PCGCreateCirclePoints.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGCreateCirclePoints() {}

// Begin Cross Module References
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGCreateCircleSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGCreateCircleSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

// Begin Class UPCGCreateCircleSettings
void UPCGCreateCircleSettings::StaticRegisterNativesUPCGCreateCircleSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGCreateCircleSettings);
UClass* Z_Construct_UClass_UPCGCreateCircleSettings_NoRegister()
{
	return UPCGCreateCircleSettings::StaticClass();
}
struct Z_Construct_UClass_UPCGCreateCircleSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PCGCreateCirclePoints.h" },
		{ "ModuleRelativePath", "Public/PCGCreateCirclePoints.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CircleDegree_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*******************************************\n Promote variables that will be shown in details panel\n ********************************************///Control the Perlin noise height and scale\n" },
#endif
		{ "ModuleRelativePath", "Public/PCGCreateCirclePoints.h" },
		{ "PCG_Overridable", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Promote variables that will be shown in details panel\n******************************************//Control the Perlin noise height and scale" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CirclePointCounts_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGCreateCirclePoints.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CircleRadius_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGCreateCirclePoints.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SineFrequency_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGCreateCirclePoints.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SineAltitude_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGCreateCirclePoints.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_CircleDegree;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_CirclePointCounts;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CircleRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SineFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SineAltitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGCreateCircleSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UPCGCreateCircleSettings_Statics::NewProp_CircleDegree = { "CircleDegree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCreateCircleSettings, CircleDegree), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CircleDegree_MetaData), NewProp_CircleDegree_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UPCGCreateCircleSettings_Statics::NewProp_CirclePointCounts = { "CirclePointCounts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCreateCircleSettings, CirclePointCounts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CirclePointCounts_MetaData), NewProp_CirclePointCounts_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGCreateCircleSettings_Statics::NewProp_CircleRadius = { "CircleRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCreateCircleSettings, CircleRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CircleRadius_MetaData), NewProp_CircleRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGCreateCircleSettings_Statics::NewProp_SineFrequency = { "SineFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCreateCircleSettings, SineFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SineFrequency_MetaData), NewProp_SineFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGCreateCircleSettings_Statics::NewProp_SineAltitude = { "SineAltitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCreateCircleSettings, SineAltitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SineAltitude_MetaData), NewProp_SineAltitude_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGCreateCircleSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateCircleSettings_Statics::NewProp_CircleDegree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateCircleSettings_Statics::NewProp_CirclePointCounts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateCircleSettings_Statics::NewProp_CircleRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateCircleSettings_Statics::NewProp_SineFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateCircleSettings_Statics::NewProp_SineAltitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateCircleSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCGCreateCircleSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateCircleSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGCreateCircleSettings_Statics::ClassParams = {
	&UPCGCreateCircleSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGCreateCircleSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateCircleSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateCircleSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGCreateCircleSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGCreateCircleSettings()
{
	if (!Z_Registration_Info_UClass_UPCGCreateCircleSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGCreateCircleSettings.OuterSingleton, Z_Construct_UClass_UPCGCreateCircleSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGCreateCircleSettings.OuterSingleton;
}
template<> PCGASSET_API UClass* StaticClass<UPCGCreateCircleSettings>()
{
	return UPCGCreateCircleSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGCreateCircleSettings);
UPCGCreateCircleSettings::~UPCGCreateCircleSettings() {}
// End Class UPCGCreateCircleSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCirclePoints_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGCreateCircleSettings, UPCGCreateCircleSettings::StaticClass, TEXT("UPCGCreateCircleSettings"), &Z_Registration_Info_UClass_UPCGCreateCircleSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGCreateCircleSettings), 931634245U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCirclePoints_h_4149408035(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCirclePoints_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCirclePoints_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
