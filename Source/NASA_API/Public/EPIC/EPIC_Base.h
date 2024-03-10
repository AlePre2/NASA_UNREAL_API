// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Misc/DateTime.h"
#include "Http.h"
#include "EPIC_Base.generated.h"

USTRUCT(BlueprintType)
struct FEPICCoordinates
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    float lat;

    UPROPERTY(BlueprintReadOnly)
    float lon;
};


USTRUCT(BlueprintType)
struct FEPICResponse
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
    FEPICCoordinates centroid_coordinates;

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
class NASA_API_API UEPIC_Base : public UBlueprintAsyncActionBase
{
    GENERATED_BODY()

public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEPICResponsDelegate, const TArray<FEPICResponse>&, EPIC_Data);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFail, FString, Error);

    UPROPERTY(BlueprintAssignable)
    FEPICResponsDelegate OnSuccess;

    UPROPERTY(BlueprintAssignable)
    FFail OnFail;

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "EPIC", Keywords = "NASA"), Category = "NASA_API")
    static UEPIC_Base* EPIC();

    virtual void Activate() override;

protected:
    UFUNCTION()
    void SendHTTPRequest(const TArray<FString>& AdditionalKeys);

    void OnEPICRequestResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully);
};