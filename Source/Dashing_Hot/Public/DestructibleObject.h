// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeometryCollection/GeometryCollectionActor.h"
#include "DestructibleObject.generated.h"

/**
 * 
 */
UCLASS()
class DASHING_HOT_API ADestructibleObject : public AGeometryCollectionActor
{
	GENERATED_BODY()

	public: 
		//========================
		#pragma region MY VARS

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Damage")
		float DamageMultiplier;

		#pragma endregion
		//========================
};
