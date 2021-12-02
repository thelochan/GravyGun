// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef GRAVY_gravyProjectile_generated_h
#error "gravyProjectile.generated.h already included, missing '#pragma once' in gravyProjectile.h"
#endif
#define GRAVY_gravyProjectile_generated_h

#define gravy_Source_gravy_gravyProjectile_h_15_SPARSE_DATA
#define gravy_Source_gravy_gravyProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define gravy_Source_gravy_gravyProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define gravy_Source_gravy_gravyProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAgravyProjectile(); \
	friend struct Z_Construct_UClass_AgravyProjectile_Statics; \
public: \
	DECLARE_CLASS(AgravyProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/gravy"), NO_API) \
	DECLARE_SERIALIZER(AgravyProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define gravy_Source_gravy_gravyProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAgravyProjectile(); \
	friend struct Z_Construct_UClass_AgravyProjectile_Statics; \
public: \
	DECLARE_CLASS(AgravyProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/gravy"), NO_API) \
	DECLARE_SERIALIZER(AgravyProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define gravy_Source_gravy_gravyProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AgravyProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AgravyProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AgravyProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AgravyProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AgravyProjectile(AgravyProjectile&&); \
	NO_API AgravyProjectile(const AgravyProjectile&); \
public:


#define gravy_Source_gravy_gravyProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AgravyProjectile(AgravyProjectile&&); \
	NO_API AgravyProjectile(const AgravyProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AgravyProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AgravyProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AgravyProjectile)


#define gravy_Source_gravy_gravyProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AgravyProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AgravyProjectile, ProjectileMovement); }


#define gravy_Source_gravy_gravyProjectile_h_12_PROLOG
#define gravy_Source_gravy_gravyProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gravy_Source_gravy_gravyProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	gravy_Source_gravy_gravyProjectile_h_15_SPARSE_DATA \
	gravy_Source_gravy_gravyProjectile_h_15_RPC_WRAPPERS \
	gravy_Source_gravy_gravyProjectile_h_15_INCLASS \
	gravy_Source_gravy_gravyProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gravy_Source_gravy_gravyProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gravy_Source_gravy_gravyProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	gravy_Source_gravy_gravyProjectile_h_15_SPARSE_DATA \
	gravy_Source_gravy_gravyProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	gravy_Source_gravy_gravyProjectile_h_15_INCLASS_NO_PURE_DECLS \
	gravy_Source_gravy_gravyProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRAVY_API UClass* StaticClass<class AgravyProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID gravy_Source_gravy_gravyProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
