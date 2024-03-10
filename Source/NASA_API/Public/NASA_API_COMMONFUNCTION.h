// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Http.h"

/**
 * 
 */
class NASA_API_API NASA_API_COMMONFUNCTION
{
public:
	NASA_API_COMMONFUNCTION();
	~NASA_API_COMMONFUNCTION();
};

FString FormatDate(const FDateTime& Date);

FString GetAPIKey();

FString AdditionalKeysStringConversion(const TArray<FString>& AdditionalKeys);

FString GenerateURLStandardNasaURL(FString API_Call, const TArray<FString>& AdditionalKeys);

TSharedRef<IHttpRequest, ESPMode::ThreadSafe> SetupRequest();




