// Fill out your copyright notice in the Description page of Project Settings.


#include "Exoplanet/StarWithExoplanetList.h"
#include "NASA_API_COMMONFUNCTION.h"


void UStarWithExoplanetList::Activate()
{
}

UStarWithExoplanetList* UStarWithExoplanetList::StarWithExoplanetList()
{
    UStarWithExoplanetList* APODNODE = NewObject<UStarWithExoplanetList>();

    TArray<FString> AdditionalKeys;

    APODNODE->SendHTTPRequest(AdditionalKeys);

    return APODNODE;
}

void UStarWithExoplanetList::SendHTTPRequest(const TArray<FString>& AdditionalKeys)
{
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = SetupRequest();
    Request->OnProcessRequestComplete().BindUObject(this, &UStarWithExoplanetList::OnAPODRequestResponse);
    Request->SetURL("https://exoplanetarchive.ipac.caltech.edu/TAP/sync?query=select+distinct+hostname+from+ps+order+by+hostname+asc&format=ipac");
    Request->ProcessRequest();
}

void UStarWithExoplanetList::OnAPODRequestResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully)
{
    TArray<FString> ResponseStruct;

    TArray<FEPICResponse2> ResponseArray;

    if (Response.IsValid() && Response->GetResponseCode() == 200)
    {
        FString LocalHttpResult = Response->GetContentAsString();
        //LocalHttpResult.ParseIntoArray(ResponseStruct, TEXT("/n"), true);
        LocalHttpResult.ParseIntoArrayLines(ResponseStruct, true);

        ResponseStruct.RemoveAll([](const FString& Line) {
            return Line.StartsWith("|") && Line.EndsWith("|");
            });

        OnSuccess.Broadcast(ResponseStruct);
        return;
    }
    OnFail.Broadcast("ERROR");
}
