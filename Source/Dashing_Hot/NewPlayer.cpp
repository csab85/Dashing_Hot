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

void ANewPlayer::CalculateDamageAndPushMultiplier(float TimeDashing, float& FinalDamage, float& FinalPushForce, bool& bSuperPush)
{
	//set super push
	bSuperPush = false;

	//calculate the percentage of the dash that was used
	float DashUsage = TimeDashing / DashDuration;

	//add bonus if usage is higher than the super dash treshold
	if (DashUsage > DashSuperTreshold)
	{
		//set super push
		bSuperPush = true;

		//get how much treshold needs to get to 100%
		float ToHundredPercent = 1 - DashSuperTreshold;

		//get how higher than the treshold the dash was
		float Surpassing = DashUsage - DashSuperTreshold;

		//calculate how much percent of the super dash area was used (the smaller one)
		float ExtraMultipliyer = Surpassing / ToHundredPercent;

		//add extra to the base multiplyer
		DashUsage += ExtraMultipliyer;
	}

	//calculate final values
	FinalDamage = DashBaseDamage * DashUsage;
	FinalPushForce = DashBasePushForce * DashUsage;

	//end
	return;
}

#pragma endregion
//========================

