// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGAsset/Public/PCGPileUp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGPileUp() {}

// Begin Cross Module References
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGPileUpSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGPileUpSettings_NoRegister();
PCGASSET_API UEnum* Z_Construct_UEnum_PCGAsset_EPCGPileUpMode();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

// Begin Enum EPCGPileUpMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGPileUpMode;
static UEnum* EPCGPileUpMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGPileUpMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGPileUpMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGAsset_EPCGPileUpMode, (UObject*)Z_Construct_UPackage__Script_PCGAsset(), TEXT("EPCGPileUpMode"));
	}
	return Z_Registration_Info_UEnum_EPCGPileUpMode.OuterSingleton;
}
template<> PCGASSET_API UEnum* StaticEnum<EPCGPileUpMode>()
{
	return EPCGPileUpMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGAsset_EPCGPileUpMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bottom.Name", "EPCGPileUpMode::Bottom" },
		{ "Center.Name", "EPCGPileUpMode::Center" },
		{ "ModuleRelativePath", "Public/PCGPileUp.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGPileUpMode::Bottom", (int64)EPCGPileUpMode::Bottom },
		{ "EPCGPileUpMode::Center", (int64)EPCGPileUpMode::Center },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGAsset_EPCGPileUpMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGAsset,
	nullptr,
	"EPCGPileUpMode",
	"EPCGPileUpMode",
	Z_Construct_UEnum_PCGAsset_EPCGPileUpMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGAsset_EPCGPileUpMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGAsset_EPCGPileUpMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGAsset_EPCGPileUpMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGAsset_EPCGPileUpMode()
{
	if (!Z_Registration_Info_UEnum_EPCGPileUpMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGPileUpMode.InnerSingleton, Z_Construct_UEnum_PCGAsset_EPCGPileUpMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGPileUpMode.InnerSingleton;
}
// End Enum EPCGPileUpMode

// Begin Class UPCGPileUpSettings
void UPCGPileUpSettings::StaticRegisterNativesUPCGPileUpSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGPileUpSettings);
UClass* Z_Construct_UClass_UPCGPileUpSettings_NoRegister()
{
	return UPCGPileUpSettings::StaticClass();
}
struct Z_Construct_UClass_UPCGPileUpSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGPileUp.h" },
		{ "ModuleRelativePath", "Public/PCGPileUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshPivotLocation_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*******************************************\n\x09Promote variables that will be shown in details panel\n\x09********************************************///Control the Perlin noise height and scale\n" },
#endif
		{ "ModuleRelativePath", "Public/PCGPileUp.h" },
		{ "PCG_Overridable", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Promote variables that will be shown in details panel\n******************************************//Control the Perlin noise height and scale" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MeshPivotLocation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshPivotLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGPileUpSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGPileUpSettings_Statics::NewProp_MeshPivotLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGPileUpSettings_Statics::NewProp_MeshPivotLocation = { "MeshPivotLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPileUpSettings, MeshPivotLocation), Z_Construct_UEnum_PCGAsset_EPCGPileUpMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshPivotLocation_MetaData), NewProp_MeshPivotLocation_MetaData) }; // 211079835
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGPileUpSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPileUpSettings_Statics::NewProp_MeshPivotLocation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPileUpSettings_Statics::NewProp_MeshPivotLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPileUpSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCGPileUpSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPileUpSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGPileUpSettings_Statics::ClassParams = {
	&UPCGPileUpSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGPileUpSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPileUpSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPileUpSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGPileUpSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGPileUpSettings()
{
	if (!Z_Registration_Info_UClass_UPCGPileUpSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGPileUpSettings.OuterSingleton, Z_Construct_UClass_UPCGPileUpSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGPileUpSettings.OuterSingleton;
}
template<> PCGASSET_API UClass* StaticClass<UPCGPileUpSettings>()
{
	return UPCGPileUpSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGPileUpSettings);
UPCGPileUpSettings::~UPCGPileUpSettings() {}
// End Class UPCGPileUpSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPileUp_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGPileUpMode_StaticEnum, TEXT("EPCGPileUpMode"), &Z_Registration_Info_UEnum_EPCGPileUpMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 211079835U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGPileUpSettings, UPCGPileUpSettings::StaticClass, TEXT("UPCGPileUpSettings"), &Z_Registration_Info_UClass_UPCGPileUpSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGPileUpSettings), 2260833462U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPileUp_h_2728265739(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPileUp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPileUp_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPileUp_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPileUp_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
