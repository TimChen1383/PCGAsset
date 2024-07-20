// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGOctree.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPCGPoint;
#ifdef PCGASSET_PCGOctree_generated_h
#error "PCGOctree.generated.h already included, missing '#pragma once' in PCGOctree.h"
#endif
#define PCGASSET_PCGOctree_generated_h

#define FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGOctree_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDividePoint);


#define FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGOctree_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGOctreeSettings(); \
	friend struct Z_Construct_UClass_UPCGOctreeSettings_Statics; \
public: \
	DECLARE_CLASS(UPCGOctreeSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGAsset"), NO_API) \
	DECLARE_SERIALIZER(UPCGOctreeSettings)


#define FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGOctree_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPCGOctreeSettings(UPCGOctreeSettings&&); \
	UPCGOctreeSettings(const UPCGOctreeSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGOctreeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGOctreeSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGOctreeSettings) \
	NO_API virtual ~UPCGOctreeSettings();


#define FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGOctree_h_9_PROLOG
#define FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGOctree_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGOctree_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGOctree_h_13_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGOctree_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCGASSET_API UClass* StaticClass<class UPCGOctreeSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_PCGAssets_Plugins_PCGAsset_Source_PCGAsset_Public_PCGOctree_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
