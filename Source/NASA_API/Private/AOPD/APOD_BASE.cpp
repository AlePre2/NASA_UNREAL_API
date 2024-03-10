// Fill out your copyright notice in the Description page of Project Settings.


#include "AOPD/APOD_BASE.h"
#include "NASA_API_COMMONFUNCTION.h"


void UAPOD_Base::Activate()
{
}

UAPOD_Base* UAPOD_Base::APOD(const FDateTime& Date)
{
    UAPOD_Base* APODNODE = NewObject<UAPOD_Base>();

    TArray<FString> AdditionalKeys;

    AdditionalKeys.Add(FString::Printf(TEXT("date=%s"), *FormatDate(Date)));

    APODNODE->SendHTTPRequest(AdditionalKeys);

    return APODNODE;
}

void UAPOD_Base::SendHTTPRequest(const TArray<FString>& AdditionalKeys)
{
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = SetupRequest();
    Request->OnProcessRequestComplete().BindUObject(this, &UAPOD_Base::OnAPODRequestResponse);
    Request->SetURL(GenerateURLStandardNasaURL("https://api.nasa.gov/planetary/apod?", AdditionalKeys));
    Request->ProcessRequest();
}

void UAPOD_Base::OnAPODRequestResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully)
{
    FAPODResponse ResponseStruct;

    if (Response.IsValid() && Response->GetResponseCode() == 200)
    {
        FString LocalHttpResult = Response->GetContentAsString();
        TSharedPtr<FJsonObject> JsonObject;
        TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(LocalHttpResult);

        if (FJsonSerializer::Deserialize(Reader, JsonObject))
        {
            // Extract data from the JSON object and populate the struct
            JsonObject->TryGetStringField("copyright", ResponseStruct.Copyright);
            JsonObject->TryGetStringField("date", ResponseStruct.Date);
            JsonObject->TryGetStringField("explanation", ResponseStruct.Explanation);
            JsonObject->TryGetStringField("hdurl", ResponseStruct.HdUrl);
            JsonObject->TryGetStringField("media_type", ResponseStruct.MediaType);
            JsonObject->TryGetStringField("service_version", ResponseStruct.ServiceVersion);
            JsonObject->TryGetStringField("title", ResponseStruct.Title);
            JsonObject->TryGetStringField("url", ResponseStruct.Url);
            OnSuccess.Broadcast(ResponseStruct);
            return;
        }
    }
    OnFail.Broadcast("ERROR");
}
