// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Misc/DateTime.h"
#include "Http.h"
#include "GetMarsPhotosByEarthDate.generated.h"

USTRUCT(BlueprintType)
struct FCameraInfo
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    int32 id;

    UPROPERTY(BlueprintReadOnly)
    FString name;

    UPROPERTY(BlueprintReadOnly)
    int32 rover_id;

    UPROPERTY(BlueprintReadOnly)
    FString full_name;
};

USTRUCT(BlueprintType)
struct FRoverCameraInfo
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    FString name;

    UPROPERTY(BlueprintReadOnly)
    FString full_name;
};

USTRUCT(BlueprintType)
struct FRoverInfo
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    int32 id;

    UPROPERTY(BlueprintReadOnly)
    FString name;

    UPROPERTY(BlueprintReadOnly)
    FString landing_date;

    UPROPERTY(BlueprintReadOnly)
    FString launch_date;

    UPROPERTY(BlueprintReadOnly)
    FString status;

    UPROPERTY(BlueprintReadOnly)
    int32 max_sol;

    UPROPERTY(BlueprintReadOnly)
    FString max_date;

    UPROPERTY(BlueprintReadOnly)
    int32 total_photos;

    UPROPERTY(BlueprintReadOnly)
    TArray<FRoverCameraInfo> cameras;
};


USTRUCT(BlueprintType)
struct FMarsResponse
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    int32 id;

    UPROPERTY(BlueprintReadOnly)
    int32 sol;

    UPROPERTY(BlueprintReadOnly)
    FString img_src;

    UPROPERTY(BlueprintReadOnly)
    FString earth_date;

    UPROPERTY(BlueprintReadOnly)
    FCameraInfo camera;

    UPROPERTY(BlueprintReadOnly)
    FRoverInfo rover;
};

UCLASS()
class NASA_API_API UGetMarsPhotosByEarthDate : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
	
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMarsPhotoResponsDelegate, const TArray<FMarsResponse>&, MarsPhoto_Data);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFail, FString, Error);

    UPROPERTY(BlueprintAssignable)
    FMarsPhotoResponsDelegate OnSuccess;

    UPROPERTY(BlueprintAssignable)
    FFail OnFail;

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Mars photo by earth date", Keywords = "NASA"), Category = "NASA_API")
    static UGetMarsPhotosByEarthDate* GetMarsPhotoByEarthDate();

    virtual void Activate() override;

protected:
    UFUNCTION()
    void SendHTTPRequest(const TArray<FString>& AdditionalKeys);

    void OnMARSRequestResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully);
};