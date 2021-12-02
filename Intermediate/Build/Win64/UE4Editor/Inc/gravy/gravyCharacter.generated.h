// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRAVY_gravyCharacter_generated_h
#error "gravyCharacter.generated.h already included, missing '#pragma once' in gravyCharacter.h"
#endif
#define GRAVY_gravyCharacter_generated_h

#define gravy_Source_gravy_gravyCharacter_h_20_SPARSE_DATA
#define gravy_Source_gravy_gravyCharacter_h_20_RPC_WRAPPERS
#define gravy_Source_gravy_gravyCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define gravy_Source_gravy_gravyCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAgravyCharacter(); \
	friend struct Z_Construct_UClass_AgravyCharacter_Statics; \
public: \
	DECLARE_CLASS(AgravyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/gravy"), NO_API) \
	DECLARE_SERIALIZER(AgravyCharacter)


#define gravy_Source_gravy_gravyCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAgravyCharacter(); \
	friend struct Z_Construct_UClass_AgravyCharacter_Statics; \
public: \
	DECLARE_CLASS(AgravyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/gravy"), NO_API) \
	DECLARE_SERIALIZER(AgravyCharacter)


#define gravy_Source_gravy_gravyCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AgravyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AgravyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AgravyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AgravyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AgravyCharacter(AgravyCharacter&&); \
	NO_API AgravyCharacter(const AgravyCharacter&); \
public:


#define gravy_Source_gravy_gravyCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AgravyCharacter(AgravyCharacter&&); \
	NO_API AgravyCharacter(const AgravyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AgravyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AgravyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AgravyCharacter)


#define gravy_Source_gravy_gravyCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AgravyCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AgravyCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AgravyCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__GrabbedObjectLocation() { return STRUCT_OFFSET(AgravyCharacter, GrabbedObjectLocation); } \
	FORCEINLINE static uint32 __PPO__GrabbedObject() { return STRUCT_OFFSET(AgravyCharacter, GrabbedObject); }


#define gravy_Source_gravy_gravyCharacter_h_17_PROLOG
#define gravy_Source_gravy_gravyCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gravy_Source_gravy_gravyCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	gravy_Source_gravy_gravyCharacter_h_20_SPARSE_DATA \
	gravy_Source_gravy_gravyCharacter_h_20_RPC_WRAPPERS \
	gravy_Source_gravy_gravyCharacter_h_20_INCLASS \
	gravy_Source_gravy_gravyCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gravy_Source_gravy_gravyCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gravy_Source_gravy_gravyCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	gravy_Source_gravy_gravyCharacter_h_20_SPARSE_DATA \
	gravy_Source_gravy_gravyCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	gravy_Source_gravy_gravyCharacter_h_20_INCLASS_NO_PURE_DECLS \
	gravy_Source_gravy_gravyCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRAVY_API UClass* StaticClass<class AgravyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID gravy_Source_gravy_gravyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
