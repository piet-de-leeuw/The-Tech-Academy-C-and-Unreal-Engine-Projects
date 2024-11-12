// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PONG_Boundary_generated_h
#error "Boundary.generated.h already included, missing '#pragma once' in Boundary.h"
#endif
#define PONG_Boundary_generated_h

#define Pong_Source_Pong_Boundary_h_15_RPC_WRAPPERS
#define Pong_Source_Pong_Boundary_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Pong_Source_Pong_Boundary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoundary(); \
	friend struct Z_Construct_UClass_ABoundary_Statics; \
public: \
	DECLARE_CLASS(ABoundary, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(ABoundary)


#define Pong_Source_Pong_Boundary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABoundary(); \
	friend struct Z_Construct_UClass_ABoundary_Statics; \
public: \
	DECLARE_CLASS(ABoundary, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(ABoundary)


#define Pong_Source_Pong_Boundary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoundary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoundary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoundary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoundary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoundary(ABoundary&&); \
	NO_API ABoundary(const ABoundary&); \
public:


#define Pong_Source_Pong_Boundary_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoundary(ABoundary&&); \
	NO_API ABoundary(const ABoundary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoundary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoundary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoundary)


#define Pong_Source_Pong_Boundary_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IsGoal() { return STRUCT_OFFSET(ABoundary, IsGoal); } \
	FORCEINLINE static uint32 __PPO__IsLeftGoal() { return STRUCT_OFFSET(ABoundary, IsLeftGoal); } \
	FORCEINLINE static uint32 __PPO__GameModeRef() { return STRUCT_OFFSET(ABoundary, GameModeRef); } \
	FORCEINLINE static uint32 __PPO__Bounds() { return STRUCT_OFFSET(ABoundary, Bounds); }


#define Pong_Source_Pong_Boundary_h_12_PROLOG
#define Pong_Source_Pong_Boundary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_Source_Pong_Boundary_h_15_PRIVATE_PROPERTY_OFFSET \
	Pong_Source_Pong_Boundary_h_15_RPC_WRAPPERS \
	Pong_Source_Pong_Boundary_h_15_INCLASS \
	Pong_Source_Pong_Boundary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pong_Source_Pong_Boundary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_Source_Pong_Boundary_h_15_PRIVATE_PROPERTY_OFFSET \
	Pong_Source_Pong_Boundary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Pong_Source_Pong_Boundary_h_15_INCLASS_NO_PURE_DECLS \
	Pong_Source_Pong_Boundary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PONG_API UClass* StaticClass<class ABoundary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pong_Source_Pong_Boundary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
