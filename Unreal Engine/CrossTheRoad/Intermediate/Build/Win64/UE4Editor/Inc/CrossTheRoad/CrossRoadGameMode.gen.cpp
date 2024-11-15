// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrossTheRoad/CrossRoadGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrossRoadGameMode() {}
// Cross Module References
	CROSSTHEROAD_API UClass* Z_Construct_UClass_ACrossRoadGameMode_NoRegister();
	CROSSTHEROAD_API UClass* Z_Construct_UClass_ACrossRoadGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CrossTheRoad();
	CROSSTHEROAD_API UFunction* Z_Construct_UFunction_ACrossRoadGameMode_PlayerDeath();
	CROSSTHEROAD_API UClass* Z_Construct_UClass_ACar_NoRegister();
	CROSSTHEROAD_API UFunction* Z_Construct_UFunction_ACrossRoadGameMode_PlayerWin();
	CROSSTHEROAD_API UClass* Z_Construct_UClass_UGameHUD_NoRegister();
// End Cross Module References
	static FName NAME_ACrossRoadGameMode_PlayerDeath = FName(TEXT("PlayerDeath"));
	void ACrossRoadGameMode::PlayerDeath(ACar* Player)
	{
		CrossRoadGameMode_eventPlayerDeath_Parms Parms;
		Parms.Player=Player;
		ProcessEvent(FindFunctionChecked(NAME_ACrossRoadGameMode_PlayerDeath),&Parms);
	}
	static FName NAME_ACrossRoadGameMode_PlayerWin = FName(TEXT("PlayerWin"));
	void ACrossRoadGameMode::PlayerWin()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACrossRoadGameMode_PlayerWin),NULL);
	}
	void ACrossRoadGameMode::StaticRegisterNativesACrossRoadGameMode()
	{
	}
	struct Z_Construct_UFunction_ACrossRoadGameMode_PlayerDeath_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACrossRoadGameMode_PlayerDeath_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CrossRoadGameMode_eventPlayerDeath_Parms, Player), Z_Construct_UClass_ACar_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACrossRoadGameMode_PlayerDeath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrossRoadGameMode_PlayerDeath_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrossRoadGameMode_PlayerDeath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "CrossRoadGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrossRoadGameMode_PlayerDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrossRoadGameMode, nullptr, "PlayerDeath", sizeof(CrossRoadGameMode_eventPlayerDeath_Parms), Z_Construct_UFunction_ACrossRoadGameMode_PlayerDeath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACrossRoadGameMode_PlayerDeath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACrossRoadGameMode_PlayerDeath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACrossRoadGameMode_PlayerDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACrossRoadGameMode_PlayerDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACrossRoadGameMode_PlayerDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACrossRoadGameMode_PlayerWin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrossRoadGameMode_PlayerWin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "CrossRoadGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrossRoadGameMode_PlayerWin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrossRoadGameMode, nullptr, "PlayerWin", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACrossRoadGameMode_PlayerWin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACrossRoadGameMode_PlayerWin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACrossRoadGameMode_PlayerWin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACrossRoadGameMode_PlayerWin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACrossRoadGameMode_NoRegister()
	{
		return ACrossRoadGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACrossRoadGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameHUDRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameHUDRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerDeaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayerDeaths;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrossRoadGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CrossTheRoad,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACrossRoadGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACrossRoadGameMode_PlayerDeath, "PlayerDeath" }, // 189740513
		{ &Z_Construct_UFunction_ACrossRoadGameMode_PlayerWin, "PlayerWin" }, // 2085982307
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrossRoadGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CrossRoadGameMode.h" },
		{ "ModuleRelativePath", "CrossRoadGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrossRoadGameMode_Statics::NewProp_GameHUDRef_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "References" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CrossRoadGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrossRoadGameMode_Statics::NewProp_GameHUDRef = { "GameHUDRef", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrossRoadGameMode, GameHUDRef), Z_Construct_UClass_UGameHUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACrossRoadGameMode_Statics::NewProp_GameHUDRef_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACrossRoadGameMode_Statics::NewProp_GameHUDRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrossRoadGameMode_Statics::NewProp_PlayerDeaths_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Player" },
		{ "ModuleRelativePath", "CrossRoadGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACrossRoadGameMode_Statics::NewProp_PlayerDeaths = { "PlayerDeaths", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrossRoadGameMode, PlayerDeaths), METADATA_PARAMS(Z_Construct_UClass_ACrossRoadGameMode_Statics::NewProp_PlayerDeaths_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACrossRoadGameMode_Statics::NewProp_PlayerDeaths_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACrossRoadGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrossRoadGameMode_Statics::NewProp_GameHUDRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrossRoadGameMode_Statics::NewProp_PlayerDeaths,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrossRoadGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrossRoadGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACrossRoadGameMode_Statics::ClassParams = {
		&ACrossRoadGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACrossRoadGameMode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ACrossRoadGameMode_Statics::PropPointers),
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ACrossRoadGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACrossRoadGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrossRoadGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACrossRoadGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACrossRoadGameMode, 3419137551);
	template<> CROSSTHEROAD_API UClass* StaticClass<ACrossRoadGameMode>()
	{
		return ACrossRoadGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACrossRoadGameMode(Z_Construct_UClass_ACrossRoadGameMode, &ACrossRoadGameMode::StaticClass, TEXT("/Script/CrossTheRoad"), TEXT("ACrossRoadGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrossRoadGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
