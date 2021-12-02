// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRAVY_gravyGameMode_generated_h
#error "gravyGameMode.generated.h already included, missing '#pragma once' in gravyGameMode.h"
#endif
#define GRAVY_gravyGameMode_generated_h

#define gravy_Source_gravy_gravyGameMode_h_12_SPARSE_DATA
#define gravy_Source_gravy_gravyGameMode_h_12_RPC_WRAPPERS
#define gravy_Source_gravy_gravyGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define gravy_Source_gravy_gravyGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAgravyGameMode(); \
	friend struct Z_Construct_UClass_AgravyGameMode_Statics; \
public: \
	DECLARE_CLASS(AgravyGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/gravy"), GRAVY_API) \
	DECLARE_SERIALIZER(AgravyGameMode)


#define gravy_Source_gravy_gravyGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAgravyGameMode(); \
	friend struct Z_Construct_UClass_AgravyGameMode_Statics; \
public: \
	DECLARE_CLASS(AgravyGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/gravy"), GRAVY_API) \
	DECLARE_SERIALIZER(AgravyGameMode)


#define gravy_Source_gravy_gravyGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GRAVY_API AgravyGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AgravyGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GRAVY_API, AgravyGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AgravyGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GRAVY_API AgravyGameMode(AgravyGameMode&&); \
	GRAVY_API AgravyGameMode(const AgravyGameMode&); \
public:


#define gravy_Source_gravy_gravyGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GRAVY_API AgravyGameMode(AgravyGameMode&&); \
	GRAVY_API AgravyGameMode(const AgravyGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GRAVY_API, AgravyGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AgravyGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AgravyGameMode)


#define gravy_Source_gravy_gravyGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define gravy_Source_gravy_gravyGameMode_h_9_PROLOG
#define gravy_Source_gravy_gravyGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gravy_Source_gravy_gravyGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	gravy_Source_gravy_gravyGameMode_h_12_SPARSE_DATA \
	gravy_Source_gravy_gravyGameMode_h_12_RPC_WRAPPERS \
	gravy_Source_gravy_gravyGameMode_h_12_INCLASS \
	gravy_Source_gravy_gravyGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gravy_Source_gravy_gravyGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gravy_Source_gravy_gravyGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	gravy_Source_gravy_gravyGameMode_h_12_SPARSE_DATA \
	gravy_Source_gravy_gravyGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	gravy_Source_gravy_gravyGameMode_h_12_INCLASS_NO_PURE_DECLS \
	gravy_Source_gravy_gravyGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRAVY_API UClass* StaticClass<class AgravyGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID gravy_Source_gravy_gravyGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
