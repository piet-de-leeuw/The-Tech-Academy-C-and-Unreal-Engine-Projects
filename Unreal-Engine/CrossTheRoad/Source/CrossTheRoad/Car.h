// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PaperSpriteComponent.h"
#include "Components/BoxComponent.h"
#include "Car.generated.h"

class ACrossRoadGameMode;

UCLASS()
class CROSSTHEROAD_API ACar : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACar();

	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Hit Response", meta = (BlueprintProtected))
	void Die();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FLoat", meta = (BlueprintProtected))
	float speed = 10.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "References", meta = (BlueprintProtected))
	ACrossRoadGameMode* GameModeRef;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision", meta = (AllowPrivateAccess = "true"))
	UBoxComponent* Collider; 

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Sprite", meta = (AllowPrivateAccess = "true"))
	UPaperSpriteComponent* Sprite;

	
};
