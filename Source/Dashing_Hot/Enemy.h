// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayCharacter.h"
#include "Enemy.generated.h"

UCLASS()
class DASHING_HOT_API AEnemy : public AGameplayCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();

	//========================
	#pragma region MY VARS

	//STATS
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	float Range;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	float ReloadTime;

	//KNOCKBACK
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Knockback")
	float KnockbackDuration;

	#pragma endregion
	//========================

	protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
