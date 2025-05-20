// Fill out your copyright notice in the Description page of Project Settings.


#include "SW_AIGhost.h"

// Sets default values
ASW_AIGhost::ASW_AIGhost()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASW_AIGhost::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASW_AIGhost::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASW_AIGhost::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

