// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CrossRoadGameMode.generated.h"

class ACar;
class UGameHUD;

/**
 * 
 */
UCLASS()
class CROSSTHEROAD_API ACrossRoadGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player")
	void PlayerDeath(ACar* Player);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player")
	void PlayerWin();
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player", meta = (BlueprintProtected))
	int PlayerDeaths = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "References", meta = (BlueprintProtected))
	UGameHUD* GameHUDRef;
};
