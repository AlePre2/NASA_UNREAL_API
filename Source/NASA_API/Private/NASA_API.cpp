// Copyright Epic Games, Inc. All Rights Reserved.

#include "NASA_API.h"
#include "ISettingsModule.h"
#include "ISettingsSection.h"
#include "ISettingsContainer.h"
#include "NASA_APISettings.h"  // Add this line
#include "UObject/UObjectGlobals.h"

#define LOCTEXT_NAMESPACE "FNASA_APIModule"

void FNASA_APIModule::StartupModule()
{
    ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings");
    if (SettingsModule)
    {
        SettingsModule->RegisterSettings("Project", "Plugins", "NASA API",
            LOCTEXT("NASA_APISettingsName", "NASA API"),
            LOCTEXT("NASA_APISettingsDescription", "Configure NASA API settings."),
            GetMutableDefault<UNASA_APISettings>()
        );
    }

    // Your additional startup code goes here
}

void FNASA_APIModule::ShutdownModule()
{
    // This function may be called during shutdown to clean up your module.
    // For modules that support dynamic reloading, we call this function before unloading the module.

    // Your additional shutdown code goes here
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FNASA_APIModule, NASA_API)
