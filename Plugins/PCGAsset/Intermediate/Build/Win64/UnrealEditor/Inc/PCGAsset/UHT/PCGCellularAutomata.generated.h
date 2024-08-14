// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGCellularAutomata.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCGASSET_PCGCellularAutomata_generated_h
#error "PCGCellularAutomata.generated.h already included, missing '#pragma once' in PCGCellularAutomata.h"
#endif
#define PCGASSET_PCGCellularAutomata_generated_h

#define FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCellularAutomata_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGCellularAutomataSettings(); \
	friend struct Z_Construct_UClass_UPCGCellularAutomataSettings_Statics; \
public: \
	DECLARE_CLASS(UPCGCellularAutomataSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGAsset"), NO_API) \
	DECLARE_SERIALIZER(UPCGCellularAutomataSettings)


#define FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCellularAutomata_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPCGCellularAutomataSettings(UPCGCellularAutomataSettings&&); \
	UPCGCellularAutomataSettings(const UPCGCellularAutomataSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGCellularAutomataSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGCellularAutomataSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGCellularAutomataSettings) \
	NO_API virtual ~UPCGCellularAutomataSettings();


#define FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCellularAutomata_h_16_PROLOG
#define FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCellularAutomata_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCellularAutomata_h_20_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCellularAutomata_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCGASSET_API UClass* StaticClass<class UPCGCellularAutomataSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_PCGDemo_Plugins_PCGAsset_Source_PCGAsset_Public_PCGCellularAutomata_h


#define FOREACH_ENUM_EPCGCELLULARAUTOMATAMODE(op) \
	op(EPCGCellularAutomataMode::CellularAutomata2D) \
	op(EPCGCellularAutomataMode::CellularAutomata3D) 

enum class EPCGCellularAutomataMode : uint8;
template<> struct TIsUEnumClass<EPCGCellularAutomataMode> { enum { Value = true }; };
template<> PCGASSET_API UEnum* StaticEnum<EPCGCellularAutomataMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
