// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGPerlinNoise.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCGASSET_PCGPerlinNoise_generated_h
#error "PCGPerlinNoise.generated.h already included, missing '#pragma once' in PCGPerlinNoise.h"
#endif
#define PCGASSET_PCGPerlinNoise_generated_h

#define FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPerlinNoise_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGPerlinNoise2DSettings(); \
	friend struct Z_Construct_UClass_UPCGPerlinNoise2DSettings_Statics; \
public: \
	DECLARE_CLASS(UPCGPerlinNoise2DSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGAsset"), NO_API) \
	DECLARE_SERIALIZER(UPCGPerlinNoise2DSettings)


#define FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPerlinNoise_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPCGPerlinNoise2DSettings(UPCGPerlinNoise2DSettings&&); \
	UPCGPerlinNoise2DSettings(const UPCGPerlinNoise2DSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGPerlinNoise2DSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGPerlinNoise2DSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGPerlinNoise2DSettings) \
	NO_API virtual ~UPCGPerlinNoise2DSettings();


#define FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPerlinNoise_h_16_PROLOG
#define FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPerlinNoise_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPerlinNoise_h_20_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPerlinNoise_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCGASSET_API UClass* StaticClass<class UPCGPerlinNoise2DSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPerlinNoise_h


#define FOREACH_ENUM_EPCGPERLINNOISEMODE(op) \
	op(EPCGPerlinNoiseMode::PelinNoise2D) \
	op(EPCGPerlinNoiseMode::PelinNoise3D) 

enum class EPCGPerlinNoiseMode : uint8;
template<> struct TIsUEnumClass<EPCGPerlinNoiseMode> { enum { Value = true }; };
template<> PCGASSET_API UEnum* StaticEnum<EPCGPerlinNoiseMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
