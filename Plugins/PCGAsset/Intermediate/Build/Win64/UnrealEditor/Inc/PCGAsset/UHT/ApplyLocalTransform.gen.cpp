// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGAsset/Public/ApplyLocalTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApplyLocalTransform() {}

// Begin Cross Module References
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGApplyLocalTransformSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGApplyLocalTransformSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

// Begin Class UPCGApplyLocalTransformSettings
void UPCGApplyLocalTransformSettings::StaticRegisterNativesUPCGApplyLocalTransformSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGApplyLocalTransformSettings);
UClass* Z_Construct_UClass_UPCGApplyLocalTransformSettings_NoRegister()
{
	return UPCGApplyLocalTransformSettings::StaticClass();
}
struct Z_Construct_UClass_UPCGApplyLocalTransformSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ApplyLocalTransform.h" },
		{ "ModuleRelativePath", "Public/ApplyLocalTransform.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGApplyLocalTransformSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPCGApplyLocalTransformSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGApplyLocalTransformSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGApplyLocalTransformSettings_Statics::ClassParams = {
	&UPCGApplyLocalTransformSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGApplyLocalTransformSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGApplyLocalTransformSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGApplyLocalTransformSettings()
{
	if (!Z_Registration_Info_UClass_UPCGApplyLocalTransformSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGApplyLocalTransformSettings.OuterSingleton, Z_Construct_UClass_UPCGApplyLocalTransformSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGApplyLocalTransformSettings.OuterSingleton;
}
template<> PCGASSET_API UClass* StaticClass<UPCGApplyLocalTransformSettings>()
{
	return UPCGApplyLocalTransformSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGApplyLocalTransformSettings);
UPCGApplyLocalTransformSettings::~UPCGApplyLocalTransformSettings() {}
// End Class UPCGApplyLocalTransformSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_ApplyLocalTransform_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGApplyLocalTransformSettings, UPCGApplyLocalTransformSettings::StaticClass, TEXT("UPCGApplyLocalTransformSettings"), &Z_Registration_Info_UClass_UPCGApplyLocalTransformSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGApplyLocalTransformSettings), 3681784305U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_ApplyLocalTransform_h_821668095(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_ApplyLocalTransform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_ApplyLocalTransform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
