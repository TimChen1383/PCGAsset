// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGAsset/Public/PCGOctree.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGOctree() {}

// Begin Cross Module References
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGOctreeSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGOctreeSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

// Begin Class UPCGOctreeSettings
void UPCGOctreeSettings::StaticRegisterNativesUPCGOctreeSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGOctreeSettings);
UClass* Z_Construct_UClass_UPCGOctreeSettings_NoRegister()
{
	return UPCGOctreeSettings::StaticClass();
}
struct Z_Construct_UClass_UPCGOctreeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGOctree.h" },
		{ "ModuleRelativePath", "Public/PCGOctree.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPointCounts_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*******************************************\n\x09Promote variables that will be shown in details panel\n\x09********************************************///Control the Perlin noise height and scale\n" },
#endif
		{ "ModuleRelativePath", "Public/PCGOctree.h" },
		{ "PCG_Overridable", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Promote variables that will be shown in details panel\n******************************************//Control the Perlin noise height and scale" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGOctree.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedPointCounts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGOctreeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGOctreeSettings_Statics::NewProp_SelectedPointCounts = { "SelectedPointCounts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGOctreeSettings, SelectedPointCounts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedPointCounts_MetaData), NewProp_SelectedPointCounts_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGOctreeSettings_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGOctreeSettings, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGOctreeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGOctreeSettings_Statics::NewProp_SelectedPointCounts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGOctreeSettings_Statics::NewProp_RandomSeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGOctreeSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCGOctreeSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGOctreeSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGOctreeSettings_Statics::ClassParams = {
	&UPCGOctreeSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGOctreeSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGOctreeSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGOctreeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGOctreeSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGOctreeSettings()
{
	if (!Z_Registration_Info_UClass_UPCGOctreeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGOctreeSettings.OuterSingleton, Z_Construct_UClass_UPCGOctreeSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGOctreeSettings.OuterSingleton;
}
template<> PCGASSET_API UClass* StaticClass<UPCGOctreeSettings>()
{
	return UPCGOctreeSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGOctreeSettings);
UPCGOctreeSettings::~UPCGOctreeSettings() {}
// End Class UPCGOctreeSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGOctree_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGOctreeSettings, UPCGOctreeSettings::StaticClass, TEXT("UPCGOctreeSettings"), &Z_Registration_Info_UClass_UPCGOctreeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGOctreeSettings), 3496785968U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGOctree_h_1365117878(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGOctree_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGOctree_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
