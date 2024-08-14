// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGAsset/Public/PCGConnectSplinebyID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGConnectSplinebyID() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGConnectSplinebyIDSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGConnectSplinebyIDSettings_NoRegister();
PCGASSET_API UEnum* Z_Construct_UEnum_PCGAsset_EPCGConnectSplinebyIDMode();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

// Begin Enum EPCGConnectSplinebyIDMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGConnectSplinebyIDMode;
static UEnum* EPCGConnectSplinebyIDMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGConnectSplinebyIDMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGConnectSplinebyIDMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGAsset_EPCGConnectSplinebyIDMode, (UObject*)Z_Construct_UPackage__Script_PCGAsset(), TEXT("EPCGConnectSplinebyIDMode"));
	}
	return Z_Registration_Info_UEnum_EPCGConnectSplinebyIDMode.OuterSingleton;
}
template<> PCGASSET_API UEnum* StaticEnum<EPCGConnectSplinebyIDMode>()
{
	return EPCGConnectSplinebyIDMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGAsset_EPCGConnectSplinebyIDMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CreateComponent.Name", "EPCGConnectSplinebyIDMode::CreateComponent" },
		{ "CreateDataOnly.Name", "EPCGConnectSplinebyIDMode::CreateDataOnly" },
		{ "CreateNewActor.Comment", "//Actually we can't choose this in PCG Graph\n" },
		{ "CreateNewActor.Hidden", "" },
		{ "CreateNewActor.Name", "EPCGConnectSplinebyIDMode::CreateNewActor" },
		{ "CreateNewActor.ToolTip", "Actually we can't choose this in PCG Graph" },
		{ "ModuleRelativePath", "Public/PCGConnectSplinebyID.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGConnectSplinebyIDMode::CreateDataOnly", (int64)EPCGConnectSplinebyIDMode::CreateDataOnly },
		{ "EPCGConnectSplinebyIDMode::CreateComponent", (int64)EPCGConnectSplinebyIDMode::CreateComponent },
		{ "EPCGConnectSplinebyIDMode::CreateNewActor", (int64)EPCGConnectSplinebyIDMode::CreateNewActor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGAsset_EPCGConnectSplinebyIDMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGAsset,
	nullptr,
	"EPCGConnectSplinebyIDMode",
	"EPCGConnectSplinebyIDMode",
	Z_Construct_UEnum_PCGAsset_EPCGConnectSplinebyIDMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGAsset_EPCGConnectSplinebyIDMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGAsset_EPCGConnectSplinebyIDMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGAsset_EPCGConnectSplinebyIDMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGAsset_EPCGConnectSplinebyIDMode()
{
	if (!Z_Registration_Info_UEnum_EPCGConnectSplinebyIDMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGConnectSplinebyIDMode.InnerSingleton, Z_Construct_UEnum_PCGAsset_EPCGConnectSplinebyIDMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGConnectSplinebyIDMode.InnerSingleton;
}
// End Enum EPCGConnectSplinebyIDMode

// Begin Class UPCGConnectSplinebyIDSettings
void UPCGConnectSplinebyIDSettings::StaticRegisterNativesUPCGConnectSplinebyIDSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGConnectSplinebyIDSettings);
UClass* Z_Construct_UClass_UPCGConnectSplinebyIDSettings_NoRegister()
{
	return UPCGConnectSplinebyIDSettings::StaticClass();
}
struct Z_Construct_UClass_UPCGConnectSplinebyIDSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "PCGConnectSplinebyID.h" },
		{ "ModuleRelativePath", "Public/PCGConnectSplinebyID.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*******************************************\n\x09Promote variables that will be shown in details panel\n\x09********************************************///Control the Perlin noise height and scale\n" },
#endif
		{ "ModuleRelativePath", "Public/PCGConnectSplinebyID.h" },
		{ "PCG_Overridable", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Promote variables that will be shown in details panel\n******************************************//Control the Perlin noise height and scale" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGConnectSplinebyID.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGConnectSplinebyID.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomOffset;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGConnectSplinebyIDSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGConnectSplinebyIDSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGConnectSplinebyIDSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGConnectSplinebyIDSettings, Mode), Z_Construct_UEnum_PCGAsset_EPCGConnectSplinebyIDMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 2018525204
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGConnectSplinebyIDSettings_Statics::NewProp_CustomOffset = { "CustomOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGConnectSplinebyIDSettings, CustomOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomOffset_MetaData), NewProp_CustomOffset_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGConnectSplinebyIDSettings_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGConnectSplinebyIDSettings, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGConnectSplinebyIDSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGConnectSplinebyIDSettings_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGConnectSplinebyIDSettings_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGConnectSplinebyIDSettings_Statics::NewProp_CustomOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGConnectSplinebyIDSettings_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGConnectSplinebyIDSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCGConnectSplinebyIDSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGConnectSplinebyIDSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGConnectSplinebyIDSettings_Statics::ClassParams = {
	&UPCGConnectSplinebyIDSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGConnectSplinebyIDSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGConnectSplinebyIDSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGConnectSplinebyIDSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGConnectSplinebyIDSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGConnectSplinebyIDSettings()
{
	if (!Z_Registration_Info_UClass_UPCGConnectSplinebyIDSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGConnectSplinebyIDSettings.OuterSingleton, Z_Construct_UClass_UPCGConnectSplinebyIDSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGConnectSplinebyIDSettings.OuterSingleton;
}
template<> PCGASSET_API UClass* StaticClass<UPCGConnectSplinebyIDSettings>()
{
	return UPCGConnectSplinebyIDSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGConnectSplinebyIDSettings);
UPCGConnectSplinebyIDSettings::~UPCGConnectSplinebyIDSettings() {}
// End Class UPCGConnectSplinebyIDSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGConnectSplinebyID_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGConnectSplinebyIDMode_StaticEnum, TEXT("EPCGConnectSplinebyIDMode"), &Z_Registration_Info_UEnum_EPCGConnectSplinebyIDMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2018525204U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGConnectSplinebyIDSettings, UPCGConnectSplinebyIDSettings::StaticClass, TEXT("UPCGConnectSplinebyIDSettings"), &Z_Registration_Info_UClass_UPCGConnectSplinebyIDSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGConnectSplinebyIDSettings), 2357286537U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGConnectSplinebyID_h_2435503257(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGConnectSplinebyID_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGConnectSplinebyID_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGConnectSplinebyID_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGConnectSplinebyID_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
