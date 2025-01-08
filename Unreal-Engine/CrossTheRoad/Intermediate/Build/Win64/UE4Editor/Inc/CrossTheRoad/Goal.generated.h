// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CROSSTHEROAD_Goal_generated_h
#error "Goal.generated.h already included, missing '#pragma once' in Goal.h"
#endif
#define CROSSTHEROAD_Goal_generated_h

#define CrossTheRoad_Source_CrossTheRoad_Goal_h_13_RPC_WRAPPERS
#define CrossTheRoad_Source_CrossTheRoad_Goal_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define CrossTheRoad_Source_CrossTheRoad_Goal_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoal(); \
	friend struct Z_Construct_UClass_AGoal_Statics; \
public: \
	DECLARE_CLASS(AGoal, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CrossTheRoad"), NO_API) \
	DECLARE_SERIALIZER(AGoal)


#define CrossTheRoad_Source_CrossTheRoad_Goal_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAGoal(); \
	friend struct Z_Construct_UClass_AGoal_Statics; \
public: \
	DECLARE_CLASS(AGoal, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CrossTheRoad"), NO_API) \
	DECLARE_SERIALIZER(AGoal)


#define CrossTheRoad_Source_CrossTheRoad_Goal_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGoal(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGoal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoal(AGoal&&); \
	NO_API AGoal(const AGoal&); \
public:


#define CrossTheRoad_Source_CrossTheRoad_Goal_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoal(AGoal&&); \
	NO_API AGoal(const AGoal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGoal)


#define CrossTheRoad_Source_CrossTheRoad_Goal_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Collider() { return STRUCT_OFFSET(AGoal, Collider); }


#define CrossTheRoad_Source_CrossTheRoad_Goal_h_10_PROLOG
#define CrossTheRoad_Source_CrossTheRoad_Goal_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossTheRoad_Source_CrossTheRoad_Goal_h_13_PRIVATE_PROPERTY_OFFSET \
	CrossTheRoad_Source_CrossTheRoad_Goal_h_13_RPC_WRAPPERS \
	CrossTheRoad_Source_CrossTheRoad_Goal_h_13_INCLASS \
	CrossTheRoad_Source_CrossTheRoad_Goal_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CrossTheRoad_Source_CrossTheRoad_Goal_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossTheRoad_Source_CrossTheRoad_Goal_h_13_PRIVATE_PROPERTY_OFFSET \
	CrossTheRoad_Source_CrossTheRoad_Goal_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	CrossTheRoad_Source_CrossTheRoad_Goal_h_13_INCLASS_NO_PURE_DECLS \
	CrossTheRoad_Source_CrossTheRoad_Goal_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CROSSTHEROAD_API UClass* StaticClass<class AGoal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CrossTheRoad_Source_CrossTheRoad_Goal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
