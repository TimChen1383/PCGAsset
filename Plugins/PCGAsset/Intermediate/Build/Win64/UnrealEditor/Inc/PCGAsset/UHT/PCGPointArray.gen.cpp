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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGPointArraySettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGPointArraySettings_NoRegister();
PCGASSET_API UEnum* Z_Construct_UEnum_PCGAsset_EPCGPointArrayRotateAlongAxisMode();
PCGASSET_API UEnum* Z_Construct_UEnum_PCGAsset_EPCGPointArrayRotationMode();
PCGASSET_API UEnum* Z_Construct_UEnum_PCGAsset_EPCGPointArrayScaleMode();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

// Begin Enum EPCGPointArrayScaleMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGPointArrayScaleMode;
static UEnum* EPCGPointArrayScaleMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGPointArrayScaleMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGPointArrayScaleMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGAsset_EPCGPointArrayScaleMode, (UObject*)Z_Construct_UPackage__Script_PCGAsset(), TEXT("EPCGPointArrayScaleMode"));
	}
	return Z_Registration_Info_UEnum_EPCGPointArrayScaleMode.OuterSingleton;
}
template<> PCGASSET_API UEnum* StaticEnum<EPCGPointArrayScaleMode>()
{
	return EPCGPointArrayScaleMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGAsset_EPCGPointArrayScaleMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Fix.Name", "EPCGPointArrayScaleMode::Fix" },
		{ "Increment.Name", "EPCGPointArrayScaleMode::Increment" },
		{ "ModuleRelativePath", "Public/PCGPointArray.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGPointArrayScaleMode::Fix", (int64)EPCGPointArrayScaleMode::Fix },
		{ "EPCGPointArrayScaleMode::Increment", (int64)EPCGPointArrayScaleMode::Increment },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGAsset_EPCGPointArrayScaleMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGAsset,
	nullptr,
	"EPCGPointArrayScaleMode",
	"EPCGPointArrayScaleMode",
	Z_Construct_UEnum_PCGAsset_EPCGPointArrayScaleMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGAsset_EPCGPointArrayScaleMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGAsset_EPCGPointArrayScaleMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGAsset_EPCGPointArrayScaleMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGAsset_EPCGPointArrayScaleMode()
{
	if (!Z_Registration_Info_UEnum_EPCGPointArrayScaleMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGPointArrayScaleMode.InnerSingleton, Z_Construct_UEnum_PCGAsset_EPCGPointArrayScaleMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGPointArrayScaleMode.InnerSingleton;
}
// End Enum EPCGPointArrayScaleMode

// Begin Enum EPCGPointArrayRotationMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGPointArrayRotationMode;
static UEnum* EPCGPointArrayRotationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGPointArrayRotationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGPointArrayRotationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGAsset_EPCGPointArrayRotationMode, (UObject*)Z_Construct_UPackage__Script_PCGAsset(), TEXT("EPCGPointArrayRotationMode"));
	}
	return Z_Registration_Info_UEnum_EPCGPointArrayRotationMode.OuterSingleton;
}
template<> PCGASSET_API UEnum* StaticEnum<EPCGPointArrayRotationMode>()
{
	return EPCGPointArrayRotationMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGAsset_EPCGPointArrayRotationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Fix.Name", "EPCGPointArrayRotationMode::Fix" },
		{ "Increment.Name", "EPCGPointArrayRotationMode::Increment" },
		{ "ModuleRelativePath", "Public/PCGPointArray.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGPointArrayRotationMode::Fix", (int64)EPCGPointArrayRotationMode::Fix },
		{ "EPCGPointArrayRotationMode::Increment", (int64)EPCGPointArrayRotationMode::Increment },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGAsset_EPCGPointArrayRotationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGAsset,
	nullptr,
	"EPCGPointArrayRotationMode",
	"EPCGPointArrayRotationMode",
	Z_Construct_UEnum_PCGAsset_EPCGPointArrayRotationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGAsset_EPCGPointArrayRotationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGAsset_EPCGPointArrayRotationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGAsset_EPCGPointArrayRotationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGAsset_EPCGPointArrayRotationMode()
{
	if (!Z_Registration_Info_UEnum_EPCGPointArrayRotationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGPointArrayRotationMode.InnerSingleton, Z_Construct_UEnum_PCGAsset_EPCGPointArrayRotationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGPointArrayRotationMode.InnerSingleton;
}
// End Enum EPCGPointArrayRotationMode

// Begin Enum EPCGPointArrayRotateAlongAxisMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGPointArrayRotateAlongAxisMode;
static UEnum* EPCGPointArrayRotateAlongAxisMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGPointArrayRotateAlongAxisMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGPointArrayRotateAlongAxisMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGAsset_EPCGPointArrayRotateAlongAxisMode, (UObject*)Z_Construct_UPackage__Script_PCGAsset(), TEXT("EPCGPointArrayRotateAlongAxisMode"));
	}
	return Z_Registration_Info_UEnum_EPCGPointArrayRotateAlongAxisMode.OuterSingleton;
}
template<> PCGASSET_API UEnum* StaticEnum<EPCGPointArrayRotateAlongAxisMode>()
{
	return EPCGPointArrayRotateAlongAxisMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGAsset_EPCGPointArrayRotateAlongAxisMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PCGPointArray.h" },
		{ "X.Name", "EPCGPointArrayRotateAlongAxisMode::X" },
		{ "Y.Name", "EPCGPointArrayRotateAlongAxisMode::Y" },
		{ "Z.Name", "EPCGPointArrayRotateAlongAxisMode::Z" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGPointArrayRotateAlongAxisMode::X", (int64)EPCGPointArrayRotateAlongAxisMode::X },
		{ "EPCGPointArrayRotateAlongAxisMode::Y", (int64)EPCGPointArrayRotateAlongAxisMode::Y },
		{ "EPCGPointArrayRotateAlongAxisMode::Z", (int64)EPCGPointArrayRotateAlongAxisMode::Z },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGAsset_EPCGPointArrayRotateAlongAxisMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGAsset,
	nullptr,
	"EPCGPointArrayRotateAlongAxisMode",
	"EPCGPointArrayRotateAlongAxisMode",
	Z_Construct_UEnum_PCGAsset_EPCGPointArrayRotateAlongAxisMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGAsset_EPCGPointArrayRotateAlongAxisMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGAsset_EPCGPointArrayRotateAlongAxisMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGAsset_EPCGPointArrayRotateAlongAxisMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGAsset_EPCGPointArrayRotateAlongAxisMode()
{
	if (!Z_Registration_Info_UEnum_EPCGPointArrayRotateAlongAxisMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGPointArrayRotateAlongAxisMode.InnerSingleton, Z_Construct_UEnum_PCGAsset_EPCGPointArrayRotateAlongAxisMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGPointArrayRotateAlongAxisMode.InnerSingleton;
}
// End Enum EPCGPointArrayRotateAlongAxisMode

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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationIncrement_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPointArray.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPointArray.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPointArray.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPointArray.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPointArray.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateAlongAxisMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPointArray.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateAlongAxisDegree_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPointArray.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DuplicateCounts;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationIncrement;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScaleMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotateAlongAxisMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotateAlongAxisMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateAlongAxisDegree;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGPointArraySettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_DuplicateCounts = { "DuplicateCounts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointArraySettings, DuplicateCounts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DuplicateCounts_MetaData), NewProp_DuplicateCounts_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_LocationIncrement = { "LocationIncrement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointArraySettings, LocationIncrement), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationIncrement_MetaData), NewProp_LocationIncrement_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_ScaleMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_ScaleMode = { "ScaleMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointArraySettings, ScaleMode), Z_Construct_UEnum_PCGAsset_EPCGPointArrayScaleMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleMode_MetaData), NewProp_ScaleMode_MetaData) }; // 826519257
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_ScaleOffset = { "ScaleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointArraySettings, ScaleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleOffset_MetaData), NewProp_ScaleOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_RotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_RotationMode = { "RotationMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointArraySettings, RotationMode), Z_Construct_UEnum_PCGAsset_EPCGPointArrayRotationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationMode_MetaData), NewProp_RotationMode_MetaData) }; // 2583648749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointArraySettings, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_RotateAlongAxisMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_RotateAlongAxisMode = { "RotateAlongAxisMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointArraySettings, RotateAlongAxisMode), Z_Construct_UEnum_PCGAsset_EPCGPointArrayRotateAlongAxisMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateAlongAxisMode_MetaData), NewProp_RotateAlongAxisMode_MetaData) }; // 1432767578
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_RotateAlongAxisDegree = { "RotateAlongAxisDegree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointArraySettings, RotateAlongAxisDegree), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateAlongAxisDegree_MetaData), NewProp_RotateAlongAxisDegree_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGPointArraySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_DuplicateCounts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_LocationIncrement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_ScaleMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_ScaleMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_ScaleOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_RotationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_RotationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_RotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_RotateAlongAxisMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_RotateAlongAxisMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointArraySettings_Statics::NewProp_RotateAlongAxisDegree,
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
struct Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPointArray_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGPointArrayScaleMode_StaticEnum, TEXT("EPCGPointArrayScaleMode"), &Z_Registration_Info_UEnum_EPCGPointArrayScaleMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 826519257U) },
		{ EPCGPointArrayRotationMode_StaticEnum, TEXT("EPCGPointArrayRotationMode"), &Z_Registration_Info_UEnum_EPCGPointArrayRotationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2583648749U) },
		{ EPCGPointArrayRotateAlongAxisMode_StaticEnum, TEXT("EPCGPointArrayRotateAlongAxisMode"), &Z_Registration_Info_UEnum_EPCGPointArrayRotateAlongAxisMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1432767578U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGPointArraySettings, UPCGPointArraySettings::StaticClass, TEXT("UPCGPointArraySettings"), &Z_Registration_Info_UClass_UPCGPointArraySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGPointArraySettings), 3431995316U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPointArray_h_3137869097(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPointArray_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPointArray_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPointArray_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPointArray_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
