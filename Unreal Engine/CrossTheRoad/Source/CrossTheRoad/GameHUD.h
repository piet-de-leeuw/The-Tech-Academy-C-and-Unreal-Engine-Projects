// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameHUD.generated.h"

/**
 * 
 */
UCLASS()
class CROSSTHEROAD_API UGameHUD : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Score")
	void UpdatePlayerDeaths(int PlayerDeaths);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Score")
	void EndScreen();
};
