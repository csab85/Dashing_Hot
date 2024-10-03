// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

FVector UMyBlueprintFunctionLibrary::GetVectorToLocation(FVector origin, FVector target, bool reverse, bool normalize)
{
	//create final direction var
	FVector direction;

	//get direction to self if reverse
	if (reverse)
	{
		direction = origin - target;
	}

	//get direction to target if not
	else
	{
		direction = target - origin;
	}

	//normalize if asked
	if (normalize)
	{
		direction.Normalize();
	}

	return direction;
}

FVector UMyBlueprintFunctionLibrary::GetDashFinalPoint(FVector startPosition, FVector direction, float distance)
{
	FVector finalPoint = startPosition + (direction * distance);

	return finalPoint;
}

TSubclassOf<AActor> UMyBlueprintFunctionLibrary::CheckIfActorClassIsInArray(TArray<TSubclassOf<AActor>> actorsClassArray, TSubclassOf<AActor> actorClass)
{
	//create return var
	TSubclassOf<AActor> equalActorClass = nullptr;

	//check each actor in the array
	for (TSubclassOf<AActor> actualActorClass : actorsClassArray)
	{
		//see if its the same class as the given actor
		if (actualActorClass == actorClass)
		{
			//update return and break loop
			equalActorClass = actorClass;
			break;
		}
	}

	return equalActorClass;
}
