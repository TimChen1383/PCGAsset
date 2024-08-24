// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGAsset/Public/PCGPointGroup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGPointGroup() {}

// Begin Cross Module References
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGPointGroupSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGPointGroupSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

// Begin Class UPCGPointGroupSettings
void UPCGPointGroupSettings::StaticRegisterNativesUPCGPointGroupSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGPointGroupSettings);
UClass* Z_Construct_UClass_UPCGPointGroupSettings_NoRegister()
{
	return UPCGPointGroupSettings::StaticClass();
}
struct Z_Construct_UClass_UPCGPointGroupSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGPointGroup.h" },
		{ "ModuleRelativePath", "Public/PCGPointGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*******************************************\n\x09Promote variables that will be shown in details panel\n\x09********************************************///UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (ShowOnlyInnerProperties))\n//FPCGMetadataTypesConstantStruct AttributeTypes;\n" },
#endif
		{ "ModuleRelativePath", "Public/PCGPointGroup.h" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Promote variables that will be shown in details panel\n******************************************//UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (ShowOnlyInnerProperties))\n//FPCGMetadataTypesConstantStruct AttributeTypes;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invert_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGPointGroup.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
	static void NewProp_Invert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Invert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGPointGroupSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGPointGroupSettings_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointGroupSettings, GroupName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupName_MetaData), NewProp_GroupName_MetaData) };
void Z_Construct_UClass_UPCGPointGroupSettings_Statics::NewProp_Invert_SetBit(void* Obj)
{
	((UPCGPointGroupSettings*)Obj)->Invert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGPointGroupSettings_Statics::NewProp_Invert = { "Invert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGPointGroupSettings), &Z_Construct_UClass_UPCGPointGroupSettings_Statics::NewProp_Invert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invert_MetaData), NewProp_Invert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGPointGroupSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointGroupSettings_Statics::NewProp_GroupName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointGroupSettings_Statics::NewProp_Invert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointGroupSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCGPointGroupSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointGroupSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGPointGroupSettings_Statics::ClassParams = {
	&UPCGPointGroupSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGPointGroupSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointGroupSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointGroupSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGPointGroupSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGPointGroupSettings()
{
	if (!Z_Registration_Info_UClass_UPCGPointGroupSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGPointGroupSettings.OuterSingleton, Z_Construct_UClass_UPCGPointGroupSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGPointGroupSettings.OuterSingleton;
}
template<> PCGASSET_API UClass* StaticClass<UPCGPointGroupSettings>()
{
	return UPCGPointGroupSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGPointGroupSettings);
UPCGPointGroupSettings::~UPCGPointGroupSettings() {}
// End Class UPCGPointGroupSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPointGroup_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGPointGroupSettings, UPCGPointGroupSettings::StaticClass, TEXT("UPCGPointGroupSettings"), &Z_Registration_Info_UClass_UPCGPointGroupSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGPointGroupSettings), 608105228U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPointGroup_h_2538745856(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPointGroup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPointGroup_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
