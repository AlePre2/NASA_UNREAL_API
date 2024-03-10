// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NASA_APISettings.generated.h"

/**
 * 
 */

UCLASS(config = Game, defaultconfig)
class NASA_API_API UNASA_APISettings : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(config, EditAnywhere, Category = "NASA API Settings")
	FString APIKey;
};
