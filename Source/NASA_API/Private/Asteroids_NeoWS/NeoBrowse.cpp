// Fill out your copyright notice in the Description page of Project Settings.


#include "Asteroids_NeoWS/NeoBrowse.h"
#include "NASA_API_COMMONFUNCTION.h"


void UNeoBrowse::Activate()
{
}

UNeoBrowse* UNeoBrowse::Neo_Browse()
{
    UNeoBrowse* EPICNODE = NewObject<UNeoBrowse>();

    TArray<FString> AdditionalKeys;

    EPICNODE->SendHTTPRequest(AdditionalKeys);

    return EPICNODE;
}

void UNeoBrowse::SendHTTPRequest(const TArray<FString>& AdditionalKeys)
{
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = SetupRequest();
    Request->OnProcessRequestComplete().BindUObject(this, &UNeoBrowse::OnNEO_BrowseRequestResponse);
    Request->SetURL(GenerateURLStandardNasaURL("https://api.nasa.gov/neo/rest/v1/neo/browse?", AdditionalKeys));
    Request->ProcessRequest();
}

void UNeoBrowse::OnNEO_BrowseRequestResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully)
{
    FNeo_Data ResponseArray;

    if (Response.IsValid() && Response->GetResponseCode() == 200)
    {
        FString LocalHttpResult = Response->GetContentAsString();
        TSharedPtr<FJsonObject> JsonObject;
        TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(LocalHttpResult);

        if (FJsonSerializer::Deserialize(Reader, JsonObject))
        {
            FNeo_Data NeoData;

            // Deserialize links
            const TSharedPtr<FJsonObject>* LinksObject;
            if (JsonObject->TryGetObjectField("links", LinksObject))
            {
                FLinks Links;
                (*LinksObject)->TryGetStringField("next", Links.next);
                (*LinksObject)->TryGetStringField("previous", Links.previous);
                (*LinksObject)->TryGetStringField("self", Links.self);
                NeoData.links = Links;
            }

            // Deserialize page
            const TSharedPtr<FJsonObject>* PageObject;
            if (JsonObject->TryGetObjectField("page", PageObject))
            {
                FPage Page;
                (*PageObject)->TryGetNumberField("size", Page.size);
                (*PageObject)->TryGetNumberField("total_elements", Page.total_elements);
                (*PageObject)->TryGetNumberField("total_pages", Page.total_pages);
                (*PageObject)->TryGetNumberField("number", Page.number);
                NeoData.page = Page;
            }

            // Deserialize near_earth_objects
            const TSharedPtr<FJsonObject>* NearEarthObjectsObject;
            UE_LOG(LogTemp, Warning, TEXT("Trying to get 'near_earth_objects' field%s"), *LocalHttpResult);
            if (JsonObject->TryGetObjectField("near_earth_objects", NearEarthObjectsObject))
            {
                UE_LOG(LogTemp, Warning, TEXT("Found 'near_earth_objects' field"));

                for (auto& DateEntry : (*NearEarthObjectsObject)->Values)
                {
                    UE_LOG(LogTemp, Warning, TEXT("Deserializing Near Earth Objects for Date: %s"), *DateEntry.Key);

                    for (const TSharedPtr<FJsonValue>& NeoJsonValue : DateEntry.Value->AsArray())
                    {
                        FNearEarthObjects NearEarthObject;
                        const TSharedPtr<FJsonObject>& NeoObject = NeoJsonValue->AsObject();

                        // Deserialize other properties of FNearEarthObjects
                        NearEarthObject.id = NeoObject->GetNumberField("id");
                        NeoObject->TryGetStringField("neo_reference_id", NearEarthObject.neo_reference_id);
                        NeoObject->TryGetStringField("name", NearEarthObject.name);
                        NeoObject->TryGetStringField("nasa_jpl_url", NearEarthObject.nasa_jpl_url);
                        NearEarthObject.absolute_magnitude_h = FString::Printf(TEXT("%.2f"), NeoObject->GetNumberField("absolute_magnitude_h"));

                        // Deserialize estimated_diameter
                        const TSharedPtr<FJsonObject>* EstimatedDiameterObject;
                        if (NeoObject->TryGetObjectField("estimated_diameter", EstimatedDiameterObject))
                        {
                            FEstimatedDiameter EstimatedDiameter;

                            // Deserialize kilometers
                            const TSharedPtr<FJsonObject>* KilometersObject;
                            if ((*EstimatedDiameterObject)->TryGetObjectField("kilometers", KilometersObject))
                            {
                                EstimatedDiameter.kilometers.estimated_diameter_min = (*KilometersObject)->GetNumberField("estimated_diameter_min");
                                EstimatedDiameter.kilometers.estimated_diameter_max = (*KilometersObject)->GetNumberField("estimated_diameter_max");
                            }

                            // Deserialize meters, miles, and feet similarly...

                            NearEarthObject.estimated_diameter = EstimatedDiameter;
                        }

                        NeoObject->TryGetBoolField("is_potentially_hazardous_asteroid", NearEarthObject.is_potentially_hazardous_asteroid);

                        // Deserialize close_approach_data
                        const TArray<TSharedPtr<FJsonValue>>* CloseApproachDataArray;
                        if (NeoObject->TryGetArrayField("close_approach_data", CloseApproachDataArray))
                        {
                            for (const TSharedPtr<FJsonValue>& CloseApproachDataValue : *CloseApproachDataArray)
                            {
                                const TSharedPtr<FJsonObject>& CloseApproachDataObject = CloseApproachDataValue->AsObject();
                                FCloseApproachData CloseApproachData;

                                // Deserialize properties of FCloseApproachData
                                CloseApproachData.close_approach_date = CloseApproachDataObject->GetStringField("close_approach_date");
                                CloseApproachData.close_approach_date_full = CloseApproachDataObject->GetStringField("close_approach_date_full");
                                // Deserialize other properties similarly...

                                NearEarthObject.close_approach_data.Add(CloseApproachData);
                            }
                        }

                        NeoObject->TryGetBoolField("is_sentry_object", NearEarthObject.is_sentry_object);

                        NeoData.near_earth_objects.Add(NearEarthObject);
                    }
                }
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("Could not find 'near_earth_objects' field in JSON response"));
            }

            ResponseArray = NeoData;
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Failed to deserialize JSON response"));
        }

        OnSuccess.Broadcast(ResponseArray);
        return;
    }

    OnFail.Broadcast("ERROR");
}





