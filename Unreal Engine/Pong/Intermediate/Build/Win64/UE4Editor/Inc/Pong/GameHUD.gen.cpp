// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pong/GameHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameHUD() {}
// Cross Module References
	PONG_API UClass* Z_Construct_UClass_UGameHUD_NoRegister();
	PONG_API UClass* Z_Construct_UClass_UGameHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Pong();
	PONG_API UFunction* Z_Construct_UFunction_UGameHUD_UpdateAIScore();
	PONG_API UFunction* Z_Construct_UFunction_UGameHUD_UpdatePlayerScore();
// End Cross Module References
	static FName NAME_UGameHUD_UpdateAIScore = FName(TEXT("UpdateAIScore"));
	void UGameHUD::UpdateAIScore(int32 Score)
	{
		GameHUD_eventUpdateAIScore_Parms Parms;
		Parms.Score=Score;
		ProcessEvent(FindFunctionChecked(NAME_UGameHUD_UpdateAIScore),&Parms);
	}
	static FName NAME_UGameHUD_UpdatePlayerScore = FName(TEXT("UpdatePlayerScore"));
	void UGameHUD::UpdatePlayerScore(int32 Score)
	{
		GameHUD_eventUpdatePlayerScore_Parms Parms;
		Parms.Score=Score;
		ProcessEvent(FindFunctionChecked(NAME_UGameHUD_UpdatePlayerScore),&Parms);
	}
	void UGameHUD::StaticRegisterNativesUGameHUD()
	{
	}
	struct Z_Construct_UFunction_UGameHUD_UpdateAIScore_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Score;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGameHUD_UpdateAIScore_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameHUD_eventUpdateAIScore_Parms, Score), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameHUD_UpdateAIScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameHUD_UpdateAIScore_Statics::NewProp_Score,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameHUD_UpdateAIScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "GameHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameHUD_UpdateAIScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameHUD, nullptr, "UpdateAIScore", sizeof(GameHUD_eventUpdateAIScore_Parms), Z_Construct_UFunction_UGameHUD_UpdateAIScore_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameHUD_UpdateAIScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameHUD_UpdateAIScore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameHUD_UpdateAIScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameHUD_UpdateAIScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameHUD_UpdateAIScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameHUD_UpdatePlayerScore_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Score;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGameHUD_UpdatePlayerScore_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameHUD_eventUpdatePlayerScore_Parms, Score), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameHUD_UpdatePlayerScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameHUD_UpdatePlayerScore_Statics::NewProp_Score,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameHUD_UpdatePlayerScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "GameHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameHUD_UpdatePlayerScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameHUD, nullptr, "UpdatePlayerScore", sizeof(GameHUD_eventUpdatePlayerScore_Parms), Z_Construct_UFunction_UGameHUD_UpdatePlayerScore_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameHUD_UpdatePlayerScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameHUD_UpdatePlayerScore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameHUD_UpdatePlayerScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameHUD_UpdatePlayerScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameHUD_UpdatePlayerScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameHUD_NoRegister()
	{
		return UGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_UGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Pong,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameHUD_UpdateAIScore, "UpdateAIScore" }, // 2405470916
		{ &Z_Construct_UFunction_UGameHUD_UpdatePlayerScore, "UpdatePlayerScore" }, // 584590380
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHUD_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameHUD.h" },
		{ "ModuleRelativePath", "GameHUD.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameHUD_Statics::ClassParams = {
		&UGameHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameHUD, 3159467732);
	template<> PONG_API UClass* StaticClass<UGameHUD>()
	{
		return UGameHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameHUD(Z_Construct_UClass_UGameHUD, &UGameHUD::StaticClass, TEXT("/Script/Pong"), TEXT("UGameHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
