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
#ifdef FACADE_FacadeProjectile_generated_h
#error "FacadeProjectile.generated.h already included, missing '#pragma once' in FacadeProjectile.h"
#endif
#define FACADE_FacadeProjectile_generated_h

#define Facade_Source_Facade_FacadeProjectile_h_15_SPARSE_DATA
#define Facade_Source_Facade_FacadeProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Facade_Source_Facade_FacadeProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Facade_Source_Facade_FacadeProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFacadeProjectile(); \
	friend struct Z_Construct_UClass_AFacadeProjectile_Statics; \
public: \
	DECLARE_CLASS(AFacadeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Facade"), NO_API) \
	DECLARE_SERIALIZER(AFacadeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Facade_Source_Facade_FacadeProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFacadeProjectile(); \
	friend struct Z_Construct_UClass_AFacadeProjectile_Statics; \
public: \
	DECLARE_CLASS(AFacadeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Facade"), NO_API) \
	DECLARE_SERIALIZER(AFacadeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Facade_Source_Facade_FacadeProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFacadeProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFacadeProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFacadeProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFacadeProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFacadeProjectile(AFacadeProjectile&&); \
	NO_API AFacadeProjectile(const AFacadeProjectile&); \
public:


#define Facade_Source_Facade_FacadeProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFacadeProjectile(AFacadeProjectile&&); \
	NO_API AFacadeProjectile(const AFacadeProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFacadeProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFacadeProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFacadeProjectile)


#define Facade_Source_Facade_FacadeProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AFacadeProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFacadeProjectile, ProjectileMovement); }


#define Facade_Source_Facade_FacadeProjectile_h_12_PROLOG
#define Facade_Source_Facade_FacadeProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Facade_Source_Facade_FacadeProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Facade_Source_Facade_FacadeProjectile_h_15_SPARSE_DATA \
	Facade_Source_Facade_FacadeProjectile_h_15_RPC_WRAPPERS \
	Facade_Source_Facade_FacadeProjectile_h_15_INCLASS \
	Facade_Source_Facade_FacadeProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Facade_Source_Facade_FacadeProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Facade_Source_Facade_FacadeProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Facade_Source_Facade_FacadeProjectile_h_15_SPARSE_DATA \
	Facade_Source_Facade_FacadeProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Facade_Source_Facade_FacadeProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Facade_Source_Facade_FacadeProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACADE_API UClass* StaticClass<class AFacadeProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Facade_Source_Facade_FacadeProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
