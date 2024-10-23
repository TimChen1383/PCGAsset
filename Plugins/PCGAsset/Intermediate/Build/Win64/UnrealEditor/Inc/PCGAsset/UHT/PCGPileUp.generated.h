// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGPileUp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCGASSET_PCGPileUp_generated_h
#error "PCGPileUp.generated.h already included, missing '#pragma once' in PCGPileUp.h"
#endif
#define PCGASSET_PCGPileUp_generated_h

#define FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPileUp_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGPileUpSettings(); \
	friend struct Z_Construct_UClass_UPCGPileUpSettings_Statics; \
public: \
	DECLARE_CLASS(UPCGPileUpSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGAsset"), NO_API) \
	DECLARE_SERIALIZER(UPCGPileUpSettings)


#define FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPileUp_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPCGPileUpSettings(UPCGPileUpSettings&&); \
	UPCGPileUpSettings(const UPCGPileUpSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGPileUpSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGPileUpSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGPileUpSettings) \
	NO_API virtual ~UPCGPileUpSettings();


#define FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPileUp_h_16_PROLOG
#define FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPileUp_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPileUp_h_20_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPileUp_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCGASSET_API UClass* StaticClass<class UPCGPileUpSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPileUp_h


#define FOREACH_ENUM_EPCGPILEUPMODE(op) \
	op(EPCGPileUpMode::Bottom) \
	op(EPCGPileUpMode::Center) 

enum class EPCGPileUpMode : uint8;
template<> struct TIsUEnumClass<EPCGPileUpMode> { enum { Value = true }; };
template<> PCGASSET_API UEnum* StaticEnum<EPCGPileUpMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
