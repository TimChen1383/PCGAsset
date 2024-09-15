// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGAsset/Public/PCGRandomWalker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGRandomWalker() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGRandomWalkerSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGRandomWalkerSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

// Begin Class UPCGRandomWalkerSettings
void UPCGRandomWalkerSettings::StaticRegisterNativesUPCGRandomWalkerSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGRandomWalkerSettings);
UClass* Z_Construct_UClass_UPCGRandomWalkerSettings_NoRegister()
{
	return UPCGRandomWalkerSettings::StaticClass();
}
struct Z_Construct_UClass_UPCGRandomWalkerSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGRandomWalker.h" },
		{ "ModuleRelativePath", "Public/PCGRandomWalker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomOffset_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*******************************************\n\x09Promote variables that will be shown in details panel\n\x09********************************************///Control the Perlin noise height and scale\n" },
#endif
		{ "ModuleRelativePath", "Public/PCGRandomWalker.h" },
		{ "PCG_Overridable", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Promote variables that will be shown in details panel\n******************************************//Control the Perlin noise height and scale" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkCounts_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGRandomWalker.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkStepSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGRandomWalker.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WalkCounts;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkStepSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGRandomWalkerSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGRandomWalkerSettings_Statics::NewProp_CustomOffset = { "CustomOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGRandomWalkerSettings, CustomOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomOffset_MetaData), NewProp_CustomOffset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGRandomWalkerSettings_Statics::NewProp_WalkCounts = { "WalkCounts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGRandomWalkerSettings, WalkCounts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkCounts_MetaData), NewProp_WalkCounts_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGRandomWalkerSettings_Statics::NewProp_WalkStepSize = { "WalkStepSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGRandomWalkerSettings, WalkStepSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkStepSize_MetaData), NewProp_WalkStepSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGRandomWalkerSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGRandomWalkerSettings_Statics::NewProp_CustomOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGRandomWalkerSettings_Statics::NewProp_WalkCounts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGRandomWalkerSettings_Statics::NewProp_WalkStepSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGRandomWalkerSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCGRandomWalkerSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGRandomWalkerSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGRandomWalkerSettings_Statics::ClassParams = {
	&UPCGRandomWalkerSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGRandomWalkerSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGRandomWalkerSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGRandomWalkerSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGRandomWalkerSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGRandomWalkerSettings()
{
	if (!Z_Registration_Info_UClass_UPCGRandomWalkerSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGRandomWalkerSettings.OuterSingleton, Z_Construct_UClass_UPCGRandomWalkerSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGRandomWalkerSettings.OuterSingleton;
}
template<> PCGASSET_API UClass* StaticClass<UPCGRandomWalkerSettings>()
{
	return UPCGRandomWalkerSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGRandomWalkerSettings);
UPCGRandomWalkerSettings::~UPCGRandomWalkerSettings() {}
// End Class UPCGRandomWalkerSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRandomWalker_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGRandomWalkerSettings, UPCGRandomWalkerSettings::StaticClass, TEXT("UPCGRandomWalkerSettings"), &Z_Registration_Info_UClass_UPCGRandomWalkerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGRandomWalkerSettings), 3325899013U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRandomWalker_h_168672301(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRandomWalker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRandomWalker_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
