// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACADE_FacadePawn_generated_h
#error "FacadePawn.generated.h already included, missing '#pragma once' in FacadePawn.h"
#endif
#define FACADE_FacadePawn_generated_h

#define Facade_Source_Facade_FacadePawn_h_12_SPARSE_DATA
#define Facade_Source_Facade_FacadePawn_h_12_RPC_WRAPPERS
#define Facade_Source_Facade_FacadePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Facade_Source_Facade_FacadePawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFacadePawn(); \
	friend struct Z_Construct_UClass_AFacadePawn_Statics; \
public: \
	DECLARE_CLASS(AFacadePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Facade"), NO_API) \
	DECLARE_SERIALIZER(AFacadePawn)


#define Facade_Source_Facade_FacadePawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFacadePawn(); \
	friend struct Z_Construct_UClass_AFacadePawn_Statics; \
public: \
	DECLARE_CLASS(AFacadePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Facade"), NO_API) \
	DECLARE_SERIALIZER(AFacadePawn)


#define Facade_Source_Facade_FacadePawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFacadePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFacadePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFacadePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFacadePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFacadePawn(AFacadePawn&&); \
	NO_API AFacadePawn(const AFacadePawn&); \
public:


#define Facade_Source_Facade_FacadePawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFacadePawn(AFacadePawn&&); \
	NO_API AFacadePawn(const AFacadePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFacadePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFacadePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFacadePawn)


#define Facade_Source_Facade_FacadePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(AFacadePawn, ShipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(AFacadePawn, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AFacadePawn, CameraBoom); }


#define Facade_Source_Facade_FacadePawn_h_9_PROLOG
#define Facade_Source_Facade_FacadePawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Facade_Source_Facade_FacadePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Facade_Source_Facade_FacadePawn_h_12_SPARSE_DATA \
	Facade_Source_Facade_FacadePawn_h_12_RPC_WRAPPERS \
	Facade_Source_Facade_FacadePawn_h_12_INCLASS \
	Facade_Source_Facade_FacadePawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Facade_Source_Facade_FacadePawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Facade_Source_Facade_FacadePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Facade_Source_Facade_FacadePawn_h_12_SPARSE_DATA \
	Facade_Source_Facade_FacadePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Facade_Source_Facade_FacadePawn_h_12_INCLASS_NO_PURE_DECLS \
	Facade_Source_Facade_FacadePawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACADE_API UClass* StaticClass<class AFacadePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Facade_Source_Facade_FacadePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
