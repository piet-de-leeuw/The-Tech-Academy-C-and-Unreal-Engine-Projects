// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pong/Boundary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoundary() {}
// Cross Module References
	PONG_API UClass* Z_Construct_UClass_ABoundary_NoRegister();
	PONG_API UClass* Z_Construct_UClass_ABoundary();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pong();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	PONG_API UClass* Z_Construct_UClass_APongGameMode_NoRegister();
// End Cross Module References
	void ABoundary::StaticRegisterNativesABoundary()
	{
	}
	UClass* Z_Construct_UClass_ABoundary_NoRegister()
	{
		return ABoundary::StaticClass();
	}
	struct Z_Construct_UClass_ABoundary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Bounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModeRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameModeRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLeftGoal_MetaData[];
#endif
		static void NewProp_IsLeftGoal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLeftGoal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsGoal_MetaData[];
#endif
		static void NewProp_IsGoal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsGoal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoundary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Pong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoundary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Boundary.h" },
		{ "ModuleRelativePath", "Boundary.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoundary_Statics::NewProp_Bounds_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Boundary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoundary_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoundary, Bounds), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoundary_Statics::NewProp_Bounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABoundary_Statics::NewProp_Bounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoundary_Statics::NewProp_GameModeRef_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "References" },
		{ "ModuleRelativePath", "Boundary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoundary_Statics::NewProp_GameModeRef = { "GameModeRef", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoundary, GameModeRef), Z_Construct_UClass_APongGameMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoundary_Statics::NewProp_GameModeRef_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABoundary_Statics::NewProp_GameModeRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoundary_Statics::NewProp_IsLeftGoal_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Boundary Type" },
		{ "ModuleRelativePath", "Boundary.h" },
	};
#endif
	void Z_Construct_UClass_ABoundary_Statics::NewProp_IsLeftGoal_SetBit(void* Obj)
	{
		((ABoundary*)Obj)->IsLeftGoal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABoundary_Statics::NewProp_IsLeftGoal = { "IsLeftGoal", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABoundary), &Z_Construct_UClass_ABoundary_Statics::NewProp_IsLeftGoal_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABoundary_Statics::NewProp_IsLeftGoal_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABoundary_Statics::NewProp_IsLeftGoal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoundary_Statics::NewProp_IsGoal_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Boundary Type" },
		{ "ModuleRelativePath", "Boundary.h" },
	};
#endif
	void Z_Construct_UClass_ABoundary_Statics::NewProp_IsGoal_SetBit(void* Obj)
	{
		((ABoundary*)Obj)->IsGoal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABoundary_Statics::NewProp_IsGoal = { "IsGoal", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABoundary), &Z_Construct_UClass_ABoundary_Statics::NewProp_IsGoal_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABoundary_Statics::NewProp_IsGoal_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABoundary_Statics::NewProp_IsGoal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoundary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoundary_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoundary_Statics::NewProp_GameModeRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoundary_Statics::NewProp_IsLeftGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoundary_Statics::NewProp_IsGoal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoundary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoundary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoundary_Statics::ClassParams = {
		&ABoundary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABoundary_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ABoundary_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABoundary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABoundary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoundary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoundary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoundary, 3874299664);
	template<> PONG_API UClass* StaticClass<ABoundary>()
	{
		return ABoundary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoundary(Z_Construct_UClass_ABoundary, &ABoundary::StaticClass, TEXT("/Script/Pong"), TEXT("ABoundary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoundary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
