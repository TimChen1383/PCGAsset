// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGAsset/Public/PCGRotateAroundCenter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGRotateAroundCenter() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGRotateAroundCenterSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGRotateAroundCenterSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

// Begin Class UPCGRotateAroundCenterSettings
void UPCGRotateAroundCenterSettings::StaticRegisterNativesUPCGRotateAroundCenterSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGRotateAroundCenterSettings);
UClass* Z_Construct_UClass_UPCGRotateAroundCenterSettings_NoRegister()
{
	return UPCGRotateAroundCenterSettings::StaticClass();
}
struct Z_Construct_UClass_UPCGRotateAroundCenterSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGRotateAroundCenter.h" },
		{ "ModuleRelativePath", "Public/PCGRotateAroundCenter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterLocation_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*******************************************\n\x09Promote variables that will be shown in details panel\n\x09********************************************///Control the Perlin noise height and scale\n" },
#endif
		{ "ModuleRelativePath", "Public/PCGRotateAroundCenter.h" },
		{ "PCG_Overridable", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Promote variables that will be shown in details panel\n******************************************//Control the Perlin noise height and scale" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateDegree_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGRotateAroundCenter.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CenterLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateDegree;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGRotateAroundCenterSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGRotateAroundCenterSettings_Statics::NewProp_CenterLocation = { "CenterLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGRotateAroundCenterSettings, CenterLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterLocation_MetaData), NewProp_CenterLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGRotateAroundCenterSettings_Statics::NewProp_RotateDegree = { "RotateDegree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGRotateAroundCenterSettings, RotateDegree), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateDegree_MetaData), NewProp_RotateDegree_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGRotateAroundCenterSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGRotateAroundCenterSettings_Statics::NewProp_CenterLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGRotateAroundCenterSettings_Statics::NewProp_RotateDegree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGRotateAroundCenterSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCGRotateAroundCenterSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGRotateAroundCenterSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGRotateAroundCenterSettings_Statics::ClassParams = {
	&UPCGRotateAroundCenterSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGRotateAroundCenterSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGRotateAroundCenterSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGRotateAroundCenterSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGRotateAroundCenterSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGRotateAroundCenterSettings()
{
	if (!Z_Registration_Info_UClass_UPCGRotateAroundCenterSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGRotateAroundCenterSettings.OuterSingleton, Z_Construct_UClass_UPCGRotateAroundCenterSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGRotateAroundCenterSettings.OuterSingleton;
}
template<> PCGASSET_API UClass* StaticClass<UPCGRotateAroundCenterSettings>()
{
	return UPCGRotateAroundCenterSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGRotateAroundCenterSettings);
UPCGRotateAroundCenterSettings::~UPCGRotateAroundCenterSettings() {}
// End Class UPCGRotateAroundCenterSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRotateAroundCenter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGRotateAroundCenterSettings, UPCGRotateAroundCenterSettings::StaticClass, TEXT("UPCGRotateAroundCenterSettings"), &Z_Registration_Info_UClass_UPCGRotateAroundCenterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGRotateAroundCenterSettings), 745542526U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRotateAroundCenter_h_2929831890(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRotateAroundCenter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRotateAroundCenter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
