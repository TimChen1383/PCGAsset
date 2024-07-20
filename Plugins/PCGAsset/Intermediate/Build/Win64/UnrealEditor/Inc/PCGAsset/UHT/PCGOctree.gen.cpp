// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGAsset/Public/PCGOctree.h"
#include "PCG/Public/PCGPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGOctree() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPoint();
PCGASSET_API UClass* Z_Construct_UClass_UPCGOctreeSettings();
PCGASSET_API UClass* Z_Construct_UClass_UPCGOctreeSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGAsset();
// End Cross Module References

// Begin Class UPCGOctreeSettings Function DividePoint
struct Z_Construct_UFunction_UPCGOctreeSettings_DividePoint_Statics
{
	struct PCGOctreeSettings_eventDividePoint_Parms
	{
		TArray<FPCGPoint> DivideSourcePoints;
		int32 PointsDivideNums;
		TArray<FPCGPoint> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PCGOctree.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DivideSourcePoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DivideSourcePoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointsDivideNums;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGOctreeSettings_DividePoint_Statics::NewProp_DivideSourcePoints_Inner = { "DivideSourcePoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(0, nullptr) }; // 3627802196
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGOctreeSettings_DividePoint_Statics::NewProp_DivideSourcePoints = { "DivideSourcePoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGOctreeSettings_eventDividePoint_Parms, DivideSourcePoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3627802196
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGOctreeSettings_DividePoint_Statics::NewProp_PointsDivideNums = { "PointsDivideNums", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGOctreeSettings_eventDividePoint_Parms, PointsDivideNums), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGOctreeSettings_DividePoint_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(0, nullptr) }; // 3627802196
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGOctreeSettings_DividePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGOctreeSettings_eventDividePoint_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3627802196
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGOctreeSettings_DividePoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGOctreeSettings_DividePoint_Statics::NewProp_DivideSourcePoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGOctreeSettings_DividePoint_Statics::NewProp_DivideSourcePoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGOctreeSettings_DividePoint_Statics::NewProp_PointsDivideNums,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGOctreeSettings_DividePoint_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGOctreeSettings_DividePoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGOctreeSettings_DividePoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGOctreeSettings_DividePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGOctreeSettings, nullptr, "DividePoint", nullptr, nullptr, Z_Construct_UFunction_UPCGOctreeSettings_DividePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGOctreeSettings_DividePoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGOctreeSettings_DividePoint_Statics::PCGOctreeSettings_eventDividePoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGOctreeSettings_DividePoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGOctreeSettings_DividePoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPCGOctreeSettings_DividePoint_Statics::PCGOctreeSettings_eventDividePoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGOctreeSettings_DividePoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGOctreeSettings_DividePoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGOctreeSettings::execDividePoint)
{
	P_GET_TARRAY_REF(FPCGPoint,Z_Param_Out_DivideSourcePoints);
	P_GET_PROPERTY(FIntProperty,Z_Param_PointsDivideNums);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FPCGPoint>*)Z_Param__Result=UPCGOctreeSettings::DividePoint(Z_Param_Out_DivideSourcePoints,Z_Param_PointsDivideNums);
	P_NATIVE_END;
}
// End Class UPCGOctreeSettings Function DividePoint

// Begin Class UPCGOctreeSettings
void UPCGOctreeSettings::StaticRegisterNativesUPCGOctreeSettings()
{
	UClass* Class = UPCGOctreeSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DividePoint", &UPCGOctreeSettings::execDividePoint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGOctreeSettings);
UClass* Z_Construct_UClass_UPCGOctreeSettings_NoRegister()
{
	return UPCGOctreeSettings::StaticClass();
}
struct Z_Construct_UClass_UPCGOctreeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGOctree.h" },
		{ "ModuleRelativePath", "Public/PCGOctree.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomOffset_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*******************************************\n\x09Promote variables that will be shown in details panel\n\x09********************************************///Control the Perlin noise height and scale\n" },
#endif
		{ "ModuleRelativePath", "Public/PCGOctree.h" },
		{ "PCG_Overridable", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Promote variables that will be shown in details panel\n******************************************//Control the Perlin noise height and scale" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPointCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGOctree.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DivideNum_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "3" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/PCGOctree.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedPointCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DivideNum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGOctreeSettings_DividePoint, "DividePoint" }, // 3529964051
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGOctreeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGOctreeSettings_Statics::NewProp_CustomOffset = { "CustomOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGOctreeSettings, CustomOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomOffset_MetaData), NewProp_CustomOffset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGOctreeSettings_Statics::NewProp_SelectedPointCount = { "SelectedPointCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGOctreeSettings, SelectedPointCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedPointCount_MetaData), NewProp_SelectedPointCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGOctreeSettings_Statics::NewProp_DivideNum = { "DivideNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGOctreeSettings, DivideNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DivideNum_MetaData), NewProp_DivideNum_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGOctreeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGOctreeSettings_Statics::NewProp_CustomOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGOctreeSettings_Statics::NewProp_SelectedPointCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGOctreeSettings_Statics::NewProp_DivideNum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGOctreeSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCGOctreeSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGOctreeSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGOctreeSettings_Statics::ClassParams = {
	&UPCGOctreeSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPCGOctreeSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGOctreeSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGOctreeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGOctreeSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGOctreeSettings()
{
	if (!Z_Registration_Info_UClass_UPCGOctreeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGOctreeSettings.OuterSingleton, Z_Construct_UClass_UPCGOctreeSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGOctreeSettings.OuterSingleton;
}
template<> PCGASSET_API UClass* StaticClass<UPCGOctreeSettings>()
{
	return UPCGOctreeSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGOctreeSettings);
UPCGOctreeSettings::~UPCGOctreeSettings() {}
// End Class UPCGOctreeSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGOctree_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGOctreeSettings, UPCGOctreeSettings::StaticClass, TEXT("UPCGOctreeSettings"), &Z_Registration_Info_UClass_UPCGOctreeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGOctreeSettings), 2002340045U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGOctree_h_44726812(TEXT("/Script/PCGAsset"),
	Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGOctree_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGOctree_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
