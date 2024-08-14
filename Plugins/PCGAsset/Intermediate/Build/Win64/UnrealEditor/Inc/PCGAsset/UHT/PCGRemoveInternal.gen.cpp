// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGAsset/Public/PCGRemoveInternal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGRemoveInternal() {}

// Begin Cross Module References
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGRemoveInternalSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGRemoveInternalSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

// Begin Class UPCGRemoveInternalSettings
void UPCGRemoveInternalSettings::StaticRegisterNativesUPCGRemoveInternalSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGRemoveInternalSettings);
UClass* Z_Construct_UClass_UPCGRemoveInternalSettings_NoRegister()
{
	return UPCGRemoveInternalSettings::StaticClass();
}
struct Z_Construct_UClass_UPCGRemoveInternalSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGRemoveInternal.h" },
		{ "ModuleRelativePath", "Public/PCGRemoveInternal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchDistance_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*******************************************\n\x09Promote variables that will be shown in details panel\n\x09********************************************///Control the Perlin noise height and scale\n" },
#endif
		{ "ModuleRelativePath", "Public/PCGRemoveInternal.h" },
		{ "PCG_Overridable", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Promote variables that will be shown in details panel\n******************************************//Control the Perlin noise height and scale" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoveThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGRemoveInternal.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemoveThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGRemoveInternalSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGRemoveInternalSettings_Statics::NewProp_SearchDistance = { "SearchDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGRemoveInternalSettings, SearchDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchDistance_MetaData), NewProp_SearchDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGRemoveInternalSettings_Statics::NewProp_RemoveThreshold = { "RemoveThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGRemoveInternalSettings, RemoveThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoveThreshold_MetaData), NewProp_RemoveThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGRemoveInternalSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGRemoveInternalSettings_Statics::NewProp_SearchDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGRemoveInternalSettings_Statics::NewProp_RemoveThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGRemoveInternalSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCGRemoveInternalSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGRemoveInternalSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGRemoveInternalSettings_Statics::ClassParams = {
	&UPCGRemoveInternalSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGRemoveInternalSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGRemoveInternalSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGRemoveInternalSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGRemoveInternalSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGRemoveInternalSettings()
{
	if (!Z_Registration_Info_UClass_UPCGRemoveInternalSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGRemoveInternalSettings.OuterSingleton, Z_Construct_UClass_UPCGRemoveInternalSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGRemoveInternalSettings.OuterSingleton;
}
template<> PCGASSET_API UClass* StaticClass<UPCGRemoveInternalSettings>()
{
	return UPCGRemoveInternalSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGRemoveInternalSettings);
UPCGRemoveInternalSettings::~UPCGRemoveInternalSettings() {}
// End Class UPCGRemoveInternalSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRemoveInternal_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGRemoveInternalSettings, UPCGRemoveInternalSettings::StaticClass, TEXT("UPCGRemoveInternalSettings"), &Z_Registration_Info_UClass_UPCGRemoveInternalSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGRemoveInternalSettings), 1431186974U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRemoveInternal_h_3718954807(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRemoveInternal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRemoveInternal_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
