// Fill out your copyright notice in the Description page of Project Settings.


#include "NewPlayer.h"

// Sets default values
ANewPlayer::ANewPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANewPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANewPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Health <= 0)
	{
		bDead = true;
	}
}

// Called to bind functionality to input
void ANewPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//========================
#pragma region MY METHODS

FVector2D ANewPlayer::GetMousePositionFromPlayer(FVector2D playerPosition, FVector2D mousePosition)
{
	//get position relative to player
	FVector2D RelativePosition = mousePosition - playerPosition;

	return RelativePosition;
}

#pragma endregion
//========================

