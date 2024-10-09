// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGCreateCirclePoints.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCGASSET_PCGCreateCirclePoints_generated_h
#error "PCGCreateCirclePoints.generated.h already included, missing '#pragma once' in PCGCreateCirclePoints.h"
#endif
#define PCGASSET_PCGCreateCirclePoints_generated_h

#define FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCirclePoints_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGCreateCircleSettings(); \
	friend struct Z_Construct_UClass_UPCGCreateCircleSettings_Statics; \
public: \
	DECLARE_CLASS(UPCGCreateCircleSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGAsset"), NO_API) \
	DECLARE_SERIALIZER(UPCGCreateCircleSettings)


#define FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCirclePoints_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPCGCreateCircleSettings(UPCGCreateCircleSettings&&); \
	UPCGCreateCircleSettings(const UPCGCreateCircleSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGCreateCircleSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGCreateCircleSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGCreateCircleSettings) \
	NO_API virtual ~UPCGCreateCircleSettings();


#define FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCirclePoints_h_20_PROLOG
#define FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCirclePoints_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCirclePoints_h_24_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCirclePoints_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCGASSET_API UClass* StaticClass<class UPCGCreateCircleSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCirclePoints_h


#define FOREACH_ENUM_EPCGCREATECIRCLEPOINTSMODE(op) \
	op(EPCGCreateCirclePointsMode::Inward) \
	op(EPCGCreateCirclePointsMode::Outward) \
	op(EPCGCreateCirclePointsMode::TangentA) \
	op(EPCGCreateCirclePointsMode::TangentB) 

enum class EPCGCreateCirclePointsMode : uint8;
template<> struct TIsUEnumClass<EPCGCreateCirclePointsMode> { enum { Value = true }; };
template<> PCGASSET_API UEnum* StaticEnum<EPCGCreateCirclePointsMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
