// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaperSpriteComponent.h"
#include "Components/BoxComponent.h"
#include "Boundary.generated.h"

UCLASS()
class CROSSTHEROAD_API ABoundary : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoundary();



protected:


private:
	UPROPERTY(VisibleAnywhere, Category = "Collision")
	UBoxComponent* Bounds; 
	UPROPERTY(VisibleAnywhere, Category = "Sprite")
	UPaperSpriteComponent* Sprite;

};
