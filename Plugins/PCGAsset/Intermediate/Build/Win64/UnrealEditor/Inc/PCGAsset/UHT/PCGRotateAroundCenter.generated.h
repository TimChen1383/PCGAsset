// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGRotateAroundCenter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCGASSET_PCGRotateAroundCenter_generated_h
#error "PCGRotateAroundCenter.generated.h already included, missing '#pragma once' in PCGRotateAroundCenter.h"
#endif
#define PCGASSET_PCGRotateAroundCenter_generated_h

#define FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRotateAroundCenter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGRotateAroundCenterSettings(); \
	friend struct Z_Construct_UClass_UPCGRotateAroundCenterSettings_Statics; \
public: \
	DECLARE_CLASS(UPCGRotateAroundCenterSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGAsset"), NO_API) \
	DECLARE_SERIALIZER(UPCGRotateAroundCenterSettings)


#define FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRotateAroundCenter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPCGRotateAroundCenterSettings(UPCGRotateAroundCenterSettings&&); \
	UPCGRotateAroundCenterSettings(const UPCGRotateAroundCenterSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGRotateAroundCenterSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGRotateAroundCenterSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGRotateAroundCenterSettings) \
	NO_API virtual ~UPCGRotateAroundCenterSettings();


#define FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRotateAroundCenter_h_18_PROLOG
#define FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRotateAroundCenter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRotateAroundCenter_h_22_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRotateAroundCenter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCGASSET_API UClass* StaticClass<class UPCGRotateAroundCenterSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGRotateAroundCenter_h


#define FOREACH_ENUM_EPCGROTATEAROUNDCENTERMODE(op) \
	op(EPCGRotateAroundCenterMode::X) \
	op(EPCGRotateAroundCenterMode::Y) \
	op(EPCGRotateAroundCenterMode::Z) 

enum class EPCGRotateAroundCenterMode : uint8;
template<> struct TIsUEnumClass<EPCGRotateAroundCenterMode> { enum { Value = true }; };
template<> PCGASSET_API UEnum* StaticEnum<EPCGRotateAroundCenterMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
