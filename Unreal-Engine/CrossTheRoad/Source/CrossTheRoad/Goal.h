// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Goal.generated.h"

UCLASS()
class CROSSTHEROAD_API AGoal : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGoal();

protected:

private:
	UPROPERTY(VisibleAnywhere, Category = "Collider")
	UBoxComponent* Collider;

};
