// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGAsset/Public/PCGCreateSpiralSpline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGCreateSpiralSpline() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGCreateSpiralSplineSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGCreateSpiralSplineSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

// Begin Class UPCGCreateSpiralSplineSettings
void UPCGCreateSpiralSplineSettings::StaticRegisterNativesUPCGCreateSpiralSplineSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGCreateSpiralSplineSettings);
UClass* Z_Construct_UClass_UPCGCreateSpiralSplineSettings_NoRegister()
{
	return UPCGCreateSpiralSplineSettings::StaticClass();
}
struct Z_Construct_UClass_UPCGCreateSpiralSplineSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGCreateSpiralSpline.h" },
		{ "ModuleRelativePath", "Public/PCGCreateSpiralSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncrementZOffset_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*******************************************\n\x09Promote variables that will be shown in details panel\n\x09********************************************///Control the Perlin noise height and scale\n" },
#endif
		{ "ModuleRelativePath", "Public/PCGCreateSpiralSpline.h" },
		{ "PCG_Overridable", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Promote variables that will be shown in details panel\n******************************************//Control the Perlin noise height and scale" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncrementDegree_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGCreateSpiralSpline.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CircleRadius_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGCreateSpiralSpline.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CirclePointCounts_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGCreateSpiralSpline.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_IncrementZOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IncrementDegree;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CircleRadius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CirclePointCounts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGCreateSpiralSplineSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGCreateSpiralSplineSettings_Statics::NewProp_IncrementZOffset = { "IncrementZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCreateSpiralSplineSettings, IncrementZOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncrementZOffset_MetaData), NewProp_IncrementZOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGCreateSpiralSplineSettings_Statics::NewProp_IncrementDegree = { "IncrementDegree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCreateSpiralSplineSettings, IncrementDegree), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncrementDegree_MetaData), NewProp_IncrementDegree_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGCreateSpiralSplineSettings_Statics::NewProp_CircleRadius = { "CircleRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCreateSpiralSplineSettings, CircleRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CircleRadius_MetaData), NewProp_CircleRadius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGCreateSpiralSplineSettings_Statics::NewProp_CirclePointCounts = { "CirclePointCounts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCreateSpiralSplineSettings, CirclePointCounts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CirclePointCounts_MetaData), NewProp_CirclePointCounts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGCreateSpiralSplineSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateSpiralSplineSettings_Statics::NewProp_IncrementZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateSpiralSplineSettings_Statics::NewProp_IncrementDegree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateSpiralSplineSettings_Statics::NewProp_CircleRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateSpiralSplineSettings_Statics::NewProp_CirclePointCounts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateSpiralSplineSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCGCreateSpiralSplineSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateSpiralSplineSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGCreateSpiralSplineSettings_Statics::ClassParams = {
	&UPCGCreateSpiralSplineSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGCreateSpiralSplineSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateSpiralSplineSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateSpiralSplineSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGCreateSpiralSplineSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGCreateSpiralSplineSettings()
{
	if (!Z_Registration_Info_UClass_UPCGCreateSpiralSplineSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGCreateSpiralSplineSettings.OuterSingleton, Z_Construct_UClass_UPCGCreateSpiralSplineSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGCreateSpiralSplineSettings.OuterSingleton;
}
template<> PCGASSET_API UClass* StaticClass<UPCGCreateSpiralSplineSettings>()
{
	return UPCGCreateSpiralSplineSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGCreateSpiralSplineSettings);
UPCGCreateSpiralSplineSettings::~UPCGCreateSpiralSplineSettings() {}
// End Class UPCGCreateSpiralSplineSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateSpiralSpline_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGCreateSpiralSplineSettings, UPCGCreateSpiralSplineSettings::StaticClass, TEXT("UPCGCreateSpiralSplineSettings"), &Z_Registration_Info_UClass_UPCGCreateSpiralSplineSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGCreateSpiralSplineSettings), 600918484U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateSpiralSpline_h_2252669088(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateSpiralSpline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateSpiralSpline_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
