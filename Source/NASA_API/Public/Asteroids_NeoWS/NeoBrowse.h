// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Misc/DateTime.h"
#include "Http.h"
#include "NeoBrowse.generated.h"

USTRUCT(BlueprintType)
struct FLinks
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    FString next;

    UPROPERTY(BlueprintReadOnly)
    FString previous;

    UPROPERTY(BlueprintReadOnly)
    FString self;
};

USTRUCT(BlueprintType)
struct FPage
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    int32 size;

    UPROPERTY(BlueprintReadOnly)
    int32 total_elements;

    UPROPERTY(BlueprintReadOnly)
    int32 total_pages;

    UPROPERTY(BlueprintReadOnly)
    int32 number;
};

USTRUCT(BlueprintType)
struct FEstimatedDiameterRange
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    float estimated_diameter_min;

    UPROPERTY(BlueprintReadOnly)
    float estimated_diameter_max;
};

USTRUCT(BlueprintType)
struct FEstimatedDiameter
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    FEstimatedDiameterRange kilometers;

    UPROPERTY(BlueprintReadOnly)
    FEstimatedDiameterRange meters;

    UPROPERTY(BlueprintReadOnly)
    FEstimatedDiameterRange miles;

    UPROPERTY(BlueprintReadOnly)
    FEstimatedDiameterRange feet;
};

USTRUCT(BlueprintType)
struct FCloseApproachData
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    FString close_approach_date;

    UPROPERTY(BlueprintReadOnly)
    FString close_approach_date_full;

    UPROPERTY(BlueprintReadOnly)
    FString kilometers_per_second;

    UPROPERTY(BlueprintReadOnly)
    FString kilometers_per_hour;

    UPROPERTY(BlueprintReadOnly)
    FString miles_per_hour;

    UPROPERTY(BlueprintReadOnly)
    FString astronomical;

    UPROPERTY(BlueprintReadOnly)
    FString lunar;

    UPROPERTY(BlueprintReadOnly)
    FString kilometers;

    UPROPERTY(BlueprintReadOnly)
    FString miles;

    UPROPERTY(BlueprintReadOnly)
    FString orbiting_body;
};

USTRUCT(BlueprintType)
struct FNearEarthObjects
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    TArray<FString> links;

    UPROPERTY(BlueprintReadOnly)
    int32 id;

    UPROPERTY(BlueprintReadOnly)
    FString neo_reference_id;

    UPROPERTY(BlueprintReadOnly)
    FString name;

    UPROPERTY(BlueprintReadOnly)
    FString nasa_jpl_url;

    UPROPERTY(BlueprintReadOnly)
    FString absolute_magnitude_h;

    UPROPERTY(BlueprintReadOnly)
    FEstimatedDiameter estimated_diameter;

    UPROPERTY(BlueprintReadOnly)
    bool is_potentially_hazardous_asteroid;

    UPROPERTY(BlueprintReadOnly)
    TArray<FCloseApproachData> close_approach_data;

    UPROPERTY(BlueprintReadOnly)
    bool is_sentry_object;
};

USTRUCT(BlueprintType)
struct FNeo_Data
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    FLinks links;

    UPROPERTY(BlueprintReadOnly)
    FPage page;

    UPROPERTY(BlueprintReadOnly)
    TArray<FNearEarthObjects> near_earth_objects;
};

UCLASS()
class NASA_API_API UNeoBrowse : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
	
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMarsPhotoResponsDelegate, const FNeo_Data, Neo_Data);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFail, FString, Error);

    UPROPERTY(BlueprintAssignable)
    FMarsPhotoResponsDelegate OnSuccess;

    UPROPERTY(BlueprintAssignable)
    FFail OnFail;

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Neo - Browse", Keywords = "NASA"), Category = "NASA_API")
    static UNeoBrowse* Neo_Browse();

    virtual void Activate() override;

protected:
    UFUNCTION()
    void SendHTTPRequest(const TArray<FString>& AdditionalKeys);

    void OnNEO_BrowseRequestResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully);
};