// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PONG_PongGameMode_generated_h
#error "PongGameMode.generated.h already included, missing '#pragma once' in PongGameMode.h"
#endif
#define PONG_PongGameMode_generated_h

#define Pong_Source_Pong_PongGameMode_h_18_RPC_WRAPPERS
#define Pong_Source_Pong_PongGameMode_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Pong_Source_Pong_PongGameMode_h_18_EVENT_PARMS
#define Pong_Source_Pong_PongGameMode_h_18_CALLBACK_WRAPPERS
#define Pong_Source_Pong_PongGameMode_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPongGameMode(); \
	friend struct Z_Construct_UClass_APongGameMode_Statics; \
public: \
	DECLARE_CLASS(APongGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(APongGameMode)


#define Pong_Source_Pong_PongGameMode_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAPongGameMode(); \
	friend struct Z_Construct_UClass_APongGameMode_Statics; \
public: \
	DECLARE_CLASS(APongGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(APongGameMode)


#define Pong_Source_Pong_PongGameMode_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APongGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APongGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APongGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APongGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APongGameMode(APongGameMode&&); \
	NO_API APongGameMode(const APongGameMode&); \
public:


#define Pong_Source_Pong_PongGameMode_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APongGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APongGameMode(APongGameMode&&); \
	NO_API APongGameMode(const APongGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APongGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APongGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APongGameMode)


#define Pong_Source_Pong_PongGameMode_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GameHUDRef() { return STRUCT_OFFSET(APongGameMode, GameHUDRef); } \
	FORCEINLINE static uint32 __PPO__Direction() { return STRUCT_OFFSET(APongGameMode, Direction); } \
	FORCEINLINE static uint32 __PPO__BallSpeed() { return STRUCT_OFFSET(APongGameMode, BallSpeed); } \
	FORCEINLINE static uint32 __PPO__PlayerScore() { return STRUCT_OFFSET(APongGameMode, PlayerScore); } \
	FORCEINLINE static uint32 __PPO__AIScore() { return STRUCT_OFFSET(APongGameMode, AIScore); }


#define Pong_Source_Pong_PongGameMode_h_15_PROLOG \
	Pong_Source_Pong_PongGameMode_h_18_EVENT_PARMS


#define Pong_Source_Pong_PongGameMode_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_Source_Pong_PongGameMode_h_18_PRIVATE_PROPERTY_OFFSET \
	Pong_Source_Pong_PongGameMode_h_18_RPC_WRAPPERS \
	Pong_Source_Pong_PongGameMode_h_18_CALLBACK_WRAPPERS \
	Pong_Source_Pong_PongGameMode_h_18_INCLASS \
	Pong_Source_Pong_PongGameMode_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pong_Source_Pong_PongGameMode_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_Source_Pong_PongGameMode_h_18_PRIVATE_PROPERTY_OFFSET \
	Pong_Source_Pong_PongGameMode_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Pong_Source_Pong_PongGameMode_h_18_CALLBACK_WRAPPERS \
	Pong_Source_Pong_PongGameMode_h_18_INCLASS_NO_PURE_DECLS \
	Pong_Source_Pong_PongGameMode_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PONG_API UClass* StaticClass<class APongGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pong_Source_Pong_PongGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
