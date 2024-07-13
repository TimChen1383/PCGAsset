// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGCreateCable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCGASSET_PCGCreateCable_generated_h
#error "PCGCreateCable.generated.h already included, missing '#pragma once' in PCGCreateCable.h"
#endif
#define PCGASSET_PCGCreateCable_generated_h

#define FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCable_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGCreateCableSettings(); \
	friend struct Z_Construct_UClass_UPCGCreateCableSettings_Statics; \
public: \
	DECLARE_CLASS(UPCGCreateCableSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGAsset"), NO_API) \
	DECLARE_SERIALIZER(UPCGCreateCableSettings)


#define FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCable_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPCGCreateCableSettings(UPCGCreateCableSettings&&); \
	UPCGCreateCableSettings(const UPCGCreateCableSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGCreateCableSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGCreateCableSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGCreateCableSettings) \
	NO_API virtual ~UPCGCreateCableSettings();


#define FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCable_h_23_PROLOG
#define FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCable_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCable_h_26_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCable_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCGASSET_API UClass* StaticClass<class UPCGCreateCableSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCreateCable_h


#define FOREACH_ENUM_EPCGCREATECABLEMODE(op) \
	op(EPCGCreateCableMode::CreateDataOnly) \
	op(EPCGCreateCableMode::CreateComponent) \
	op(EPCGCreateCableMode::CreateNewActor) 

enum class EPCGCreateCableMode : uint8;
template<> struct TIsUEnumClass<EPCGCreateCableMode> { enum { Value = true }; };
template<> PCGASSET_API UEnum* StaticEnum<EPCGCreateCableMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
