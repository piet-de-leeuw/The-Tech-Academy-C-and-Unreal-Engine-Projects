// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrossTheRoad/Car.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCar() {}
// Cross Module References
	CROSSTHEROAD_API UClass* Z_Construct_UClass_ACar_NoRegister();
	CROSSTHEROAD_API UClass* Z_Construct_UClass_ACar();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_CrossTheRoad();
	CROSSTHEROAD_API UFunction* Z_Construct_UFunction_ACar_Die();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	CROSSTHEROAD_API UClass* Z_Construct_UClass_ACrossRoadGameMode_NoRegister();
// End Cross Module References
	static FName NAME_ACar_Die = FName(TEXT("Die"));
	void ACar::Die()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACar_Die),NULL);
	}
	void ACar::StaticRegisterNativesACar()
	{
	}
	struct Z_Construct_UFunction_ACar_Die_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACar_Die_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Hit Response" },
		{ "ModuleRelativePath", "Car.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACar_Die_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACar, nullptr, "Die", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACar_Die_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACar_Die_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACar_Die()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACar_Die_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACar_NoRegister()
	{
		return ACar::StaticClass();
	}
	struct Z_Construct_UClass_ACar_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sprite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModeRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameModeRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CrossTheRoad,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACar_Die, "Die" }, // 1190878026
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACar_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Car.h" },
		{ "ModuleRelativePath", "Car.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACar_Statics::NewProp_Sprite_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Car.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACar_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACar, Sprite), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACar_Statics::NewProp_Sprite_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACar_Statics::NewProp_Sprite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACar_Statics::NewProp_Collider_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Car.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACar_Statics::NewProp_Collider = { "Collider", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACar, Collider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACar_Statics::NewProp_Collider_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACar_Statics::NewProp_Collider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACar_Statics::NewProp_GameModeRef_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "References" },
		{ "ModuleRelativePath", "Car.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACar_Statics::NewProp_GameModeRef = { "GameModeRef", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACar, GameModeRef), Z_Construct_UClass_ACrossRoadGameMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACar_Statics::NewProp_GameModeRef_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACar_Statics::NewProp_GameModeRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACar_Statics::NewProp_speed_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "FLoat" },
		{ "ModuleRelativePath", "Car.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACar_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACar, speed), METADATA_PARAMS(Z_Construct_UClass_ACar_Statics::NewProp_speed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACar_Statics::NewProp_speed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACar_Statics::NewProp_Sprite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACar_Statics::NewProp_Collider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACar_Statics::NewProp_GameModeRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACar_Statics::NewProp_speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACar_Statics::ClassParams = {
		&ACar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACar_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ACar_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACar_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACar, 2688272621);
	template<> CROSSTHEROAD_API UClass* StaticClass<ACar>()
	{
		return ACar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACar(Z_Construct_UClass_ACar, &ACar::StaticClass, TEXT("/Script/CrossTheRoad"), TEXT("ACar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
