// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class DASHING_HOT_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category = "Calculations")
	static FVector GetVectorToLocation(FVector origin, FVector target, bool reverse, bool normalize);

	UFUNCTION(BlueprintCallable, Category = "Calculations")
	static FVector GetDashFinalPoint(FVector startPosition, FVector direction, float distance);
};
