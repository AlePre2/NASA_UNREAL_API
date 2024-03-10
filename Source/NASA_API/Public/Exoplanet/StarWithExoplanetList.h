// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Misc/DateTime.h"
#include "Http.h"
#include "StarWithExoplanetList.generated.h"

USTRUCT(BlueprintType)
struct FEPICResponse2
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    FString identifier;

    UPROPERTY(BlueprintReadOnly)
    FString caption;

    UPROPERTY(BlueprintReadOnly)
    FString image;

    UPROPERTY(BlueprintReadOnly)
    FString date;

    UPROPERTY(BlueprintReadOnly)
    FString version;

    UPROPERTY(BlueprintReadOnly)
    FVector dscovr_j2000_position;

    UPROPERTY(BlueprintReadOnly)
    FVector lunar_j2000_position;

    UPROPERTY(BlueprintReadOnly)
    FVector sun_j2000_position;

    UPROPERTY(BlueprintReadOnly)
    FVector4 attitude_quaternions;
};

UCLASS()
class NASA_API_API UStarWithExoplanetList : public UBlueprintAsyncActionBase
{
    GENERATED_BODY()

public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStartWithExoplanetResponsDelegate, const TArray<FString>&, Exoplanets);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFail, FString, Error);

    UPROPERTY(BlueprintAssignable)
    FStartWithExoplanetResponsDelegate OnSuccess;

    UPROPERTY(BlueprintAssignable)
    FFail OnFail;

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Star with exoplanet", Keywords = "NASA"), Category = "NASA_API")
    static UStarWithExoplanetList* StarWithExoplanetList();

    virtual void Activate() override;

protected:
    UFUNCTION()
    void SendHTTPRequest(const TArray<FString>& AdditionalKeys);

    void OnAPODRequestResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully);
};
