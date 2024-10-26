// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayCharacter.h"
#include "NewPlayer.generated.h"

UCLASS()
class DASHING_HOT_API ANewPlayer : public AGameplayCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANewPlayer();

	//========================
#pragma region MY VARS

	//DASH VARS
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Dash")
	float DashSpeed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Dash")
	float DashDuration;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Dash")
	float DashCooldown;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Dash")
	float DashBaseDamage;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Dash")
	float DashBasePushForce;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Dash")
	float DashSuperTreshold;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Dash")
	FVector DashDirection;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Dash")
	bool bDashCoolingDown;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Dash")
	bool bCanDash;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Dash")
	bool bDoubleDashing;



#pragma endregion
	//========================

	//========================
#pragma region MY METHODS

	UFUNCTION(BlueprintCallable, Category = "Calculations")
	FVector2D GetMousePositionFromPlayer(FVector2D playerPosition, FVector2D mousePosition);

	UFUNCTION(BlueprintCallable, Category = "Calculations")
	void CalculateDamageAndPushMultiplier(float TimeDashing, float &FinalDamage, float &FinalPushForce, bool& bSuperPush);

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
