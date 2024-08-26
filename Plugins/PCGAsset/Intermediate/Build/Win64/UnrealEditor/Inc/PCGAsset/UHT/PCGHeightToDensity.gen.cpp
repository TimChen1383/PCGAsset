// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGAsset/Public/PCGHeightToDensity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGHeightToDensity() {}

// Begin Cross Module References
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGHeightToDensitySettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGHeightToDensitySettings_NoRegister();
PCGASSET_API UEnum* Z_Construct_UEnum_PCGAsset_EPCGHeighttoDensityMode();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

// Begin Enum EPCGHeighttoDensityMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGHeighttoDensityMode;
static UEnum* EPCGHeighttoDensityMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGHeighttoDensityMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGHeighttoDensityMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGAsset_EPCGHeighttoDensityMode, (UObject*)Z_Construct_UPackage__Script_PCGAsset(), TEXT("EPCGHeighttoDensityMode"));
	}
	return Z_Registration_Info_UEnum_EPCGHeighttoDensityMode.OuterSingleton;
}
template<> PCGASSET_API UEnum* StaticEnum<EPCGHeighttoDensityMode>()
{
	return EPCGHeighttoDensityMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGAsset_EPCGHeighttoDensityMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bool.Name", "EPCGHeighttoDensityMode::Bool" },
		{ "Gradient.Name", "EPCGHeighttoDensityMode::Gradient" },
		{ "ModuleRelativePath", "Public/PCGHeightToDensity.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGHeighttoDensityMode::Bool", (int64)EPCGHeighttoDensityMode::Bool },
		{ "EPCGHeighttoDensityMode::Gradient", (int64)EPCGHeighttoDensityMode::Gradient },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGAsset_EPCGHeighttoDensityMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGAsset,
	nullptr,
	"EPCGHeighttoDensityMode",
	"EPCGHeighttoDensityMode",
	Z_Construct_UEnum_PCGAsset_EPCGHeighttoDensityMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGAsset_EPCGHeighttoDensityMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGAsset_EPCGHeighttoDensityMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGAsset_EPCGHeighttoDensityMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGAsset_EPCGHeighttoDensityMode()
{
	if (!Z_Registration_Info_UEnum_EPCGHeighttoDensityMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGHeighttoDensityMode.InnerSingleton, Z_Construct_UEnum_PCGAsset_EPCGHeighttoDensityMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGHeighttoDensityMode.InnerSingleton;
}
// End Enum EPCGHeighttoDensityMode

// Begin Class UPCGHeightToDensitySettings
void UPCGHeightToDensitySettings::StaticRegisterNativesUPCGHeightToDensitySettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGHeightToDensitySettings);
UClass* Z_Construct_UClass_UPCGHeightToDensitySettings_NoRegister()
{
	return UPCGHeightToDensitySettings::StaticClass();
}
struct Z_Construct_UClass_UPCGHeightToDensitySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGHeightToDensity.h" },
		{ "ModuleRelativePath", "Public/PCGHeightToDensity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*******************************************\n\x09Promote variables that will be shown in details panel\n\x09********************************************/" },
#endif
		{ "ModuleRelativePath", "Public/PCGHeightToDensity.h" },
		{ "PCG_Overridable", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Promote variables that will be shown in details panel" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightRangeMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGHeightToDensity.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightRangeMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGHeightToDensity.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightRangeMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightRangeMin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGHeightToDensitySettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGHeightToDensitySettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGHeightToDensitySettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGHeightToDensitySettings, Mode), Z_Construct_UEnum_PCGAsset_EPCGHeighttoDensityMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 386753950
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGHeightToDensitySettings_Statics::NewProp_HeightRangeMax = { "HeightRangeMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGHeightToDensitySettings, HeightRangeMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightRangeMax_MetaData), NewProp_HeightRangeMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGHeightToDensitySettings_Statics::NewProp_HeightRangeMin = { "HeightRangeMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGHeightToDensitySettings, HeightRangeMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightRangeMin_MetaData), NewProp_HeightRangeMin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGHeightToDensitySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGHeightToDensitySettings_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGHeightToDensitySettings_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGHeightToDensitySettings_Statics::NewProp_HeightRangeMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGHeightToDensitySettings_Statics::NewProp_HeightRangeMin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGHeightToDensitySettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCGHeightToDensitySettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGHeightToDensitySettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGHeightToDensitySettings_Statics::ClassParams = {
	&UPCGHeightToDensitySettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGHeightToDensitySettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGHeightToDensitySettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGHeightToDensitySettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGHeightToDensitySettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGHeightToDensitySettings()
{
	if (!Z_Registration_Info_UClass_UPCGHeightToDensitySettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGHeightToDensitySettings.OuterSingleton, Z_Construct_UClass_UPCGHeightToDensitySettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGHeightToDensitySettings.OuterSingleton;
}
template<> PCGASSET_API UClass* StaticClass<UPCGHeightToDensitySettings>()
{
	return UPCGHeightToDensitySettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGHeightToDensitySettings);
UPCGHeightToDensitySettings::~UPCGHeightToDensitySettings() {}
// End Class UPCGHeightToDensitySettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGHeightToDensity_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGHeighttoDensityMode_StaticEnum, TEXT("EPCGHeighttoDensityMode"), &Z_Registration_Info_UEnum_EPCGHeighttoDensityMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 386753950U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGHeightToDensitySettings, UPCGHeightToDensitySettings::StaticClass, TEXT("UPCGHeightToDensitySettings"), &Z_Registration_Info_UClass_UPCGHeightToDensitySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGHeightToDensitySettings), 2616865841U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGHeightToDensity_h_3146272864(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGHeightToDensity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGHeightToDensity_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGHeightToDensity_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGHeightToDensity_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
