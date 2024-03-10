// Fill out your copyright notice in the Description page of Project Settings.


#include "MarsRoverPhotos/GetMarsPhotosByEarthDate.h"
#include "NASA_API_COMMONFUNCTION.h"


void UGetMarsPhotosByEarthDate::Activate()
{
}

UGetMarsPhotosByEarthDate* UGetMarsPhotosByEarthDate::GetMarsPhotoByEarthDate()
{
    UGetMarsPhotosByEarthDate* EPICNODE = NewObject<UGetMarsPhotosByEarthDate>();

    TArray<FString> AdditionalKeys;

    EPICNODE->SendHTTPRequest(AdditionalKeys);

    return EPICNODE;
}

void UGetMarsPhotosByEarthDate::SendHTTPRequest(const TArray<FString>& AdditionalKeys)
{
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = SetupRequest();
    Request->OnProcessRequestComplete().BindUObject(this, &UGetMarsPhotosByEarthDate::OnMARSRequestResponse);
    Request->SetURL(GenerateURLStandardNasaURL("https://api.nasa.gov/mars-photos/api/v1/rovers/curiosity/photos?earth_date=2015-6-3&", AdditionalKeys));
    Request->ProcessRequest();
}

void UGetMarsPhotosByEarthDate::OnMARSRequestResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully)
{
    TArray<FMarsResponse> ResponseArray;

    if (Response.IsValid() && Response->GetResponseCode() == 200)
    {
        FString LocalHttpResult = Response->GetContentAsString();
        TSharedPtr<FJsonObject> JsonObject;
        TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(LocalHttpResult);

        if (FJsonSerializer::Deserialize(Reader, JsonObject))
        {
            const TArray<TSharedPtr<FJsonValue>>* PhotosArray;
            if (JsonObject->TryGetArrayField("photos", PhotosArray))
            {
                for (const TSharedPtr<FJsonValue>& PhotoValue : *PhotosArray)
                {
                    if (PhotoValue->Type == EJson::Object)
                    {
                        FMarsResponse SingleResponse;

                        const TSharedPtr<FJsonObject>& PhotoObject = PhotoValue->AsObject();

                        // Extract data from the photo object and populate the struct
                        PhotoObject->TryGetNumberField("id", SingleResponse.id);
                        PhotoObject->TryGetNumberField("sol", SingleResponse.sol);
                        PhotoObject->TryGetStringField("img_src", SingleResponse.img_src);
                        PhotoObject->TryGetStringField("earth_date", SingleResponse.earth_date);

                        // Extract the camera info
                        const TSharedPtr<FJsonObject>& CameraObject = PhotoObject->GetObjectField("camera");
                        CameraObject->TryGetNumberField("id", SingleResponse.camera.id);
                        CameraObject->TryGetStringField("name", SingleResponse.camera.name);
                        CameraObject->TryGetNumberField("rover_id", SingleResponse.camera.rover_id);
                        CameraObject->TryGetStringField("full_name", SingleResponse.camera.full_name);

                        // Extract the rover info
                        const TSharedPtr<FJsonObject>& RoverObject = PhotoObject->GetObjectField("rover");
                        RoverObject->TryGetNumberField("id", SingleResponse.rover.id);
                        RoverObject->TryGetStringField("name", SingleResponse.rover.name);
                        RoverObject->TryGetStringField("landing_date", SingleResponse.rover.landing_date);
                        RoverObject->TryGetStringField("launch_date", SingleResponse.rover.launch_date);
                        RoverObject->TryGetStringField("status", SingleResponse.rover.status);
                        RoverObject->TryGetNumberField("max_sol", SingleResponse.rover.max_sol);
                        RoverObject->TryGetStringField("max_date", SingleResponse.rover.max_date);
                        RoverObject->TryGetNumberField("total_photos", SingleResponse.rover.total_photos);

                        // Extract cameras array
                        const TArray<TSharedPtr<FJsonValue>>* CamerasArray;
                        if (RoverObject->TryGetArrayField("cameras", CamerasArray))
                        {
                            for (const TSharedPtr<FJsonValue>& CameraValue : *CamerasArray)
                            {
                                if (CameraValue->Type == EJson::Object)
                                {
                                    FRoverCameraInfo CameraInfo;
                                    const TSharedPtr<FJsonObject>& CameraInfoObject = CameraValue->AsObject();
                                    CameraInfoObject->TryGetStringField("name", CameraInfo.name);
                                    CameraInfoObject->TryGetStringField("full_name", CameraInfo.full_name);

                                    // Add the camera info to the rover's cameras array
                                    SingleResponse.rover.cameras.Add(CameraInfo);
                                }
                            }
                        }

                        // Add the populated struct to the array
                        ResponseArray.Add(SingleResponse);
                    }
                }
            }
        }

        OnSuccess.Broadcast(ResponseArray);
        return;
    }

    OnFail.Broadcast("ERROR");
}


