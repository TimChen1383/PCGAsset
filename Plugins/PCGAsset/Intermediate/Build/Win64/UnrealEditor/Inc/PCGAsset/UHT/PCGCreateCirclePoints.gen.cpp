// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGAsset/Public/PCGCreateCirclePoints.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGCreateCirclePoints() {}

// Begin Cross Module References
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGCreateCircleSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGCreateCircleSettings_NoRegister();
PCGASSET_API UEnum* Z_Construct_UEnum_PCGAsset_EPCGCreateCirclePointsMode();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

// Begin Enum EPCGCreateCirclePointsMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGCreateCirclePointsMode;
static UEnum* EPCGCreateCirclePointsMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGCreateCirclePointsMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGCreateCirclePointsMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGAsset_EPCGCreateCirclePointsMode, (UObject*)Z_Construct_UPackage__Script_PCGAsset(), TEXT("EPCGCreateCirclePointsMode"));
	}
	return Z_Registration_Info_UEnum_EPCGCreateCirclePointsMode.OuterSingleton;
}
template<> PCGASSET_API UEnum* StaticEnum<EPCGCreateCirclePointsMode>()
{
	return EPCGCreateCirclePointsMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGAsset_EPCGCreateCirclePointsMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Inward.Name", "EPCGCreateCirclePointsMode::Inward" },
		{ "ModuleRelativePath", "Public/PCGCreateCirclePoints.h" },
		{ "Outward.Name", "EPCGCreateCirclePointsMode::Outward" },
		{ "TangentA.Name", "EPCGCreateCirclePointsMode::TangentA" },
		{ "TangentB.Name", "EPCGCreateCirclePointsMode::TangentB" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGCreateCirclePointsMode::Inward", (int64)EPCGCreateCirclePointsMode::Inward },
		{ "EPCGCreateCirclePointsMode::Outward", (int64)EPCGCreateCirclePointsMode::Outward },
		{ "EPCGCreateCirclePointsMode::TangentA", (int64)EPCGCreateCirclePointsMode::TangentA },
		{ "EPCGCreateCirclePointsMode::TangentB", (int64)EPCGCreateCirclePointsMode::TangentB },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGAsset_EPCGCreateCirclePointsMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGAsset,
	nullptr,
	"EPCGCreateCirclePointsMode",
	"EPCGCreateCirclePointsMode",
	Z_Construct_UEnum_PCGAsset_EPCGCreateCirclePointsMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGAsset_EPCGCreateCirclePointsMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGAsset_EPCGCreateCirclePointsMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGAsset_EPCGCreateCirclePointsMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGAsset_EPCGCreateCirclePointsMode()
{
	if (!Z_Registration_Info_UEnum_EPCGCreateCirclePointsMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGCreateCirclePointsMode.InnerSingleton, Z_Construct_UEnum_PCGAsset_EPCGCreateCirclePointsMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGCreateCirclePointsMode.InnerSingleton;
}
// End Enum EPCGCreateCirclePointsMode

// Begin Class UPCGCreateCircleSettings
void UPCGCreateCircleSettings::StaticRegisterNativesUPCGCreateCircleSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGCreateCircleSettings);
UClass* Z_Construct_UClass_UPCGCreateCircleSettings_NoRegister()
{
	return UPCGCreateCircleSettings::StaticClass();
}
struct Z_Construct_UClass_UPCGCreateCircleSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGCreateCirclePoints.h" },
		{ "ModuleRelativePath", "Public/PCGCreateCirclePoints.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CircleDegree_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*******************************************\n Promote variables that will be shown in details panel\n ********************************************///Control the Perlin noise height and scale\n" },
#endif
		{ "ModuleRelativePath", "Public/PCGCreateCirclePoints.h" },
		{ "PCG_Overridable", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Promote variables that will be shown in details panel\n******************************************//Control the Perlin noise height and scale" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CirclePointCounts_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGCreateCirclePoints.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CircleRadius_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGCreateCirclePoints.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SineFrequency_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGCreateCirclePoints.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SineAltitude_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGCreateCirclePoints.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FacingDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGCreateCirclePoints.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_CircleDegree;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_CirclePointCounts;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CircleRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SineFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SineAltitude;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FacingDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FacingDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGCreateCircleSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UPCGCreateCircleSettings_Statics::NewProp_CircleDegree = { "CircleDegree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCreateCircleSettings, CircleDegree), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CircleDegree_MetaData), NewProp_CircleDegree_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UPCGCreateCircleSettings_Statics::NewProp_CirclePointCounts = { "CirclePointCounts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCreateCircleSettings, CirclePointCounts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CirclePointCounts_MetaData), NewProp_CirclePointCounts_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGCreateCircleSettings_Statics::NewProp_CircleRadius = { "CircleRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCreateCircleSettings, CircleRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CircleRadius_MetaData), NewProp_CircleRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGCreateCircleSettings_Statics::NewProp_SineFrequency = { "SineFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCreateCircleSettings, SineFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SineFrequency_MetaData), NewProp_SineFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGCreateCircleSettings_Statics::NewProp_SineAltitude = { "SineAltitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCreateCircleSettings, SineAltitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SineAltitude_MetaData), NewProp_SineAltitude_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGCreateCircleSettings_Statics::NewProp_FacingDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGCreateCircleSettings_Statics::NewProp_FacingDirection = { "FacingDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCreateCircleSettings, FacingDirection), Z_Construct_UEnum_PCGAsset_EPCGCreateCirclePointsMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FacingDirection_MetaData), NewProp_FacingDirection_MetaData) }; // 3762682058
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGCreateCircleSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateCircleSettings_Statics::NewProp_CircleDegree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateCircleSettings_Statics::NewProp_CirclePointCounts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateCircleSettings_Statics::NewProp_CircleRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateCircleSettings_Statics::NewProp_SineFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateCircleSettings_Statics::NewProp_SineAltitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateCircleSettings_Statics::NewProp_FacingDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateCircleSettings_Statics::NewProp_FacingDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateCircleSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCGCreateCircleSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateCircleSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGCreateCircleSettings_Statics::ClassParams = {
	&UPCGCreateCircleSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGCreateCircleSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateCircleSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateCircleSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGCreateCircleSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGCreateCircleSettings()
{
	if (!Z_Registration_Info_UClass_UPCGCreateCircleSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGCreateCircleSettings.OuterSingleton, Z_Construct_UClass_UPCGCreateCircleSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGCreateCircleSettings.OuterSingleton;
}
template<> PCGASSET_API UClass* StaticClass<UPCGCreateCircleSettings>()
{
	return UPCGCreateCircleSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGCreateCircleSettings);
UPCGCreateCircleSettings::~UPCGCreateCircleSettings() {}
// End Class UPCGCreateCircleSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCirclePoints_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGCreateCirclePointsMode_StaticEnum, TEXT("EPCGCreateCirclePointsMode"), &Z_Registration_Info_UEnum_EPCGCreateCirclePointsMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3762682058U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGCreateCircleSettings, UPCGCreateCircleSettings::StaticClass, TEXT("UPCGCreateCircleSettings"), &Z_Registration_Info_UClass_UPCGCreateCircleSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGCreateCircleSettings), 306822088U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCirclePoints_h_1437631154(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCirclePoints_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCirclePoints_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCirclePoints_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCirclePoints_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
