// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGAsset/Public/PCGEmitPoints.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGEmitPoints() {}

// Begin Cross Module References
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGEmitPointsSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGEmitPointsSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

// Begin Class UPCGEmitPointsSettings
void UPCGEmitPointsSettings::StaticRegisterNativesUPCGEmitPointsSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGEmitPointsSettings);
UClass* Z_Construct_UClass_UPCGEmitPointsSettings_NoRegister()
{
	return UPCGEmitPointsSettings::StaticClass();
}
struct Z_Construct_UClass_UPCGEmitPointsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGEmitPoints.h" },
		{ "ModuleRelativePath", "Public/PCGEmitPoints.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitSeconds_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*******************************************\n\x09Promote variables that will be shown in details panel\n\x09********************************************///I think this can be float - more accurate\n" },
#endif
		{ "ModuleRelativePath", "Public/PCGEmitPoints.h" },
		{ "PCG_Overridable", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Promote variables that will be shown in details panel\n******************************************//I think this can be float - more accurate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitVelocity_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGEmitPoints.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGEmitPoints.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EmitSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EmitVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Gravity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGEmitPointsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGEmitPointsSettings_Statics::NewProp_EmitSeconds = { "EmitSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGEmitPointsSettings, EmitSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitSeconds_MetaData), NewProp_EmitSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGEmitPointsSettings_Statics::NewProp_EmitVelocity = { "EmitVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGEmitPointsSettings, EmitVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitVelocity_MetaData), NewProp_EmitVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGEmitPointsSettings_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGEmitPointsSettings, Gravity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gravity_MetaData), NewProp_Gravity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGEmitPointsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGEmitPointsSettings_Statics::NewProp_EmitSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGEmitPointsSettings_Statics::NewProp_EmitVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGEmitPointsSettings_Statics::NewProp_Gravity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGEmitPointsSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCGEmitPointsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGEmitPointsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGEmitPointsSettings_Statics::ClassParams = {
	&UPCGEmitPointsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGEmitPointsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGEmitPointsSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGEmitPointsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGEmitPointsSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGEmitPointsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGEmitPointsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGEmitPointsSettings.OuterSingleton, Z_Construct_UClass_UPCGEmitPointsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGEmitPointsSettings.OuterSingleton;
}
template<> PCGASSET_API UClass* StaticClass<UPCGEmitPointsSettings>()
{
	return UPCGEmitPointsSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGEmitPointsSettings);
UPCGEmitPointsSettings::~UPCGEmitPointsSettings() {}
// End Class UPCGEmitPointsSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGEmitPoints_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGEmitPointsSettings, UPCGEmitPointsSettings::StaticClass, TEXT("UPCGEmitPointsSettings"), &Z_Registration_Info_UClass_UPCGEmitPointsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGEmitPointsSettings), 258290548U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGEmitPoints_h_3042869391(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGEmitPoints_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGEmitPoints_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
