// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CROSSTHEROAD_Car_generated_h
#error "Car.generated.h already included, missing '#pragma once' in Car.h"
#endif
#define CROSSTHEROAD_Car_generated_h

#define CrossTheRoad_Source_CrossTheRoad_Car_h_16_RPC_WRAPPERS
#define CrossTheRoad_Source_CrossTheRoad_Car_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define CrossTheRoad_Source_CrossTheRoad_Car_h_16_EVENT_PARMS
#define CrossTheRoad_Source_CrossTheRoad_Car_h_16_CALLBACK_WRAPPERS
#define CrossTheRoad_Source_CrossTheRoad_Car_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACar(); \
	friend struct Z_Construct_UClass_ACar_Statics; \
public: \
	DECLARE_CLASS(ACar, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CrossTheRoad"), NO_API) \
	DECLARE_SERIALIZER(ACar)


#define CrossTheRoad_Source_CrossTheRoad_Car_h_16_INCLASS \
private: \
	static void StaticRegisterNativesACar(); \
	friend struct Z_Construct_UClass_ACar_Statics; \
public: \
	DECLARE_CLASS(ACar, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CrossTheRoad"), NO_API) \
	DECLARE_SERIALIZER(ACar)


#define CrossTheRoad_Source_CrossTheRoad_Car_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACar(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACar(ACar&&); \
	NO_API ACar(const ACar&); \
public:


#define CrossTheRoad_Source_CrossTheRoad_Car_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACar(ACar&&); \
	NO_API ACar(const ACar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACar)


#define CrossTheRoad_Source_CrossTheRoad_Car_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__speed() { return STRUCT_OFFSET(ACar, speed); } \
	FORCEINLINE static uint32 __PPO__GameModeRef() { return STRUCT_OFFSET(ACar, GameModeRef); } \
	FORCEINLINE static uint32 __PPO__Collider() { return STRUCT_OFFSET(ACar, Collider); } \
	FORCEINLINE static uint32 __PPO__Sprite() { return STRUCT_OFFSET(ACar, Sprite); }


#define CrossTheRoad_Source_CrossTheRoad_Car_h_13_PROLOG \
	CrossTheRoad_Source_CrossTheRoad_Car_h_16_EVENT_PARMS


#define CrossTheRoad_Source_CrossTheRoad_Car_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossTheRoad_Source_CrossTheRoad_Car_h_16_PRIVATE_PROPERTY_OFFSET \
	CrossTheRoad_Source_CrossTheRoad_Car_h_16_RPC_WRAPPERS \
	CrossTheRoad_Source_CrossTheRoad_Car_h_16_CALLBACK_WRAPPERS \
	CrossTheRoad_Source_CrossTheRoad_Car_h_16_INCLASS \
	CrossTheRoad_Source_CrossTheRoad_Car_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CrossTheRoad_Source_CrossTheRoad_Car_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossTheRoad_Source_CrossTheRoad_Car_h_16_PRIVATE_PROPERTY_OFFSET \
	CrossTheRoad_Source_CrossTheRoad_Car_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	CrossTheRoad_Source_CrossTheRoad_Car_h_16_CALLBACK_WRAPPERS \
	CrossTheRoad_Source_CrossTheRoad_Car_h_16_INCLASS_NO_PURE_DECLS \
	CrossTheRoad_Source_CrossTheRoad_Car_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CROSSTHEROAD_API UClass* StaticClass<class ACar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CrossTheRoad_Source_CrossTheRoad_Car_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
