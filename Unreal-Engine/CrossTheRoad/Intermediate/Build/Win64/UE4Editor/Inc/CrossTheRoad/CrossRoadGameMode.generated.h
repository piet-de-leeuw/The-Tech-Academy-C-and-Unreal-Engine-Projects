// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACar;
#ifdef CROSSTHEROAD_CrossRoadGameMode_generated_h
#error "CrossRoadGameMode.generated.h already included, missing '#pragma once' in CrossRoadGameMode.h"
#endif
#define CROSSTHEROAD_CrossRoadGameMode_generated_h

#define CrossTheRoad_Source_CrossTheRoad_CrossRoadGameMode_h_18_RPC_WRAPPERS
#define CrossTheRoad_Source_CrossTheRoad_CrossRoadGameMode_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define CrossTheRoad_Source_CrossTheRoad_CrossRoadGameMode_h_18_EVENT_PARMS \
	struct CrossRoadGameMode_eventPlayerDeath_Parms \
	{ \
		ACar* Player; \
	};


#define CrossTheRoad_Source_CrossTheRoad_CrossRoadGameMode_h_18_CALLBACK_WRAPPERS
#define CrossTheRoad_Source_CrossTheRoad_CrossRoadGameMode_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACrossRoadGameMode(); \
	friend struct Z_Construct_UClass_ACrossRoadGameMode_Statics; \
public: \
	DECLARE_CLASS(ACrossRoadGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CrossTheRoad"), NO_API) \
	DECLARE_SERIALIZER(ACrossRoadGameMode)


#define CrossTheRoad_Source_CrossTheRoad_CrossRoadGameMode_h_18_INCLASS \
private: \
	static void StaticRegisterNativesACrossRoadGameMode(); \
	friend struct Z_Construct_UClass_ACrossRoadGameMode_Statics; \
public: \
	DECLARE_CLASS(ACrossRoadGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CrossTheRoad"), NO_API) \
	DECLARE_SERIALIZER(ACrossRoadGameMode)


#define CrossTheRoad_Source_CrossTheRoad_CrossRoadGameMode_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACrossRoadGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACrossRoadGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACrossRoadGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACrossRoadGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACrossRoadGameMode(ACrossRoadGameMode&&); \
	NO_API ACrossRoadGameMode(const ACrossRoadGameMode&); \
public:


#define CrossTheRoad_Source_CrossTheRoad_CrossRoadGameMode_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACrossRoadGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACrossRoadGameMode(ACrossRoadGameMode&&); \
	NO_API ACrossRoadGameMode(const ACrossRoadGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACrossRoadGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACrossRoadGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACrossRoadGameMode)


#define CrossTheRoad_Source_CrossTheRoad_CrossRoadGameMode_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerDeaths() { return STRUCT_OFFSET(ACrossRoadGameMode, PlayerDeaths); } \
	FORCEINLINE static uint32 __PPO__GameHUDRef() { return STRUCT_OFFSET(ACrossRoadGameMode, GameHUDRef); }


#define CrossTheRoad_Source_CrossTheRoad_CrossRoadGameMode_h_15_PROLOG \
	CrossTheRoad_Source_CrossTheRoad_CrossRoadGameMode_h_18_EVENT_PARMS


#define CrossTheRoad_Source_CrossTheRoad_CrossRoadGameMode_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossTheRoad_Source_CrossTheRoad_CrossRoadGameMode_h_18_PRIVATE_PROPERTY_OFFSET \
	CrossTheRoad_Source_CrossTheRoad_CrossRoadGameMode_h_18_RPC_WRAPPERS \
	CrossTheRoad_Source_CrossTheRoad_CrossRoadGameMode_h_18_CALLBACK_WRAPPERS \
	CrossTheRoad_Source_CrossTheRoad_CrossRoadGameMode_h_18_INCLASS \
	CrossTheRoad_Source_CrossTheRoad_CrossRoadGameMode_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CrossTheRoad_Source_CrossTheRoad_CrossRoadGameMode_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossTheRoad_Source_CrossTheRoad_CrossRoadGameMode_h_18_PRIVATE_PROPERTY_OFFSET \
	CrossTheRoad_Source_CrossTheRoad_CrossRoadGameMode_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	CrossTheRoad_Source_CrossTheRoad_CrossRoadGameMode_h_18_CALLBACK_WRAPPERS \
	CrossTheRoad_Source_CrossTheRoad_CrossRoadGameMode_h_18_INCLASS_NO_PURE_DECLS \
	CrossTheRoad_Source_CrossTheRoad_CrossRoadGameMode_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CROSSTHEROAD_API UClass* StaticClass<class ACrossRoadGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CrossTheRoad_Source_CrossTheRoad_CrossRoadGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
