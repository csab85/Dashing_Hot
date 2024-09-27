// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NewPlayer.generated.h"

UCLASS()
class DASHING_HOT_API ANewPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANewPlayer();

	//========================
#pragma region MY VARS

	//STATUS VARS
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	float Health;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	bool bDead;


	//DASH VARS
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Dash")
	float DashSpeed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Dash")
	float DashTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Dash")
	float DashHitForce;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Dash")
	float DashCooldown;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Dash")
	FVector DashDamage;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Dash")
	FVector DashDirection;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Dash")
	bool bDashing;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Dash")
	bool bDashCoolingDown;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Dash")
	bool bCanDash;



#pragma endregion
	//========================

	//========================
#pragma region MY METHODS

	UFUNCTION(BlueprintCallable, Category = "Calculations")
	FVector2D GetMousePositionFromPlayer(FVector2D playerPosition, FVector2D mousePosition);

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
