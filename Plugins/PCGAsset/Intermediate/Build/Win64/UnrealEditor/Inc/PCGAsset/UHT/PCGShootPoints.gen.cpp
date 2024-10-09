// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGAsset/Public/PCGShootPoints.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGShootPoints() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGShootPointsSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGShootPointsSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

// Begin Class UPCGShootPointsSettings
void UPCGShootPointsSettings::StaticRegisterNativesUPCGShootPointsSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGShootPointsSettings);
UClass* Z_Construct_UClass_UPCGShootPointsSettings_NoRegister()
{
	return UPCGShootPointsSettings::StaticClass();
}
struct Z_Construct_UClass_UPCGShootPointsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGShootPoints.h" },
		{ "ModuleRelativePath", "Public/PCGShootPoints.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootSeconds_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*******************************************\n\x09Promote variables that will be shown in details panel\n\x09********************************************/" },
#endif
		{ "ModuleRelativePath", "Public/PCGShootPoints.h" },
		{ "PCG_Overridable", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Promote variables that will be shown in details panel" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGShootPoints.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootGravity_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGShootPoints.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShootSeconds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShootDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShootGravity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGShootPointsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGShootPointsSettings_Statics::NewProp_ShootSeconds = { "ShootSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGShootPointsSettings, ShootSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootSeconds_MetaData), NewProp_ShootSeconds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGShootPointsSettings_Statics::NewProp_ShootDirection = { "ShootDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGShootPointsSettings, ShootDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootDirection_MetaData), NewProp_ShootDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGShootPointsSettings_Statics::NewProp_ShootGravity = { "ShootGravity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGShootPointsSettings, ShootGravity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootGravity_MetaData), NewProp_ShootGravity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGShootPointsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGShootPointsSettings_Statics::NewProp_ShootSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGShootPointsSettings_Statics::NewProp_ShootDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGShootPointsSettings_Statics::NewProp_ShootGravity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGShootPointsSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCGShootPointsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGShootPointsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGShootPointsSettings_Statics::ClassParams = {
	&UPCGShootPointsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGShootPointsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGShootPointsSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGShootPointsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGShootPointsSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGShootPointsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGShootPointsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGShootPointsSettings.OuterSingleton, Z_Construct_UClass_UPCGShootPointsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGShootPointsSettings.OuterSingleton;
}
template<> PCGASSET_API UClass* StaticClass<UPCGShootPointsSettings>()
{
	return UPCGShootPointsSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGShootPointsSettings);
UPCGShootPointsSettings::~UPCGShootPointsSettings() {}
// End Class UPCGShootPointsSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGShootPoints_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGShootPointsSettings, UPCGShootPointsSettings::StaticClass, TEXT("UPCGShootPointsSettings"), &Z_Registration_Info_UClass_UPCGShootPointsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGShootPointsSettings), 4242294862U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGShootPoints_h_133116769(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGShootPoints_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGShootPoints_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
