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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomOffset_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*******************************************\n\x09Promote variables that will be shown in details panel\n\x09********************************************///Control the Perlin noise height and scale\n" },
#endif
		{ "ModuleRelativePath", "Public/PCGFollowNextPoint.h" },
		{ "PCG_Overridable", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Promote variables that will be shown in details panel\n******************************************//Control the Perlin noise height and scale" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGFollowNextPointSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGFollowNextPointSettings_Statics::NewProp_CustomOffset = { "CustomOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGFollowNextPointSettings, CustomOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomOffset_MetaData), NewProp_CustomOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGFollowNextPointSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGFollowNextPointSettings_Statics::NewProp_CustomOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGFollowNextPointSettings_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_UPCGFollowNextPointSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGFollowNextPointSettings_Statics::PropPointers),
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
		{ Z_Construct_UClass_UPCGFollowNextPointSettings, UPCGFollowNextPointSettings::StaticClass, TEXT("UPCGFollowNextPointSettings"), &Z_Registration_Info_UClass_UPCGFollowNextPointSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGFollowNextPointSettings), 797796031U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGFollowNextPoint_h_1030578178(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGFollowNextPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGFollowNextPoint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
