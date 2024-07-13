// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGConnectSplinebyID.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCGASSET_PCGConnectSplinebyID_generated_h
#error "PCGConnectSplinebyID.generated.h already included, missing '#pragma once' in PCGConnectSplinebyID.h"
#endif
#define PCGASSET_PCGConnectSplinebyID_generated_h

#define FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGConnectSplinebyID_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGConnectSplinebyIDSettings(); \
	friend struct Z_Construct_UClass_UPCGConnectSplinebyIDSettings_Statics; \
public: \
	DECLARE_CLASS(UPCGConnectSplinebyIDSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGAsset"), NO_API) \
	DECLARE_SERIALIZER(UPCGConnectSplinebyIDSettings)


#define FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGConnectSplinebyID_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPCGConnectSplinebyIDSettings(UPCGConnectSplinebyIDSettings&&); \
	UPCGConnectSplinebyIDSettings(const UPCGConnectSplinebyIDSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGConnectSplinebyIDSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGConnectSplinebyIDSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGConnectSplinebyIDSettings) \
	NO_API virtual ~UPCGConnectSplinebyIDSettings();


#define FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGConnectSplinebyID_h_27_PROLOG
#define FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGConnectSplinebyID_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGConnectSplinebyID_h_31_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGConnectSplinebyID_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCGASSET_API UClass* StaticClass<class UPCGConnectSplinebyIDSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGConnectSplinebyID_h


#define FOREACH_ENUM_EPCGCONNECTSPLINEBYIDMODE(op) \
	op(EPCGConnectSplinebyIDMode::CreateDataOnly) \
	op(EPCGConnectSplinebyIDMode::CreateComponent) \
	op(EPCGConnectSplinebyIDMode::CreateNewActor) 

enum class EPCGConnectSplinebyIDMode : uint8;
template<> struct TIsUEnumClass<EPCGConnectSplinebyIDMode> { enum { Value = true }; };
template<> PCGASSET_API UEnum* StaticEnum<EPCGConnectSplinebyIDMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
