// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PONG_GameHUD_generated_h
#error "GameHUD.generated.h already included, missing '#pragma once' in GameHUD.h"
#endif
#define PONG_GameHUD_generated_h

#define Pong_Source_Pong_GameHUD_h_15_RPC_WRAPPERS
#define Pong_Source_Pong_GameHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Pong_Source_Pong_GameHUD_h_15_EVENT_PARMS \
	struct GameHUD_eventUpdateAIScore_Parms \
	{ \
		int32 Score; \
	}; \
	struct GameHUD_eventUpdatePlayerScore_Parms \
	{ \
		int32 Score; \
	};


#define Pong_Source_Pong_GameHUD_h_15_CALLBACK_WRAPPERS
#define Pong_Source_Pong_GameHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameHUD(); \
	friend struct Z_Construct_UClass_UGameHUD_Statics; \
public: \
	DECLARE_CLASS(UGameHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(UGameHUD)


#define Pong_Source_Pong_GameHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGameHUD(); \
	friend struct Z_Construct_UClass_UGameHUD_Statics; \
public: \
	DECLARE_CLASS(UGameHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(UGameHUD)


#define Pong_Source_Pong_GameHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameHUD(UGameHUD&&); \
	NO_API UGameHUD(const UGameHUD&); \
public:


#define Pong_Source_Pong_GameHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameHUD(UGameHUD&&); \
	NO_API UGameHUD(const UGameHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameHUD)


#define Pong_Source_Pong_GameHUD_h_15_PRIVATE_PROPERTY_OFFSET
#define Pong_Source_Pong_GameHUD_h_12_PROLOG \
	Pong_Source_Pong_GameHUD_h_15_EVENT_PARMS


#define Pong_Source_Pong_GameHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_Source_Pong_GameHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	Pong_Source_Pong_GameHUD_h_15_RPC_WRAPPERS \
	Pong_Source_Pong_GameHUD_h_15_CALLBACK_WRAPPERS \
	Pong_Source_Pong_GameHUD_h_15_INCLASS \
	Pong_Source_Pong_GameHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pong_Source_Pong_GameHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_Source_Pong_GameHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	Pong_Source_Pong_GameHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Pong_Source_Pong_GameHUD_h_15_CALLBACK_WRAPPERS \
	Pong_Source_Pong_GameHUD_h_15_INCLASS_NO_PURE_DECLS \
	Pong_Source_Pong_GameHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PONG_API UClass* StaticClass<class UGameHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pong_Source_Pong_GameHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
