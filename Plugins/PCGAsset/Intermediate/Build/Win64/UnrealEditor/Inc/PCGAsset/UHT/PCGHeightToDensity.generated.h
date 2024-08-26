// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGHeightToDensity.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCGASSET_PCGHeightToDensity_generated_h
#error "PCGHeightToDensity.generated.h already included, missing '#pragma once' in PCGHeightToDensity.h"
#endif
#define PCGASSET_PCGHeightToDensity_generated_h

#define FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGHeightToDensity_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGHeightToDensitySettings(); \
	friend struct Z_Construct_UClass_UPCGHeightToDensitySettings_Statics; \
public: \
	DECLARE_CLASS(UPCGHeightToDensitySettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGAsset"), NO_API) \
	DECLARE_SERIALIZER(UPCGHeightToDensitySettings)


#define FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGHeightToDensity_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPCGHeightToDensitySettings(UPCGHeightToDensitySettings&&); \
	UPCGHeightToDensitySettings(const UPCGHeightToDensitySettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGHeightToDensitySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGHeightToDensitySettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGHeightToDensitySettings) \
	NO_API virtual ~UPCGHeightToDensitySettings();


#define FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGHeightToDensity_h_16_PROLOG
#define FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGHeightToDensity_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGHeightToDensity_h_20_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGHeightToDensity_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCGASSET_API UClass* StaticClass<class UPCGHeightToDensitySettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGHeightToDensity_h


#define FOREACH_ENUM_EPCGHEIGHTTODENSITYMODE(op) \
	op(EPCGHeighttoDensityMode::Bool) \
	op(EPCGHeighttoDensityMode::Gradient) 

enum class EPCGHeighttoDensityMode : uint8;
template<> struct TIsUEnumClass<EPCGHeighttoDensityMode> { enum { Value = true }; };
template<> PCGASSET_API UEnum* StaticEnum<EPCGHeighttoDensityMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
