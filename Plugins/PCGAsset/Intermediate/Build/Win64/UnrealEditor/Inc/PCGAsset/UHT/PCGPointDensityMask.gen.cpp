// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGAsset/Public/PCGPointDensityMask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGPointDensityMask() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGPointDensityMaskSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGPointDensityMaskSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

// Begin Class UPCGPointDensityMaskSettings
void UPCGPointDensityMaskSettings::StaticRegisterNativesUPCGPointDensityMaskSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGPointDensityMaskSettings);
UClass* Z_Construct_UClass_UPCGPointDensityMaskSettings_NoRegister()
{
	return UPCGPointDensityMaskSettings::StaticClass();
}
struct Z_Construct_UClass_UPCGPointDensityMaskSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGPointDensityMask.h" },
		{ "ModuleRelativePath", "Public/PCGPointDensityMask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceLength_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*******************************************\n\x09Promote variables that will be shown in details panel\n\x09********************************************///Control the Perlin noise height and scale\n" },
#endif
		{ "ModuleRelativePath", "Public/PCGPointDensityMask.h" },
		{ "PCG_Overridable", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Promote variables that will be shown in details panel\n******************************************//Control the Perlin noise height and scale" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvertMaskDensityValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPointDensityMask.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvertMask_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPointDensityMask.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskCenter_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPointDensityMask.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceLength;
	static void NewProp_InvertMaskDensityValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InvertMaskDensityValue;
	static void NewProp_InvertMask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InvertMask;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaskCenter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGPointDensityMaskSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGPointDensityMaskSettings_Statics::NewProp_DistanceLength = { "DistanceLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointDensityMaskSettings, DistanceLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceLength_MetaData), NewProp_DistanceLength_MetaData) };
void Z_Construct_UClass_UPCGPointDensityMaskSettings_Statics::NewProp_InvertMaskDensityValue_SetBit(void* Obj)
{
	((UPCGPointDensityMaskSettings*)Obj)->InvertMaskDensityValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGPointDensityMaskSettings_Statics::NewProp_InvertMaskDensityValue = { "InvertMaskDensityValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGPointDensityMaskSettings), &Z_Construct_UClass_UPCGPointDensityMaskSettings_Statics::NewProp_InvertMaskDensityValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvertMaskDensityValue_MetaData), NewProp_InvertMaskDensityValue_MetaData) };
void Z_Construct_UClass_UPCGPointDensityMaskSettings_Statics::NewProp_InvertMask_SetBit(void* Obj)
{
	((UPCGPointDensityMaskSettings*)Obj)->InvertMask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGPointDensityMaskSettings_Statics::NewProp_InvertMask = { "InvertMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGPointDensityMaskSettings), &Z_Construct_UClass_UPCGPointDensityMaskSettings_Statics::NewProp_InvertMask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvertMask_MetaData), NewProp_InvertMask_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGPointDensityMaskSettings_Statics::NewProp_MaskCenter = { "MaskCenter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointDensityMaskSettings, MaskCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskCenter_MetaData), NewProp_MaskCenter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGPointDensityMaskSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointDensityMaskSettings_Statics::NewProp_DistanceLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointDensityMaskSettings_Statics::NewProp_InvertMaskDensityValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointDensityMaskSettings_Statics::NewProp_InvertMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointDensityMaskSettings_Statics::NewProp_MaskCenter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointDensityMaskSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCGPointDensityMaskSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointDensityMaskSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGPointDensityMaskSettings_Statics::ClassParams = {
	&UPCGPointDensityMaskSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGPointDensityMaskSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointDensityMaskSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointDensityMaskSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGPointDensityMaskSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGPointDensityMaskSettings()
{
	if (!Z_Registration_Info_UClass_UPCGPointDensityMaskSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGPointDensityMaskSettings.OuterSingleton, Z_Construct_UClass_UPCGPointDensityMaskSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGPointDensityMaskSettings.OuterSingleton;
}
template<> PCGASSET_API UClass* StaticClass<UPCGPointDensityMaskSettings>()
{
	return UPCGPointDensityMaskSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGPointDensityMaskSettings);
UPCGPointDensityMaskSettings::~UPCGPointDensityMaskSettings() {}
// End Class UPCGPointDensityMaskSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPointDensityMask_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGPointDensityMaskSettings, UPCGPointDensityMaskSettings::StaticClass, TEXT("UPCGPointDensityMaskSettings"), &Z_Registration_Info_UClass_UPCGPointDensityMaskSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGPointDensityMaskSettings), 634568141U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPointDensityMask_h_1917657407(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPointDensityMask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPointDensityMask_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
