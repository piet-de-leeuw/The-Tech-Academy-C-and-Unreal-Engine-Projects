// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrossTheRoad/GameHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameHUD() {}
// Cross Module References
	CROSSTHEROAD_API UClass* Z_Construct_UClass_UGameHUD_NoRegister();
	CROSSTHEROAD_API UClass* Z_Construct_UClass_UGameHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CrossTheRoad();
	CROSSTHEROAD_API UFunction* Z_Construct_UFunction_UGameHUD_EndScreen();
	CROSSTHEROAD_API UFunction* Z_Construct_UFunction_UGameHUD_UpdatePlayerDeaths();
// End Cross Module References
	static FName NAME_UGameHUD_EndScreen = FName(TEXT("EndScreen"));
	void UGameHUD::EndScreen()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGameHUD_EndScreen),NULL);
	}
	static FName NAME_UGameHUD_UpdatePlayerDeaths = FName(TEXT("UpdatePlayerDeaths"));
	void UGameHUD::UpdatePlayerDeaths(int32 PlayerDeaths)
	{
		GameHUD_eventUpdatePlayerDeaths_Parms Parms;
		Parms.PlayerDeaths=PlayerDeaths;
		ProcessEvent(FindFunctionChecked(NAME_UGameHUD_UpdatePlayerDeaths),&Parms);
	}
	void UGameHUD::StaticRegisterNativesUGameHUD()
	{
	}
	struct Z_Construct_UFunction_UGameHUD_EndScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameHUD_EndScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "GameHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameHUD_EndScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameHUD, nullptr, "EndScreen", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameHUD_EndScreen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameHUD_EndScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameHUD_EndScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameHUD_EndScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameHUD_UpdatePlayerDeaths_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayerDeaths;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGameHUD_UpdatePlayerDeaths_Statics::NewProp_PlayerDeaths = { "PlayerDeaths", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameHUD_eventUpdatePlayerDeaths_Parms, PlayerDeaths), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameHUD_UpdatePlayerDeaths_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameHUD_UpdatePlayerDeaths_Statics::NewProp_PlayerDeaths,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameHUD_UpdatePlayerDeaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "GameHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameHUD_UpdatePlayerDeaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameHUD, nullptr, "UpdatePlayerDeaths", sizeof(GameHUD_eventUpdatePlayerDeaths_Parms), Z_Construct_UFunction_UGameHUD_UpdatePlayerDeaths_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameHUD_UpdatePlayerDeaths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameHUD_UpdatePlayerDeaths_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameHUD_UpdatePlayerDeaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameHUD_UpdatePlayerDeaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameHUD_UpdatePlayerDeaths_Statics::FuncParams);
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
		(UObject* (*)())Z_Construct_UPackage__Script_CrossTheRoad,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameHUD_EndScreen, "EndScreen" }, // 696469320
		{ &Z_Construct_UFunction_UGameHUD_UpdatePlayerDeaths, "UpdatePlayerDeaths" }, // 378786468
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
	IMPLEMENT_CLASS(UGameHUD, 3875455551);
	template<> CROSSTHEROAD_API UClass* StaticClass<UGameHUD>()
	{
		return UGameHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameHUD(Z_Construct_UClass_UGameHUD, &UGameHUD::StaticClass, TEXT("/Script/CrossTheRoad"), TEXT("UGameHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
