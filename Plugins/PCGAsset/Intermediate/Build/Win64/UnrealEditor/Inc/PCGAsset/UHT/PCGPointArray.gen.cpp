// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGAsset/Public/PCGPointArray.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGPointArray() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGPointArraySettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGPointArraySettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

// Begin Class UPCGPointArraySettings
void UPCGPointArraySettings::StaticRegisterNativesUPCGPointArraySettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGPointArraySettings);
UClass* Z_Construct_UClass_UPCGPointArraySettings_NoRegister()
{
	return UPCGPointArraySettings::StaticClass();
}
struct Z_Construct_UClass_UPCGPointArraySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGPointArray.h" },
		{ "ModuleRelativePath", "Public/PCGPointArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DuplicateCounts_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*******************************************\n\x09Promote variables that will be shown in details panel\n\x09********************************************/" },
#endif
		{ "ModuleRelativePath", "Public/PCGPointArray.h" },
		{ "PCG_Overridable", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Promote variables that will be shown in details panel" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPointArray.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPointArray.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllPointsRotationDegree_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPointArray.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectRollOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPointArray.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPitchOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPointArray.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectYawOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPointArray.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DuplicateCounts;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ZOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AllPointsRotationDegree;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObjectRollOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObjectPitchOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObjectYawOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGPointArraySettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_DuplicateCounts = { "DuplicateCounts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointArraySettings, DuplicateCounts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DuplicateCounts_MetaData), NewProp_DuplicateCounts_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointArraySettings, ZOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOffset_MetaData), NewProp_ZOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_ScaleOffset = { "ScaleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointArraySettings, ScaleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleOffset_MetaData), NewProp_ScaleOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_AllPointsRotationDegree = { "AllPointsRotationDegree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointArraySettings, AllPointsRotationDegree), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllPointsRotationDegree_MetaData), NewProp_AllPointsRotationDegree_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_ObjectRollOffset = { "ObjectRollOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointArraySettings, ObjectRollOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectRollOffset_MetaData), NewProp_ObjectRollOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_ObjectPitchOffset = { "ObjectPitchOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointArraySettings, ObjectPitchOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectPitchOffset_MetaData), NewProp_ObjectPitchOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_ObjectYawOffset = { "ObjectYawOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointArraySettings, ObjectYawOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectYawOffset_MetaData), NewProp_ObjectYawOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGPointArraySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_DuplicateCounts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_ZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_ScaleOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_AllPointsRotationDegree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_ObjectRollOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_ObjectPitchOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_ObjectYawOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointArraySettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCGPointArraySettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointArraySettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGPointArraySettings_Statics::ClassParams = {
	&UPCGPointArraySettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGPointArraySettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointArraySettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointArraySettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGPointArraySettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGPointArraySettings()
{
	if (!Z_Registration_Info_UClass_UPCGPointArraySettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGPointArraySettings.OuterSingleton, Z_Construct_UClass_UPCGPointArraySettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGPointArraySettings.OuterSingleton;
}
template<> PCGASSET_API UClass* StaticClass<UPCGPointArraySettings>()
{
	return UPCGPointArraySettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGPointArraySettings);
UPCGPointArraySettings::~UPCGPointArraySettings() {}
// End Class UPCGPointArraySettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPointArray_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGPointArraySettings, UPCGPointArraySettings::StaticClass, TEXT("UPCGPointArraySettings"), &Z_Registration_Info_UClass_UPCGPointArraySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGPointArraySettings), 3820911463U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPointArray_h_2872642939(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPointArray_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPointArray_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
