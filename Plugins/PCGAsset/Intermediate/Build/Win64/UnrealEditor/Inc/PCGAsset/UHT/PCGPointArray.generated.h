// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGPointArray.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCGASSET_PCGPointArray_generated_h
#error "PCGPointArray.generated.h already included, missing '#pragma once' in PCGPointArray.h"
#endif
#define PCGASSET_PCGPointArray_generated_h

#define FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPointArray_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGPointArraySettings(); \
	friend struct Z_Construct_UClass_UPCGPointArraySettings_Statics; \
public: \
	DECLARE_CLASS(UPCGPointArraySettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGAsset"), NO_API) \
	DECLARE_SERIALIZER(UPCGPointArraySettings)


#define FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPointArray_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPCGPointArraySettings(UPCGPointArraySettings&&); \
	UPCGPointArraySettings(const UPCGPointArraySettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGPointArraySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGPointArraySettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGPointArraySettings) \
	NO_API virtual ~UPCGPointArraySettings();


#define FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPointArray_h_31_PROLOG
#define FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPointArray_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPointArray_h_34_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPointArray_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCGASSET_API UClass* StaticClass<class UPCGPointArraySettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGPointArray_h


#define FOREACH_ENUM_EPCGPOINTARRAYSCALEMODE(op) \
	op(EPCGPointArrayScaleMode::Fix) \
	op(EPCGPointArrayScaleMode::Increment) 

enum class EPCGPointArrayScaleMode : uint8;
template<> struct TIsUEnumClass<EPCGPointArrayScaleMode> { enum { Value = true }; };
template<> PCGASSET_API UEnum* StaticEnum<EPCGPointArrayScaleMode>();

#define FOREACH_ENUM_EPCGPOINTARRAYROTATIONMODE(op) \
	op(EPCGPointArrayRotationMode::Fix) \
	op(EPCGPointArrayRotationMode::Increment) 

enum class EPCGPointArrayRotationMode : uint8;
template<> struct TIsUEnumClass<EPCGPointArrayRotationMode> { enum { Value = true }; };
template<> PCGASSET_API UEnum* StaticEnum<EPCGPointArrayRotationMode>();

#define FOREACH_ENUM_EPCGPOINTARRAYROTATEALONGAXISMODE(op) \
	op(EPCGPointArrayRotateAlongAxisMode::X) \
	op(EPCGPointArrayRotateAlongAxisMode::Y) \
	op(EPCGPointArrayRotateAlongAxisMode::Z) 

enum class EPCGPointArrayRotateAlongAxisMode : uint8;
template<> struct TIsUEnumClass<EPCGPointArrayRotateAlongAxisMode> { enum { Value = true }; };
template<> PCGASSET_API UEnum* StaticEnum<EPCGPointArrayRotateAlongAxisMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
