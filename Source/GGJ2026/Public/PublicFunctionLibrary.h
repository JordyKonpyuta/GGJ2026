// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PublicFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class GGJ2026_API UPublicFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Blueprintable)
	static bool HasFinishedRenderingPSOs();
};
