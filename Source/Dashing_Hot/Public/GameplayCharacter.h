// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameplayCharacter.generated.h"

UCLASS()
class DASHING_HOT_API AGameplayCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGameplayCharacter();

	//========================
#pragma region MY VARS

//STATS
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	float MaxHealth;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	float Health;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Dash")
	bool bDashing;

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
