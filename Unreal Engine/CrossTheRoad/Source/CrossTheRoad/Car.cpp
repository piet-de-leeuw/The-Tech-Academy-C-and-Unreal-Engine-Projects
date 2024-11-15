// Fill out your copyright notice in the Description page of Project Settings.


#include "Car.h"

// Sets default values
ACar::ACar()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Collider = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));
	RootComponent = Collider;

	Sprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Sprite"));
	Sprite->SetupAttachment(RootComponent);

}

// Called every frame
void ACar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

} 


