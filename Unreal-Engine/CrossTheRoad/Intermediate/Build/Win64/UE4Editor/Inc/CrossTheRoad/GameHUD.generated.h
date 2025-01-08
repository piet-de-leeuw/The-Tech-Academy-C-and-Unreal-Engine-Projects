// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CROSSTHEROAD_GameHUD_generated_h
#error "GameHUD.generated.h already included, missing '#pragma once' in GameHUD.h"
#endif
#define CROSSTHEROAD_GameHUD_generated_h

#define CrossTheRoad_Source_CrossTheRoad_GameHUD_h_15_RPC_WRAPPERS
#define CrossTheRoad_Source_CrossTheRoad_GameHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define CrossTheRoad_Source_CrossTheRoad_GameHUD_h_15_EVENT_PARMS \
	struct GameHUD_eventUpdatePlayerDeaths_Parms \
	{ \
		int32 PlayerDeaths; \
	};


#define CrossTheRoad_Source_CrossTheRoad_GameHUD_h_15_CALLBACK_WRAPPERS
#define CrossTheRoad_Source_CrossTheRoad_GameHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameHUD(); \
	friend struct Z_Construct_UClass_UGameHUD_Statics; \
public: \
	DECLARE_CLASS(UGameHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CrossTheRoad"), NO_API) \
	DECLARE_SERIALIZER(UGameHUD)


#define CrossTheRoad_Source_CrossTheRoad_GameHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGameHUD(); \
	friend struct Z_Construct_UClass_UGameHUD_Statics; \
public: \
	DECLARE_CLASS(UGameHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CrossTheRoad"), NO_API) \
	DECLARE_SERIALIZER(UGameHUD)


#define CrossTheRoad_Source_CrossTheRoad_GameHUD_h_15_STANDARD_CONSTRUCTORS \
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


#define CrossTheRoad_Source_CrossTheRoad_GameHUD_h_15_ENHANCED_CONSTRUCTORS \
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


#define CrossTheRoad_Source_CrossTheRoad_GameHUD_h_15_PRIVATE_PROPERTY_OFFSET
#define CrossTheRoad_Source_CrossTheRoad_GameHUD_h_12_PROLOG \
	CrossTheRoad_Source_CrossTheRoad_GameHUD_h_15_EVENT_PARMS


#define CrossTheRoad_Source_CrossTheRoad_GameHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossTheRoad_Source_CrossTheRoad_GameHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	CrossTheRoad_Source_CrossTheRoad_GameHUD_h_15_RPC_WRAPPERS \
	CrossTheRoad_Source_CrossTheRoad_GameHUD_h_15_CALLBACK_WRAPPERS \
	CrossTheRoad_Source_CrossTheRoad_GameHUD_h_15_INCLASS \
	CrossTheRoad_Source_CrossTheRoad_GameHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CrossTheRoad_Source_CrossTheRoad_GameHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossTheRoad_Source_CrossTheRoad_GameHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	CrossTheRoad_Source_CrossTheRoad_GameHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CrossTheRoad_Source_CrossTheRoad_GameHUD_h_15_CALLBACK_WRAPPERS \
	CrossTheRoad_Source_CrossTheRoad_GameHUD_h_15_INCLASS_NO_PURE_DECLS \
	CrossTheRoad_Source_CrossTheRoad_GameHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CROSSTHEROAD_API UClass* StaticClass<class UGameHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CrossTheRoad_Source_CrossTheRoad_GameHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
