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

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Dash")
	float dashSpeed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Dash")
	float dashTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Dash")
	float dashHitForce;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Dash")
	FVector dashDirection;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Dash")
	bool dashing;

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
