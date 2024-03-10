// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Misc/DateTime.h"
#include "Http.h"
#include "APOD_BASE.generated.h"


USTRUCT(BlueprintType)
struct FAPODResponse
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    FString Copyright;

    UPROPERTY(BlueprintReadOnly)
    FString Date;

    UPROPERTY(BlueprintReadOnly)
    FString Explanation;

    UPROPERTY(BlueprintReadOnly)
    FString HdUrl;

    UPROPERTY(BlueprintReadOnly)
    FString MediaType;

    UPROPERTY(BlueprintReadOnly)
    FString ServiceVersion;

    UPROPERTY(BlueprintReadOnly)
    FString Title;

    UPROPERTY(BlueprintReadOnly)
    FString Url;
};

UCLASS()
class NASA_API_API UAPOD_Base : public UBlueprintAsyncActionBase
{
    GENERATED_BODY()

public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAPODResponseDelegate, FAPODResponse, APOD_Data);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFail, FString, Error);

    UPROPERTY(BlueprintAssignable)
    FAPODResponseDelegate OnSuccess;

    UPROPERTY(BlueprintAssignable)
    FFail OnFail;

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Astronomy Picture of the Day", Keywords = "NASA"), Category = "NASA_API")
    static UAPOD_Base* APOD(const FDateTime& Date);

    virtual void Activate() override;

protected:
    UFUNCTION()
    void SendHTTPRequest(const TArray<FString>& AdditionalKeys);

    void OnAPODRequestResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully);
};
