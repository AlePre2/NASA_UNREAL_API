// Fill out your copyright notice in the Description page of Project Settings.


#include "NASA_API_COMMONFUNCTION.h"
#include "NASA_APISettings.h"

NASA_API_COMMONFUNCTION::NASA_API_COMMONFUNCTION()
{
}

NASA_API_COMMONFUNCTION::~NASA_API_COMMONFUNCTION()
{
}

FString FormatDate(const FDateTime& Date)
{
    FString FormattedDate = Date.ToString(TEXT("%Y-%m-%d"));
    return FormattedDate;
}

FString GetAPIKey()
{
    UNASA_APISettings* APISettings = GetMutableDefault<UNASA_APISettings>();
    FString APIKey = "api_key=";
    if (APISettings)
    {
        APIKey += APISettings->APIKey;
    }
    return APIKey;
}

FString AdditionalKeysStringConversion(const TArray<FString>& AdditionalKeys)
{
    FString AdditionalKeyParameters;
    for (const FString& Parameter : AdditionalKeys)
    {
        if (!AdditionalKeyParameters.IsEmpty())
        {
            AdditionalKeyParameters.AppendChar('&');
        }
        AdditionalKeyParameters += Parameter;
    }
    return AdditionalKeyParameters;
}

FString GenerateURLStandardNasaURL(FString API_Call, const TArray<FString>& AdditionalKeys)
{
    //UE_LOG(LogTemp, Warning, TEXT("%s%s&%s"), *API_Call, *GetAPIKey(), *AdditionalKeysStringConversion(AdditionalKeys));
    return FString::Printf(TEXT("%s%s&%s"), *API_Call, *GetAPIKey(), *AdditionalKeysStringConversion(AdditionalKeys));
}

TSharedRef<IHttpRequest, ESPMode::ThreadSafe> SetupRequest()
{
    FHttpModule* Http = &FHttpModule::Get();
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();
    Request->SetVerb("GET");
    Request->SetHeader("User-Agent", "X-UnrealEngine-Agent");
    Request->SetHeader("Content-Type", "application/json");
    return Request;
}




