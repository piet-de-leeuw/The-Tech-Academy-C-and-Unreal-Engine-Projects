// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pong/PongGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePongGameMode() {}
// Cross Module References
	PONG_API UClass* Z_Construct_UClass_APongGameMode_NoRegister();
	PONG_API UClass* Z_Construct_UClass_APongGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Pong();
	PONG_API UFunction* Z_Construct_UFunction_APongGameMode_IncreaseAIScore();
	PONG_API UFunction* Z_Construct_UFunction_APongGameMode_IncreasePlayerScore();
	PONG_API UFunction* Z_Construct_UFunction_APongGameMode_SpawnNewBall();
	PONG_API UClass* Z_Construct_UClass_UGameHUD_NoRegister();
	PONG_API UClass* Z_Construct_UClass_ABall_NoRegister();
// End Cross Module References
	static FName NAME_APongGameMode_IncreaseAIScore = FName(TEXT("IncreaseAIScore"));
	void APongGameMode::IncreaseAIScore()
	{
		ProcessEvent(FindFunctionChecked(NAME_APongGameMode_IncreaseAIScore),NULL);
	}
	static FName NAME_APongGameMode_IncreasePlayerScore = FName(TEXT("IncreasePlayerScore"));
	void APongGameMode::IncreasePlayerScore()
	{
		ProcessEvent(FindFunctionChecked(NAME_APongGameMode_IncreasePlayerScore),NULL);
	}
	static FName NAME_APongGameMode_SpawnNewBall = FName(TEXT("SpawnNewBall"));
	void APongGameMode::SpawnNewBall()
	{
		ProcessEvent(FindFunctionChecked(NAME_APongGameMode_SpawnNewBall),NULL);
	}
	void APongGameMode::StaticRegisterNativesAPongGameMode()
	{
	}
	struct Z_Construct_UFunction_APongGameMode_IncreaseAIScore_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APongGameMode_IncreaseAIScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "PongGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APongGameMode_IncreaseAIScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APongGameMode, nullptr, "IncreaseAIScore", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APongGameMode_IncreaseAIScore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APongGameMode_IncreaseAIScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APongGameMode_IncreaseAIScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APongGameMode_IncreaseAIScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APongGameMode_IncreasePlayerScore_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APongGameMode_IncreasePlayerScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "PongGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APongGameMode_IncreasePlayerScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APongGameMode, nullptr, "IncreasePlayerScore", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APongGameMode_IncreasePlayerScore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APongGameMode_IncreasePlayerScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APongGameMode_IncreasePlayerScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APongGameMode_IncreasePlayerScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APongGameMode_SpawnNewBall_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APongGameMode_SpawnNewBall_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic" },
		{ "ModuleRelativePath", "PongGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APongGameMode_SpawnNewBall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APongGameMode, nullptr, "SpawnNewBall", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APongGameMode_SpawnNewBall_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APongGameMode_SpawnNewBall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APongGameMode_SpawnNewBall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APongGameMode_SpawnNewBall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APongGameMode_NoRegister()
	{
		return APongGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APongGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AIScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayerScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BallSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameHUDRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameHUDRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BallRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APongGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Pong,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APongGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APongGameMode_IncreaseAIScore, "IncreaseAIScore" }, // 1023643621
		{ &Z_Construct_UFunction_APongGameMode_IncreasePlayerScore, "IncreasePlayerScore" }, // 244827255
		{ &Z_Construct_UFunction_APongGameMode_SpawnNewBall, "SpawnNewBall" }, // 2535699521
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PongGameMode.h" },
		{ "ModuleRelativePath", "PongGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongGameMode_Statics::NewProp_AIScore_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Score" },
		{ "ModuleRelativePath", "PongGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APongGameMode_Statics::NewProp_AIScore = { "AIScore", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APongGameMode, AIScore), METADATA_PARAMS(Z_Construct_UClass_APongGameMode_Statics::NewProp_AIScore_MetaData, ARRAY_COUNT(Z_Construct_UClass_APongGameMode_Statics::NewProp_AIScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongGameMode_Statics::NewProp_PlayerScore_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Score" },
		{ "ModuleRelativePath", "PongGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APongGameMode_Statics::NewProp_PlayerScore = { "PlayerScore", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APongGameMode, PlayerScore), METADATA_PARAMS(Z_Construct_UClass_APongGameMode_Statics::NewProp_PlayerScore_MetaData, ARRAY_COUNT(Z_Construct_UClass_APongGameMode_Statics::NewProp_PlayerScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongGameMode_Statics::NewProp_BallSpeed_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Float" },
		{ "ModuleRelativePath", "PongGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APongGameMode_Statics::NewProp_BallSpeed = { "BallSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APongGameMode, BallSpeed), METADATA_PARAMS(Z_Construct_UClass_APongGameMode_Statics::NewProp_BallSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_APongGameMode_Statics::NewProp_BallSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongGameMode_Statics::NewProp_Direction_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Float" },
		{ "ModuleRelativePath", "PongGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APongGameMode_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APongGameMode, Direction), METADATA_PARAMS(Z_Construct_UClass_APongGameMode_Statics::NewProp_Direction_MetaData, ARRAY_COUNT(Z_Construct_UClass_APongGameMode_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongGameMode_Statics::NewProp_GameHUDRef_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "References" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PongGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APongGameMode_Statics::NewProp_GameHUDRef = { "GameHUDRef", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APongGameMode, GameHUDRef), Z_Construct_UClass_UGameHUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APongGameMode_Statics::NewProp_GameHUDRef_MetaData, ARRAY_COUNT(Z_Construct_UClass_APongGameMode_Statics::NewProp_GameHUDRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongGameMode_Statics::NewProp_BallRef_MetaData[] = {
		{ "Category", "References" },
		{ "ModuleRelativePath", "PongGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APongGameMode_Statics::NewProp_BallRef = { "BallRef", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APongGameMode, BallRef), Z_Construct_UClass_ABall_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APongGameMode_Statics::NewProp_BallRef_MetaData, ARRAY_COUNT(Z_Construct_UClass_APongGameMode_Statics::NewProp_BallRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APongGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongGameMode_Statics::NewProp_AIScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongGameMode_Statics::NewProp_PlayerScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongGameMode_Statics::NewProp_BallSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongGameMode_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongGameMode_Statics::NewProp_GameHUDRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongGameMode_Statics::NewProp_BallRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APongGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APongGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APongGameMode_Statics::ClassParams = {
		&APongGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APongGameMode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_APongGameMode_Statics::PropPointers),
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_APongGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APongGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APongGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APongGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APongGameMode, 3152083453);
	template<> PONG_API UClass* StaticClass<APongGameMode>()
	{
		return APongGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APongGameMode(Z_Construct_UClass_APongGameMode, &APongGameMode::StaticClass, TEXT("/Script/Pong"), TEXT("APongGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APongGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
