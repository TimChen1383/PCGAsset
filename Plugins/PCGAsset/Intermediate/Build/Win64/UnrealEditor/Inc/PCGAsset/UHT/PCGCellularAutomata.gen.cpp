// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGAsset/Public/PCGCellularAutomata.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGCellularAutomata() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGCellularAutomataSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGCellularAutomataSettings_NoRegister();
PCGASSET_API UEnum* Z_Construct_UEnum_PCGAsset_EPCGCellularAutomataMode();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

// Begin Enum EPCGCellularAutomataMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGCellularAutomataMode;
static UEnum* EPCGCellularAutomataMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGCellularAutomataMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGCellularAutomataMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGAsset_EPCGCellularAutomataMode, (UObject*)Z_Construct_UPackage__Script_PCGAsset(), TEXT("EPCGCellularAutomataMode"));
	}
	return Z_Registration_Info_UEnum_EPCGCellularAutomataMode.OuterSingleton;
}
template<> PCGASSET_API UEnum* StaticEnum<EPCGCellularAutomataMode>()
{
	return EPCGCellularAutomataMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGAsset_EPCGCellularAutomataMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CellularAutomata2D.Name", "EPCGCellularAutomataMode::CellularAutomata2D" },
		{ "CellularAutomata3D.Name", "EPCGCellularAutomataMode::CellularAutomata3D" },
		{ "ModuleRelativePath", "Public/PCGCellularAutomata.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGCellularAutomataMode::CellularAutomata2D", (int64)EPCGCellularAutomataMode::CellularAutomata2D },
		{ "EPCGCellularAutomataMode::CellularAutomata3D", (int64)EPCGCellularAutomataMode::CellularAutomata3D },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGAsset_EPCGCellularAutomataMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGAsset,
	nullptr,
	"EPCGCellularAutomataMode",
	"EPCGCellularAutomataMode",
	Z_Construct_UEnum_PCGAsset_EPCGCellularAutomataMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGAsset_EPCGCellularAutomataMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGAsset_EPCGCellularAutomataMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGAsset_EPCGCellularAutomataMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGAsset_EPCGCellularAutomataMode()
{
	if (!Z_Registration_Info_UEnum_EPCGCellularAutomataMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGCellularAutomataMode.InnerSingleton, Z_Construct_UEnum_PCGAsset_EPCGCellularAutomataMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGCellularAutomataMode.InnerSingleton;
}
// End Enum EPCGCellularAutomataMode

// Begin Class UPCGCellularAutomataSettings
void UPCGCellularAutomataSettings::StaticRegisterNativesUPCGCellularAutomataSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGCellularAutomataSettings);
UClass* Z_Construct_UClass_UPCGCellularAutomataSettings_NoRegister()
{
	return UPCGCellularAutomataSettings::StaticClass();
}
struct Z_Construct_UClass_UPCGCellularAutomataSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGCellularAutomata.h" },
		{ "ModuleRelativePath", "Public/PCGCellularAutomata.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOffset_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*******************************************\n\x09Promote variables that will be shown in details panel\n\x09********************************************/" },
#endif
		{ "ModuleRelativePath", "Public/PCGCellularAutomata.h" },
		{ "PCG_Overridable", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Promote variables that will be shown in details panel" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridWidthPointCounts_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//need to know the size of entire grid - by default set to 30*30 grids\n" },
#endif
		{ "ModuleRelativePath", "Public/PCGCellularAutomata.h" },
		{ "PCG_Overridable", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "need to know the size of entire grid - by default set to 30*30 grids" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridHeightPointCounts_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGCellularAutomata.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IterationCounts_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGCellularAutomata.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGCellularAutomata.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ZOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridWidthPointCounts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridHeightPointCounts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IterationCounts;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGCellularAutomataSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGCellularAutomataSettings_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCellularAutomataSettings, ZOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOffset_MetaData), NewProp_ZOffset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGCellularAutomataSettings_Statics::NewProp_GridWidthPointCounts = { "GridWidthPointCounts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCellularAutomataSettings, GridWidthPointCounts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridWidthPointCounts_MetaData), NewProp_GridWidthPointCounts_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGCellularAutomataSettings_Statics::NewProp_GridHeightPointCounts = { "GridHeightPointCounts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCellularAutomataSettings, GridHeightPointCounts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridHeightPointCounts_MetaData), NewProp_GridHeightPointCounts_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGCellularAutomataSettings_Statics::NewProp_IterationCounts = { "IterationCounts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCellularAutomataSettings, IterationCounts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IterationCounts_MetaData), NewProp_IterationCounts_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGCellularAutomataSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGCellularAutomataSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCellularAutomataSettings, Mode), Z_Construct_UEnum_PCGAsset_EPCGCellularAutomataMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 1497741515
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGCellularAutomataSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCellularAutomataSettings_Statics::NewProp_ZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCellularAutomataSettings_Statics::NewProp_GridWidthPointCounts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCellularAutomataSettings_Statics::NewProp_GridHeightPointCounts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCellularAutomataSettings_Statics::NewProp_IterationCounts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCellularAutomataSettings_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCellularAutomataSettings_Statics::NewProp_Mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCellularAutomataSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCGCellularAutomataSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCellularAutomataSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGCellularAutomataSettings_Statics::ClassParams = {
	&UPCGCellularAutomataSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGCellularAutomataSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCellularAutomataSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCellularAutomataSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGCellularAutomataSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGCellularAutomataSettings()
{
	if (!Z_Registration_Info_UClass_UPCGCellularAutomataSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGCellularAutomataSettings.OuterSingleton, Z_Construct_UClass_UPCGCellularAutomataSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGCellularAutomataSettings.OuterSingleton;
}
template<> PCGASSET_API UClass* StaticClass<UPCGCellularAutomataSettings>()
{
	return UPCGCellularAutomataSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGCellularAutomataSettings);
UPCGCellularAutomataSettings::~UPCGCellularAutomataSettings() {}
// End Class UPCGCellularAutomataSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCellularAutomata_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGCellularAutomataMode_StaticEnum, TEXT("EPCGCellularAutomataMode"), &Z_Registration_Info_UEnum_EPCGCellularAutomataMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1497741515U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGCellularAutomataSettings, UPCGCellularAutomataSettings::StaticClass, TEXT("UPCGCellularAutomataSettings"), &Z_Registration_Info_UClass_UPCGCellularAutomataSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGCellularAutomataSettings), 2110743728U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCellularAutomata_h_3419571177(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCellularAutomata_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCellularAutomata_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCellularAutomata_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCellularAutomata_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
