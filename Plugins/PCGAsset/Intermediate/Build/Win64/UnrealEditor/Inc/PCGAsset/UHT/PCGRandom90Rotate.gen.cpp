// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGAsset/Public/PCGRandom90Rotate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGRandom90Rotate() {}

// Begin Cross Module References
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGRandom90RotateSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGRandom90RotateSettings_NoRegister();
PCGASSET_API UEnum* Z_Construct_UEnum_PCGAsset_EPCGRadom90RotateMode();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

// Begin Enum EPCGRadom90RotateMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGRadom90RotateMode;
static UEnum* EPCGRadom90RotateMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGRadom90RotateMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGRadom90RotateMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGAsset_EPCGRadom90RotateMode, (UObject*)Z_Construct_UPackage__Script_PCGAsset(), TEXT("EPCGRadom90RotateMode"));
	}
	return Z_Registration_Info_UEnum_EPCGRadom90RotateMode.OuterSingleton;
}
template<> PCGASSET_API UEnum* StaticEnum<EPCGRadom90RotateMode>()
{
	return EPCGRadom90RotateMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGAsset_EPCGRadom90RotateMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PCGRandom90Rotate.h" },
		{ "Pitch.Name", "EPCGRadom90RotateMode::Pitch" },
		{ "Roll.Name", "EPCGRadom90RotateMode::Roll" },
		{ "Yaw.Name", "EPCGRadom90RotateMode::Yaw" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGRadom90RotateMode::Roll", (int64)EPCGRadom90RotateMode::Roll },
		{ "EPCGRadom90RotateMode::Pitch", (int64)EPCGRadom90RotateMode::Pitch },
		{ "EPCGRadom90RotateMode::Yaw", (int64)EPCGRadom90RotateMode::Yaw },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGAsset_EPCGRadom90RotateMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGAsset,
	nullptr,
	"EPCGRadom90RotateMode",
	"EPCGRadom90RotateMode",
	Z_Construct_UEnum_PCGAsset_EPCGRadom90RotateMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGAsset_EPCGRadom90RotateMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGAsset_EPCGRadom90RotateMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGAsset_EPCGRadom90RotateMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGAsset_EPCGRadom90RotateMode()
{
	if (!Z_Registration_Info_UEnum_EPCGRadom90RotateMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGRadom90RotateMode.InnerSingleton, Z_Construct_UEnum_PCGAsset_EPCGRadom90RotateMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGRadom90RotateMode.InnerSingleton;
}
// End Enum EPCGRadom90RotateMode

// Begin Class UPCGRandom90RotateSettings
void UPCGRandom90RotateSettings::StaticRegisterNativesUPCGRandom90RotateSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGRandom90RotateSettings);
UClass* Z_Construct_UClass_UPCGRandom90RotateSettings_NoRegister()
{
	return UPCGRandom90RotateSettings::StaticClass();
}
struct Z_Construct_UClass_UPCGRandom90RotateSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGRandom90Rotate.h" },
		{ "ModuleRelativePath", "Public/PCGRandom90Rotate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateDirection_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*******************************************\n\x09Promote variables that will be shown in details panel\n\x09********************************************///Control the Perlin noise height and scale\n" },
#endif
		{ "ModuleRelativePath", "Public/PCGRandom90Rotate.h" },
		{ "PCG_Overridable", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Promote variables that will be shown in details panel\n******************************************//Control the Perlin noise height and scale" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotateDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotateDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGRandom90RotateSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGRandom90RotateSettings_Statics::NewProp_RotateDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGRandom90RotateSettings_Statics::NewProp_RotateDirection = { "RotateDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGRandom90RotateSettings, RotateDirection), Z_Construct_UEnum_PCGAsset_EPCGRadom90RotateMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateDirection_MetaData), NewProp_RotateDirection_MetaData) }; // 3368343156
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGRandom90RotateSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGRandom90RotateSettings_Statics::NewProp_RotateDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGRandom90RotateSettings_Statics::NewProp_RotateDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGRandom90RotateSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCGRandom90RotateSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGRandom90RotateSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGRandom90RotateSettings_Statics::ClassParams = {
	&UPCGRandom90RotateSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGRandom90RotateSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGRandom90RotateSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGRandom90RotateSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGRandom90RotateSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGRandom90RotateSettings()
{
	if (!Z_Registration_Info_UClass_UPCGRandom90RotateSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGRandom90RotateSettings.OuterSingleton, Z_Construct_UClass_UPCGRandom90RotateSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGRandom90RotateSettings.OuterSingleton;
}
template<> PCGASSET_API UClass* StaticClass<UPCGRandom90RotateSettings>()
{
	return UPCGRandom90RotateSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGRandom90RotateSettings);
UPCGRandom90RotateSettings::~UPCGRandom90RotateSettings() {}
// End Class UPCGRandom90RotateSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRandom90Rotate_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGRadom90RotateMode_StaticEnum, TEXT("EPCGRadom90RotateMode"), &Z_Registration_Info_UEnum_EPCGRadom90RotateMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3368343156U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGRandom90RotateSettings, UPCGRandom90RotateSettings::StaticClass, TEXT("UPCGRandom90RotateSettings"), &Z_Registration_Info_UClass_UPCGRandom90RotateSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGRandom90RotateSettings), 3353233298U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRandom90Rotate_h_4149650954(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRandom90Rotate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRandom90Rotate_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRandom90Rotate_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRandom90Rotate_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
