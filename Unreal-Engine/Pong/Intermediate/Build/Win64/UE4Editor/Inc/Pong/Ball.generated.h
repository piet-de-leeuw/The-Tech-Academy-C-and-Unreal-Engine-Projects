// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APaddle;
#ifdef PONG_Ball_generated_h
#error "Ball.generated.h already included, missing '#pragma once' in Ball.h"
#endif
#define PONG_Ball_generated_h

#define Pong_Source_Pong_Ball_h_16_RPC_WRAPPERS
#define Pong_Source_Pong_Ball_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Pong_Source_Pong_Ball_h_16_EVENT_PARMS \
	struct Ball_eventHitPadlle_Parms \
	{ \
		APaddle* Paddle; \
	};


#define Pong_Source_Pong_Ball_h_16_CALLBACK_WRAPPERS
#define Pong_Source_Pong_Ball_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(ABall)


#define Pong_Source_Pong_Ball_h_16_INCLASS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(ABall)


#define Pong_Source_Pong_Ball_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public:


#define Pong_Source_Pong_Ball_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABall)


#define Pong_Source_Pong_Ball_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Sprite() { return STRUCT_OFFSET(ABall, Sprite); } \
	FORCEINLINE static uint32 __PPO__Sphere() { return STRUCT_OFFSET(ABall, Sphere); }


#define Pong_Source_Pong_Ball_h_13_PROLOG \
	Pong_Source_Pong_Ball_h_16_EVENT_PARMS


#define Pong_Source_Pong_Ball_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_Source_Pong_Ball_h_16_PRIVATE_PROPERTY_OFFSET \
	Pong_Source_Pong_Ball_h_16_RPC_WRAPPERS \
	Pong_Source_Pong_Ball_h_16_CALLBACK_WRAPPERS \
	Pong_Source_Pong_Ball_h_16_INCLASS \
	Pong_Source_Pong_Ball_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pong_Source_Pong_Ball_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_Source_Pong_Ball_h_16_PRIVATE_PROPERTY_OFFSET \
	Pong_Source_Pong_Ball_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Pong_Source_Pong_Ball_h_16_CALLBACK_WRAPPERS \
	Pong_Source_Pong_Ball_h_16_INCLASS_NO_PURE_DECLS \
	Pong_Source_Pong_Ball_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PONG_API UClass* StaticClass<class ABall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pong_Source_Pong_Ball_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
