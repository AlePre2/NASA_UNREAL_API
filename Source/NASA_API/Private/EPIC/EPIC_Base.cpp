// Fill out your copyright notice in the Description page of Project Settings.


#include "EPIC/EPIC_Base.h"
#include "NASA_API_COMMONFUNCTION.h"


void UEPIC_Base::Activate()
{
}

UEPIC_Base* UEPIC_Base::EPIC()
{
    UEPIC_Base* EPICNODE = NewObject<UEPIC_Base>();

    TArray<FString> AdditionalKeys;

    EPICNODE->SendHTTPRequest(AdditionalKeys);

    return EPICNODE;
}

void UEPIC_Base::SendHTTPRequest(const TArray<FString>& AdditionalKeys)
{
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = SetupRequest();
    Request->OnProcessRequestComplete().BindUObject(this, &UEPIC_Base::OnEPICRequestResponse);
    Request->SetURL(GenerateURLStandardNasaURL("https://api.nasa.gov/EPIC/api/natural/images?", AdditionalKeys));
    Request->ProcessRequest();
}

void UEPIC_Base::OnEPICRequestResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully)
{
    TArray<FEPICResponse> ResponseArray;

    if (Response.IsValid() && Response->GetResponseCode() == 200)
    {
        FString LocalHttpResult = Response->GetContentAsString();
        TSharedPtr<FJsonValue> JsonValue;
        TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(LocalHttpResult);

        if (FJsonSerializer::Deserialize(Reader, JsonValue) && JsonValue->Type == EJson::Array)
        {
            const TArray<TSharedPtr<FJsonValue>>& JsonArray = JsonValue->AsArray();

            for (const TSharedPtr<FJsonValue>& ArrayElement : JsonArray)
            {
                if (ArrayElement->Type == EJson::Object)
                {
                    FEPICResponse SingleResponse;

                    const TSharedPtr<FJsonObject>& SubJsonObject = ArrayElement->AsObject();

                    // Extract data from the sub-JSON object and populate the struct
                    SubJsonObject->TryGetStringField("identifier", SingleResponse.identifier);
                    SubJsonObject->TryGetStringField("caption", SingleResponse.caption);
                    SubJsonObject->TryGetStringField("image", SingleResponse.image);
                    SubJsonObject->TryGetStringField("version", SingleResponse.version);
                    SubJsonObject->TryGetStringField("date", SingleResponse.date);

                    // Extract nested structures
                    const TSharedPtr<FJsonObject>& CoordObject = SubJsonObject->GetObjectField("centroid_coordinates");
                    CoordObject->TryGetNumberField("lat", SingleResponse.centroid_coordinates.lat);
                    CoordObject->TryGetNumberField("lon", SingleResponse.centroid_coordinates.lon);

                    const TSharedPtr<FJsonObject>& LunarObject = SubJsonObject->GetObjectField("lunar_j2000_position");
                    LunarObject->TryGetNumberField("x", SingleResponse.lunar_j2000_position.X);
                    LunarObject->TryGetNumberField("y", SingleResponse.lunar_j2000_position.Y);
                    LunarObject->TryGetNumberField("z", SingleResponse.lunar_j2000_position.Z);

                    const TSharedPtr<FJsonObject>& SunObject = SubJsonObject->GetObjectField("sun_j2000_position");
                    SunObject->TryGetNumberField("x", SingleResponse.sun_j2000_position.X);
                    SunObject->TryGetNumberField("y", SingleResponse.sun_j2000_position.Y);
                    SunObject->TryGetNumberField("z", SingleResponse.sun_j2000_position.Z);

                    const TSharedPtr<FJsonObject>& AttitudeObject = SubJsonObject->GetObjectField("attitude_quaternions");
                    AttitudeObject->TryGetNumberField("q0", SingleResponse.attitude_quaternions.X);
                    AttitudeObject->TryGetNumberField("q1", SingleResponse.attitude_quaternions.Y);
                    AttitudeObject->TryGetNumberField("q2", SingleResponse.attitude_quaternions.Z);
                    AttitudeObject->TryGetNumberField("q3", SingleResponse.attitude_quaternions.W);

                    // Add the populated struct to the array
                    ResponseArray.Add(SingleResponse);
                }
            }
        }

        OnSuccess.Broadcast(ResponseArray);
        return;
    }

    OnFail.Broadcast("ERROR");
}

