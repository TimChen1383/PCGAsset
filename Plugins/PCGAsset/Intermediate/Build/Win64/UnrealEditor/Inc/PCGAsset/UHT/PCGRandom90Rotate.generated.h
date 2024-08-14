// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGRandom90Rotate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCGASSET_PCGRandom90Rotate_generated_h
#error "PCGRandom90Rotate.generated.h already included, missing '#pragma once' in PCGRandom90Rotate.h"
#endif
#define PCGASSET_PCGRandom90Rotate_generated_h

#define FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRandom90Rotate_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGRandom90RotateSettings(); \
	friend struct Z_Construct_UClass_UPCGRandom90RotateSettings_Statics; \
public: \
	DECLARE_CLASS(UPCGRandom90RotateSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGAsset"), NO_API) \
	DECLARE_SERIALIZER(UPCGRandom90RotateSettings)


#define FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRandom90Rotate_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPCGRandom90RotateSettings(UPCGRandom90RotateSettings&&); \
	UPCGRandom90RotateSettings(const UPCGRandom90RotateSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGRandom90RotateSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGRandom90RotateSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGRandom90RotateSettings) \
	NO_API virtual ~UPCGRandom90RotateSettings();


#define FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRandom90Rotate_h_18_PROLOG
#define FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRandom90Rotate_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRandom90Rotate_h_22_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRandom90Rotate_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCGASSET_API UClass* StaticClass<class UPCGRandom90RotateSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRandom90Rotate_h


#define FOREACH_ENUM_EPCGRADOM90ROTATEMODE(op) \
	op(EPCGRadom90RotateMode::Roll) \
	op(EPCGRadom90RotateMode::Pitch) \
	op(EPCGRadom90RotateMode::Yaw) 

enum class EPCGRadom90RotateMode : uint8;
template<> struct TIsUEnumClass<EPCGRadom90RotateMode> { enum { Value = true }; };
template<> PCGASSET_API UEnum* StaticEnum<EPCGRadom90RotateMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
