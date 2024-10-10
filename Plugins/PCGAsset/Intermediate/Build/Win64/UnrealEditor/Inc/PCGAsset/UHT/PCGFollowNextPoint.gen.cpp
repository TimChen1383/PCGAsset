// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGAsset/Public/PCGFollowNextPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGFollowNextPoint() {}

// Begin Cross Module References
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGFollowNextPointSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGFollowNextPointSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

// Begin Class UPCGFollowNextPointSettings
void UPCGFollowNextPointSettings::StaticRegisterNativesUPCGFollowNextPointSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGFollowNextPointSettings);
UClass* Z_Construct_UClass_UPCGFollowNextPointSettings_NoRegister()
{
	return UPCGFollowNextPointSettings::StaticClass();
}
struct Z_Construct_UClass_UPCGFollowNextPointSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGFollowNextPoint.h" },
		{ "ModuleRelativePath", "Public/PCGFollowNextPoint.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGFollowNextPointSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPCGFollowNextPointSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGFollowNextPointSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGFollowNextPointSettings_Statics::ClassParams = {
	&UPCGFollowNextPointSettings::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGFollowNextPointSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGFollowNextPointSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGFollowNextPointSettings()
{
	if (!Z_Registration_Info_UClass_UPCGFollowNextPointSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGFollowNextPointSettings.OuterSingleton, Z_Construct_UClass_UPCGFollowNextPointSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGFollowNextPointSettings.OuterSingleton;
}
template<> PCGASSET_API UClass* StaticClass<UPCGFollowNextPointSettings>()
{
	return UPCGFollowNextPointSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGFollowNextPointSettings);
UPCGFollowNextPointSettings::~UPCGFollowNextPointSettings() {}
// End Class UPCGFollowNextPointSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGFollowNextPoint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGFollowNextPointSettings, UPCGFollowNextPointSettings::StaticClass, TEXT("UPCGFollowNextPointSettings"), &Z_Registration_Info_UClass_UPCGFollowNextPointSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGFollowNextPointSettings), 1772937895U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGFollowNextPoint_h_4113486205(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGFollowNextPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGFollowNextPoint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
