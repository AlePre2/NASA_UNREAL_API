// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NASA_API/Public/Asteroids_NeoWS/NeoBrowse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeoBrowse() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	NASA_API_API UClass* Z_Construct_UClass_UNeoBrowse();
	NASA_API_API UClass* Z_Construct_UClass_UNeoBrowse_NoRegister();
	NASA_API_API UFunction* Z_Construct_UDelegateFunction_UNeoBrowse_Fail__DelegateSignature();
	NASA_API_API UFunction* Z_Construct_UDelegateFunction_UNeoBrowse_MarsPhotoResponsDelegate__DelegateSignature();
	NASA_API_API UScriptStruct* Z_Construct_UScriptStruct_FCloseApproachData();
	NASA_API_API UScriptStruct* Z_Construct_UScriptStruct_FEstimatedDiameter();
	NASA_API_API UScriptStruct* Z_Construct_UScriptStruct_FEstimatedDiameterRange();
	NASA_API_API UScriptStruct* Z_Construct_UScriptStruct_FLinks();
	NASA_API_API UScriptStruct* Z_Construct_UScriptStruct_FNearEarthObjects();
	NASA_API_API UScriptStruct* Z_Construct_UScriptStruct_FNeo_Data();
	NASA_API_API UScriptStruct* Z_Construct_UScriptStruct_FPage();
	UPackage* Z_Construct_UPackage__Script_NASA_API();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Links;
class UScriptStruct* FLinks::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Links.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Links.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLinks, (UObject*)Z_Construct_UPackage__Script_NASA_API(), TEXT("Links"));
	}
	return Z_Registration_Info_UScriptStruct_Links.OuterSingleton;
}
template<> NASA_API_API UScriptStruct* StaticStruct<FLinks>()
{
	return FLinks::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLinks_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_next_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_next;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_previous_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_previous;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_self_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_self;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinks_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLinks_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLinks>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinks_Statics::NewProp_next_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLinks_Statics::NewProp_next = { "next", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLinks, next), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinks_Statics::NewProp_next_MetaData), Z_Construct_UScriptStruct_FLinks_Statics::NewProp_next_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinks_Statics::NewProp_previous_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLinks_Statics::NewProp_previous = { "previous", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLinks, previous), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinks_Statics::NewProp_previous_MetaData), Z_Construct_UScriptStruct_FLinks_Statics::NewProp_previous_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinks_Statics::NewProp_self_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLinks_Statics::NewProp_self = { "self", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLinks, self), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinks_Statics::NewProp_self_MetaData), Z_Construct_UScriptStruct_FLinks_Statics::NewProp_self_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLinks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinks_Statics::NewProp_next,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinks_Statics::NewProp_previous,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinks_Statics::NewProp_self,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLinks_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NASA_API,
		nullptr,
		&NewStructOps,
		"Links",
		Z_Construct_UScriptStruct_FLinks_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinks_Statics::PropPointers),
		sizeof(FLinks),
		alignof(FLinks),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinks_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLinks_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinks_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLinks()
	{
		if (!Z_Registration_Info_UScriptStruct_Links.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Links.InnerSingleton, Z_Construct_UScriptStruct_FLinks_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Links.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Page;
class UScriptStruct* FPage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Page.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Page.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPage, (UObject*)Z_Construct_UPackage__Script_NASA_API(), TEXT("Page"));
	}
	return Z_Registration_Info_UScriptStruct_Page.OuterSingleton;
}
template<> NASA_API_API UScriptStruct* StaticStruct<FPage>()
{
	return FPage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_size_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_total_elements_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_total_elements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_total_pages_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_total_pages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_number_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_number;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPage_Statics::NewProp_size_MetaData[] = {
		{ "Category", "Page" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPage_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPage, size), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPage_Statics::NewProp_size_MetaData), Z_Construct_UScriptStruct_FPage_Statics::NewProp_size_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPage_Statics::NewProp_total_elements_MetaData[] = {
		{ "Category", "Page" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPage_Statics::NewProp_total_elements = { "total_elements", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPage, total_elements), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPage_Statics::NewProp_total_elements_MetaData), Z_Construct_UScriptStruct_FPage_Statics::NewProp_total_elements_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPage_Statics::NewProp_total_pages_MetaData[] = {
		{ "Category", "Page" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPage_Statics::NewProp_total_pages = { "total_pages", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPage, total_pages), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPage_Statics::NewProp_total_pages_MetaData), Z_Construct_UScriptStruct_FPage_Statics::NewProp_total_pages_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPage_Statics::NewProp_number_MetaData[] = {
		{ "Category", "Page" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPage_Statics::NewProp_number = { "number", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPage, number), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPage_Statics::NewProp_number_MetaData), Z_Construct_UScriptStruct_FPage_Statics::NewProp_number_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPage_Statics::NewProp_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPage_Statics::NewProp_total_elements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPage_Statics::NewProp_total_pages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPage_Statics::NewProp_number,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NASA_API,
		nullptr,
		&NewStructOps,
		"Page",
		Z_Construct_UScriptStruct_FPage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPage_Statics::PropPointers),
		sizeof(FPage),
		alignof(FPage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPage_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPage_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPage()
	{
		if (!Z_Registration_Info_UScriptStruct_Page.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Page.InnerSingleton, Z_Construct_UScriptStruct_FPage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Page.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EstimatedDiameterRange;
class UScriptStruct* FEstimatedDiameterRange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EstimatedDiameterRange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EstimatedDiameterRange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEstimatedDiameterRange, (UObject*)Z_Construct_UPackage__Script_NASA_API(), TEXT("EstimatedDiameterRange"));
	}
	return Z_Registration_Info_UScriptStruct_EstimatedDiameterRange.OuterSingleton;
}
template<> NASA_API_API UScriptStruct* StaticStruct<FEstimatedDiameterRange>()
{
	return FEstimatedDiameterRange::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEstimatedDiameterRange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_estimated_diameter_min_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_estimated_diameter_min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_estimated_diameter_max_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_estimated_diameter_max;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEstimatedDiameterRange_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEstimatedDiameterRange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEstimatedDiameterRange>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEstimatedDiameterRange_Statics::NewProp_estimated_diameter_min_MetaData[] = {
		{ "Category", "EstimatedDiameterRange" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEstimatedDiameterRange_Statics::NewProp_estimated_diameter_min = { "estimated_diameter_min", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEstimatedDiameterRange, estimated_diameter_min), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEstimatedDiameterRange_Statics::NewProp_estimated_diameter_min_MetaData), Z_Construct_UScriptStruct_FEstimatedDiameterRange_Statics::NewProp_estimated_diameter_min_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEstimatedDiameterRange_Statics::NewProp_estimated_diameter_max_MetaData[] = {
		{ "Category", "EstimatedDiameterRange" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEstimatedDiameterRange_Statics::NewProp_estimated_diameter_max = { "estimated_diameter_max", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEstimatedDiameterRange, estimated_diameter_max), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEstimatedDiameterRange_Statics::NewProp_estimated_diameter_max_MetaData), Z_Construct_UScriptStruct_FEstimatedDiameterRange_Statics::NewProp_estimated_diameter_max_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEstimatedDiameterRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEstimatedDiameterRange_Statics::NewProp_estimated_diameter_min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEstimatedDiameterRange_Statics::NewProp_estimated_diameter_max,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEstimatedDiameterRange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NASA_API,
		nullptr,
		&NewStructOps,
		"EstimatedDiameterRange",
		Z_Construct_UScriptStruct_FEstimatedDiameterRange_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEstimatedDiameterRange_Statics::PropPointers),
		sizeof(FEstimatedDiameterRange),
		alignof(FEstimatedDiameterRange),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEstimatedDiameterRange_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEstimatedDiameterRange_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEstimatedDiameterRange_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEstimatedDiameterRange()
	{
		if (!Z_Registration_Info_UScriptStruct_EstimatedDiameterRange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EstimatedDiameterRange.InnerSingleton, Z_Construct_UScriptStruct_FEstimatedDiameterRange_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EstimatedDiameterRange.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EstimatedDiameter;
class UScriptStruct* FEstimatedDiameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EstimatedDiameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EstimatedDiameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEstimatedDiameter, (UObject*)Z_Construct_UPackage__Script_NASA_API(), TEXT("EstimatedDiameter"));
	}
	return Z_Registration_Info_UScriptStruct_EstimatedDiameter.OuterSingleton;
}
template<> NASA_API_API UScriptStruct* StaticStruct<FEstimatedDiameter>()
{
	return FEstimatedDiameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEstimatedDiameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_kilometers_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_kilometers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_meters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_miles_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_miles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_feet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_feet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEstimatedDiameter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::NewProp_kilometers_MetaData[] = {
		{ "Category", "EstimatedDiameter" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::NewProp_kilometers = { "kilometers", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEstimatedDiameter, kilometers), Z_Construct_UScriptStruct_FEstimatedDiameterRange, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::NewProp_kilometers_MetaData), Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::NewProp_kilometers_MetaData) }; // 3756304414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::NewProp_meters_MetaData[] = {
		{ "Category", "EstimatedDiameter" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::NewProp_meters = { "meters", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEstimatedDiameter, meters), Z_Construct_UScriptStruct_FEstimatedDiameterRange, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::NewProp_meters_MetaData), Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::NewProp_meters_MetaData) }; // 3756304414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::NewProp_miles_MetaData[] = {
		{ "Category", "EstimatedDiameter" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::NewProp_miles = { "miles", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEstimatedDiameter, miles), Z_Construct_UScriptStruct_FEstimatedDiameterRange, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::NewProp_miles_MetaData), Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::NewProp_miles_MetaData) }; // 3756304414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::NewProp_feet_MetaData[] = {
		{ "Category", "EstimatedDiameter" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::NewProp_feet = { "feet", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEstimatedDiameter, feet), Z_Construct_UScriptStruct_FEstimatedDiameterRange, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::NewProp_feet_MetaData), Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::NewProp_feet_MetaData) }; // 3756304414
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::NewProp_kilometers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::NewProp_meters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::NewProp_miles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::NewProp_feet,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NASA_API,
		nullptr,
		&NewStructOps,
		"EstimatedDiameter",
		Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::PropPointers),
		sizeof(FEstimatedDiameter),
		alignof(FEstimatedDiameter),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEstimatedDiameter()
	{
		if (!Z_Registration_Info_UScriptStruct_EstimatedDiameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EstimatedDiameter.InnerSingleton, Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EstimatedDiameter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CloseApproachData;
class UScriptStruct* FCloseApproachData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CloseApproachData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CloseApproachData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloseApproachData, (UObject*)Z_Construct_UPackage__Script_NASA_API(), TEXT("CloseApproachData"));
	}
	return Z_Registration_Info_UScriptStruct_CloseApproachData.OuterSingleton;
}
template<> NASA_API_API UScriptStruct* StaticStruct<FCloseApproachData>()
{
	return FCloseApproachData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCloseApproachData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_close_approach_date_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_close_approach_date;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_close_approach_date_full_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_close_approach_date_full;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_kilometers_per_second_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_kilometers_per_second;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_kilometers_per_hour_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_kilometers_per_hour;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_miles_per_hour_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_miles_per_hour;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_astronomical_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_astronomical;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lunar_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_lunar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_kilometers_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_kilometers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_miles_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_miles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_orbiting_body_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_orbiting_body;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloseApproachData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloseApproachData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_close_approach_date_MetaData[] = {
		{ "Category", "CloseApproachData" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_close_approach_date = { "close_approach_date", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloseApproachData, close_approach_date), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_close_approach_date_MetaData), Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_close_approach_date_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_close_approach_date_full_MetaData[] = {
		{ "Category", "CloseApproachData" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_close_approach_date_full = { "close_approach_date_full", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloseApproachData, close_approach_date_full), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_close_approach_date_full_MetaData), Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_close_approach_date_full_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_kilometers_per_second_MetaData[] = {
		{ "Category", "CloseApproachData" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_kilometers_per_second = { "kilometers_per_second", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloseApproachData, kilometers_per_second), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_kilometers_per_second_MetaData), Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_kilometers_per_second_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_kilometers_per_hour_MetaData[] = {
		{ "Category", "CloseApproachData" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_kilometers_per_hour = { "kilometers_per_hour", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloseApproachData, kilometers_per_hour), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_kilometers_per_hour_MetaData), Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_kilometers_per_hour_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_miles_per_hour_MetaData[] = {
		{ "Category", "CloseApproachData" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_miles_per_hour = { "miles_per_hour", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloseApproachData, miles_per_hour), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_miles_per_hour_MetaData), Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_miles_per_hour_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_astronomical_MetaData[] = {
		{ "Category", "CloseApproachData" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_astronomical = { "astronomical", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloseApproachData, astronomical), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_astronomical_MetaData), Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_astronomical_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_lunar_MetaData[] = {
		{ "Category", "CloseApproachData" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_lunar = { "lunar", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloseApproachData, lunar), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_lunar_MetaData), Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_lunar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_kilometers_MetaData[] = {
		{ "Category", "CloseApproachData" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_kilometers = { "kilometers", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloseApproachData, kilometers), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_kilometers_MetaData), Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_kilometers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_miles_MetaData[] = {
		{ "Category", "CloseApproachData" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_miles = { "miles", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloseApproachData, miles), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_miles_MetaData), Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_miles_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_orbiting_body_MetaData[] = {
		{ "Category", "CloseApproachData" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_orbiting_body = { "orbiting_body", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloseApproachData, orbiting_body), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_orbiting_body_MetaData), Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_orbiting_body_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloseApproachData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_close_approach_date,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_close_approach_date_full,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_kilometers_per_second,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_kilometers_per_hour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_miles_per_hour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_astronomical,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_lunar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_kilometers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_miles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewProp_orbiting_body,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloseApproachData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NASA_API,
		nullptr,
		&NewStructOps,
		"CloseApproachData",
		Z_Construct_UScriptStruct_FCloseApproachData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloseApproachData_Statics::PropPointers),
		sizeof(FCloseApproachData),
		alignof(FCloseApproachData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloseApproachData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCloseApproachData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloseApproachData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCloseApproachData()
	{
		if (!Z_Registration_Info_UScriptStruct_CloseApproachData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CloseApproachData.InnerSingleton, Z_Construct_UScriptStruct_FCloseApproachData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CloseApproachData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NearEarthObjects;
class UScriptStruct* FNearEarthObjects::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NearEarthObjects.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NearEarthObjects.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNearEarthObjects, (UObject*)Z_Construct_UPackage__Script_NASA_API(), TEXT("NearEarthObjects"));
	}
	return Z_Registration_Info_UScriptStruct_NearEarthObjects.OuterSingleton;
}
template<> NASA_API_API UScriptStruct* StaticStruct<FNearEarthObjects>()
{
	return FNearEarthObjects::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNearEarthObjects_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_links_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_links_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_links;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_neo_reference_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_neo_reference_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_nasa_jpl_url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_nasa_jpl_url;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_absolute_magnitude_h_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_absolute_magnitude_h;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_estimated_diameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_estimated_diameter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_potentially_hazardous_asteroid_MetaData[];
#endif
		static void NewProp_is_potentially_hazardous_asteroid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_potentially_hazardous_asteroid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_close_approach_data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_close_approach_data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_close_approach_data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_sentry_object_MetaData[];
#endif
		static void NewProp_is_sentry_object_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_sentry_object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNearEarthObjects_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNearEarthObjects>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_links_Inner = { "links", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_links_MetaData[] = {
		{ "Category", "NearEarthObjects" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_links = { "links", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNearEarthObjects, links), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_links_MetaData), Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_links_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_id_MetaData[] = {
		{ "Category", "NearEarthObjects" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNearEarthObjects, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_neo_reference_id_MetaData[] = {
		{ "Category", "NearEarthObjects" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_neo_reference_id = { "neo_reference_id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNearEarthObjects, neo_reference_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_neo_reference_id_MetaData), Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_neo_reference_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_name_MetaData[] = {
		{ "Category", "NearEarthObjects" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNearEarthObjects, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_nasa_jpl_url_MetaData[] = {
		{ "Category", "NearEarthObjects" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_nasa_jpl_url = { "nasa_jpl_url", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNearEarthObjects, nasa_jpl_url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_nasa_jpl_url_MetaData), Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_nasa_jpl_url_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_absolute_magnitude_h_MetaData[] = {
		{ "Category", "NearEarthObjects" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_absolute_magnitude_h = { "absolute_magnitude_h", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNearEarthObjects, absolute_magnitude_h), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_absolute_magnitude_h_MetaData), Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_absolute_magnitude_h_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_estimated_diameter_MetaData[] = {
		{ "Category", "NearEarthObjects" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_estimated_diameter = { "estimated_diameter", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNearEarthObjects, estimated_diameter), Z_Construct_UScriptStruct_FEstimatedDiameter, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_estimated_diameter_MetaData), Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_estimated_diameter_MetaData) }; // 2037535618
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_is_potentially_hazardous_asteroid_MetaData[] = {
		{ "Category", "NearEarthObjects" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_is_potentially_hazardous_asteroid_SetBit(void* Obj)
	{
		((FNearEarthObjects*)Obj)->is_potentially_hazardous_asteroid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_is_potentially_hazardous_asteroid = { "is_potentially_hazardous_asteroid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNearEarthObjects), &Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_is_potentially_hazardous_asteroid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_is_potentially_hazardous_asteroid_MetaData), Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_is_potentially_hazardous_asteroid_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_close_approach_data_Inner = { "close_approach_data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCloseApproachData, METADATA_PARAMS(0, nullptr) }; // 1904536593
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_close_approach_data_MetaData[] = {
		{ "Category", "NearEarthObjects" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_close_approach_data = { "close_approach_data", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNearEarthObjects, close_approach_data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_close_approach_data_MetaData), Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_close_approach_data_MetaData) }; // 1904536593
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_is_sentry_object_MetaData[] = {
		{ "Category", "NearEarthObjects" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_is_sentry_object_SetBit(void* Obj)
	{
		((FNearEarthObjects*)Obj)->is_sentry_object = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_is_sentry_object = { "is_sentry_object", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNearEarthObjects), &Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_is_sentry_object_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_is_sentry_object_MetaData), Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_is_sentry_object_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNearEarthObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_links_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_links,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_neo_reference_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_nasa_jpl_url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_absolute_magnitude_h,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_estimated_diameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_is_potentially_hazardous_asteroid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_close_approach_data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_close_approach_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewProp_is_sentry_object,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNearEarthObjects_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NASA_API,
		nullptr,
		&NewStructOps,
		"NearEarthObjects",
		Z_Construct_UScriptStruct_FNearEarthObjects_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNearEarthObjects_Statics::PropPointers),
		sizeof(FNearEarthObjects),
		alignof(FNearEarthObjects),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNearEarthObjects_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNearEarthObjects_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNearEarthObjects_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNearEarthObjects()
	{
		if (!Z_Registration_Info_UScriptStruct_NearEarthObjects.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NearEarthObjects.InnerSingleton, Z_Construct_UScriptStruct_FNearEarthObjects_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NearEarthObjects.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Neo_Data;
class UScriptStruct* FNeo_Data::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Neo_Data.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Neo_Data.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNeo_Data, (UObject*)Z_Construct_UPackage__Script_NASA_API(), TEXT("Neo_Data"));
	}
	return Z_Registration_Info_UScriptStruct_Neo_Data.OuterSingleton;
}
template<> NASA_API_API UScriptStruct* StaticStruct<FNeo_Data>()
{
	return FNeo_Data::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNeo_Data_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_links_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_links;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_page_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_page;
		static const UECodeGen_Private::FStructPropertyParams NewProp_near_earth_objects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_near_earth_objects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_near_earth_objects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeo_Data_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNeo_Data_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNeo_Data>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeo_Data_Statics::NewProp_links_MetaData[] = {
		{ "Category", "Neo_Data" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNeo_Data_Statics::NewProp_links = { "links", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNeo_Data, links), Z_Construct_UScriptStruct_FLinks, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeo_Data_Statics::NewProp_links_MetaData), Z_Construct_UScriptStruct_FNeo_Data_Statics::NewProp_links_MetaData) }; // 1720812800
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeo_Data_Statics::NewProp_page_MetaData[] = {
		{ "Category", "Neo_Data" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNeo_Data_Statics::NewProp_page = { "page", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNeo_Data, page), Z_Construct_UScriptStruct_FPage, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeo_Data_Statics::NewProp_page_MetaData), Z_Construct_UScriptStruct_FNeo_Data_Statics::NewProp_page_MetaData) }; // 3932311322
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNeo_Data_Statics::NewProp_near_earth_objects_Inner = { "near_earth_objects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNearEarthObjects, METADATA_PARAMS(0, nullptr) }; // 4220219191
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeo_Data_Statics::NewProp_near_earth_objects_MetaData[] = {
		{ "Category", "Neo_Data" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNeo_Data_Statics::NewProp_near_earth_objects = { "near_earth_objects", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNeo_Data, near_earth_objects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeo_Data_Statics::NewProp_near_earth_objects_MetaData), Z_Construct_UScriptStruct_FNeo_Data_Statics::NewProp_near_earth_objects_MetaData) }; // 4220219191
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNeo_Data_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeo_Data_Statics::NewProp_links,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeo_Data_Statics::NewProp_page,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeo_Data_Statics::NewProp_near_earth_objects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeo_Data_Statics::NewProp_near_earth_objects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNeo_Data_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NASA_API,
		nullptr,
		&NewStructOps,
		"Neo_Data",
		Z_Construct_UScriptStruct_FNeo_Data_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeo_Data_Statics::PropPointers),
		sizeof(FNeo_Data),
		alignof(FNeo_Data),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeo_Data_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNeo_Data_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeo_Data_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNeo_Data()
	{
		if (!Z_Registration_Info_UScriptStruct_Neo_Data.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Neo_Data.InnerSingleton, Z_Construct_UScriptStruct_FNeo_Data_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Neo_Data.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UNeoBrowse_MarsPhotoResponsDelegate__DelegateSignature_Statics
	{
		struct NeoBrowse_eventMarsPhotoResponsDelegate_Parms
		{
			FNeo_Data Neo_Data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Neo_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Neo_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UNeoBrowse_MarsPhotoResponsDelegate__DelegateSignature_Statics::NewProp_Neo_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UNeoBrowse_MarsPhotoResponsDelegate__DelegateSignature_Statics::NewProp_Neo_Data = { "Neo_Data", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NeoBrowse_eventMarsPhotoResponsDelegate_Parms, Neo_Data), Z_Construct_UScriptStruct_FNeo_Data, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNeoBrowse_MarsPhotoResponsDelegate__DelegateSignature_Statics::NewProp_Neo_Data_MetaData), Z_Construct_UDelegateFunction_UNeoBrowse_MarsPhotoResponsDelegate__DelegateSignature_Statics::NewProp_Neo_Data_MetaData) }; // 3837247241
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UNeoBrowse_MarsPhotoResponsDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UNeoBrowse_MarsPhotoResponsDelegate__DelegateSignature_Statics::NewProp_Neo_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UNeoBrowse_MarsPhotoResponsDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UNeoBrowse_MarsPhotoResponsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeoBrowse, nullptr, "MarsPhotoResponsDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UNeoBrowse_MarsPhotoResponsDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNeoBrowse_MarsPhotoResponsDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UNeoBrowse_MarsPhotoResponsDelegate__DelegateSignature_Statics::NeoBrowse_eventMarsPhotoResponsDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNeoBrowse_MarsPhotoResponsDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UNeoBrowse_MarsPhotoResponsDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNeoBrowse_MarsPhotoResponsDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UNeoBrowse_MarsPhotoResponsDelegate__DelegateSignature_Statics::NeoBrowse_eventMarsPhotoResponsDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UNeoBrowse_MarsPhotoResponsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UNeoBrowse_MarsPhotoResponsDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UNeoBrowse::FMarsPhotoResponsDelegate_DelegateWrapper(const FMulticastScriptDelegate& MarsPhotoResponsDelegate, const FNeo_Data Neo_Data)
{
	struct NeoBrowse_eventMarsPhotoResponsDelegate_Parms
	{
		FNeo_Data Neo_Data;
	};
	NeoBrowse_eventMarsPhotoResponsDelegate_Parms Parms;
	Parms.Neo_Data=Neo_Data;
	MarsPhotoResponsDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UNeoBrowse_Fail__DelegateSignature_Statics
	{
		struct NeoBrowse_eventFail_Parms
		{
			FString Error;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UNeoBrowse_Fail__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NeoBrowse_eventFail_Parms, Error), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UNeoBrowse_Fail__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UNeoBrowse_Fail__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UNeoBrowse_Fail__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UNeoBrowse_Fail__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeoBrowse, nullptr, "Fail__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UNeoBrowse_Fail__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNeoBrowse_Fail__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UNeoBrowse_Fail__DelegateSignature_Statics::NeoBrowse_eventFail_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNeoBrowse_Fail__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UNeoBrowse_Fail__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNeoBrowse_Fail__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UNeoBrowse_Fail__DelegateSignature_Statics::NeoBrowse_eventFail_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UNeoBrowse_Fail__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UNeoBrowse_Fail__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UNeoBrowse::FFail_DelegateWrapper(const FMulticastScriptDelegate& Fail, const FString& Error)
{
	struct NeoBrowse_eventFail_Parms
	{
		FString Error;
	};
	NeoBrowse_eventFail_Parms Parms;
	Parms.Error=Error;
	Fail.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UNeoBrowse::execSendHTTPRequest)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_AdditionalKeys);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendHTTPRequest(Z_Param_Out_AdditionalKeys);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeoBrowse::execNeo_Browse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNeoBrowse**)Z_Param__Result=UNeoBrowse::Neo_Browse();
		P_NATIVE_END;
	}
	void UNeoBrowse::StaticRegisterNativesUNeoBrowse()
	{
		UClass* Class = UNeoBrowse::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Neo_Browse", &UNeoBrowse::execNeo_Browse },
			{ "SendHTTPRequest", &UNeoBrowse::execSendHTTPRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNeoBrowse_Neo_Browse_Statics
	{
		struct NeoBrowse_eventNeo_Browse_Parms
		{
			UNeoBrowse* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNeoBrowse_Neo_Browse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NeoBrowse_eventNeo_Browse_Parms, ReturnValue), Z_Construct_UClass_UNeoBrowse_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeoBrowse_Neo_Browse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeoBrowse_Neo_Browse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeoBrowse_Neo_Browse_Statics::Function_MetaDataParams[] = {
		{ "Category", "NASA_API" },
		{ "DisplayName", "Neo - Browse" },
		{ "Keywords", "NASA" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeoBrowse_Neo_Browse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeoBrowse, nullptr, "Neo_Browse", nullptr, nullptr, Z_Construct_UFunction_UNeoBrowse_Neo_Browse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeoBrowse_Neo_Browse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNeoBrowse_Neo_Browse_Statics::NeoBrowse_eventNeo_Browse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNeoBrowse_Neo_Browse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNeoBrowse_Neo_Browse_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNeoBrowse_Neo_Browse_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNeoBrowse_Neo_Browse_Statics::NeoBrowse_eventNeo_Browse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNeoBrowse_Neo_Browse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeoBrowse_Neo_Browse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeoBrowse_SendHTTPRequest_Statics
	{
		struct NeoBrowse_eventSendHTTPRequest_Parms
		{
			TArray<FString> AdditionalKeys;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNeoBrowse_SendHTTPRequest_Statics::NewProp_AdditionalKeys_Inner = { "AdditionalKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeoBrowse_SendHTTPRequest_Statics::NewProp_AdditionalKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNeoBrowse_SendHTTPRequest_Statics::NewProp_AdditionalKeys = { "AdditionalKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NeoBrowse_eventSendHTTPRequest_Parms, AdditionalKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNeoBrowse_SendHTTPRequest_Statics::NewProp_AdditionalKeys_MetaData), Z_Construct_UFunction_UNeoBrowse_SendHTTPRequest_Statics::NewProp_AdditionalKeys_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeoBrowse_SendHTTPRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeoBrowse_SendHTTPRequest_Statics::NewProp_AdditionalKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeoBrowse_SendHTTPRequest_Statics::NewProp_AdditionalKeys,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeoBrowse_SendHTTPRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeoBrowse_SendHTTPRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeoBrowse, nullptr, "SendHTTPRequest", nullptr, nullptr, Z_Construct_UFunction_UNeoBrowse_SendHTTPRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeoBrowse_SendHTTPRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNeoBrowse_SendHTTPRequest_Statics::NeoBrowse_eventSendHTTPRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNeoBrowse_SendHTTPRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNeoBrowse_SendHTTPRequest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNeoBrowse_SendHTTPRequest_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNeoBrowse_SendHTTPRequest_Statics::NeoBrowse_eventSendHTTPRequest_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNeoBrowse_SendHTTPRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeoBrowse_SendHTTPRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNeoBrowse);
	UClass* Z_Construct_UClass_UNeoBrowse_NoRegister()
	{
		return UNeoBrowse::StaticClass();
	}
	struct Z_Construct_UClass_UNeoBrowse_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNeoBrowse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NASA_API,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNeoBrowse_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UNeoBrowse_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UNeoBrowse_Fail__DelegateSignature, "Fail__DelegateSignature" }, // 3785545584
		{ &Z_Construct_UDelegateFunction_UNeoBrowse_MarsPhotoResponsDelegate__DelegateSignature, "MarsPhotoResponsDelegate__DelegateSignature" }, // 1534227597
		{ &Z_Construct_UFunction_UNeoBrowse_Neo_Browse, "Neo_Browse" }, // 2181811059
		{ &Z_Construct_UFunction_UNeoBrowse_SendHTTPRequest, "SendHTTPRequest" }, // 2664019212
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNeoBrowse_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeoBrowse_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Asteroids_NeoWS/NeoBrowse.h" },
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeoBrowse_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNeoBrowse_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNeoBrowse, OnSuccess), Z_Construct_UDelegateFunction_UNeoBrowse_MarsPhotoResponsDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNeoBrowse_Statics::NewProp_OnSuccess_MetaData), Z_Construct_UClass_UNeoBrowse_Statics::NewProp_OnSuccess_MetaData) }; // 1534227597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeoBrowse_Statics::NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "Public/Asteroids_NeoWS/NeoBrowse.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNeoBrowse_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNeoBrowse, OnFail), Z_Construct_UDelegateFunction_UNeoBrowse_Fail__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNeoBrowse_Statics::NewProp_OnFail_MetaData), Z_Construct_UClass_UNeoBrowse_Statics::NewProp_OnFail_MetaData) }; // 3785545584
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNeoBrowse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeoBrowse_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeoBrowse_Statics::NewProp_OnFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNeoBrowse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeoBrowse>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNeoBrowse_Statics::ClassParams = {
		&UNeoBrowse::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNeoBrowse_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNeoBrowse_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNeoBrowse_Statics::Class_MetaDataParams), Z_Construct_UClass_UNeoBrowse_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNeoBrowse_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNeoBrowse()
	{
		if (!Z_Registration_Info_UClass_UNeoBrowse.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNeoBrowse.OuterSingleton, Z_Construct_UClass_UNeoBrowse_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNeoBrowse.OuterSingleton;
	}
	template<> NASA_API_API UClass* StaticClass<UNeoBrowse>()
	{
		return UNeoBrowse::StaticClass();
	}
	UNeoBrowse::UNeoBrowse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNeoBrowse);
	UNeoBrowse::~UNeoBrowse() {}
	struct Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_Statics::ScriptStructInfo[] = {
		{ FLinks::StaticStruct, Z_Construct_UScriptStruct_FLinks_Statics::NewStructOps, TEXT("Links"), &Z_Registration_Info_UScriptStruct_Links, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLinks), 1720812800U) },
		{ FPage::StaticStruct, Z_Construct_UScriptStruct_FPage_Statics::NewStructOps, TEXT("Page"), &Z_Registration_Info_UScriptStruct_Page, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPage), 3932311322U) },
		{ FEstimatedDiameterRange::StaticStruct, Z_Construct_UScriptStruct_FEstimatedDiameterRange_Statics::NewStructOps, TEXT("EstimatedDiameterRange"), &Z_Registration_Info_UScriptStruct_EstimatedDiameterRange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEstimatedDiameterRange), 3756304414U) },
		{ FEstimatedDiameter::StaticStruct, Z_Construct_UScriptStruct_FEstimatedDiameter_Statics::NewStructOps, TEXT("EstimatedDiameter"), &Z_Registration_Info_UScriptStruct_EstimatedDiameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEstimatedDiameter), 2037535618U) },
		{ FCloseApproachData::StaticStruct, Z_Construct_UScriptStruct_FCloseApproachData_Statics::NewStructOps, TEXT("CloseApproachData"), &Z_Registration_Info_UScriptStruct_CloseApproachData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCloseApproachData), 1904536593U) },
		{ FNearEarthObjects::StaticStruct, Z_Construct_UScriptStruct_FNearEarthObjects_Statics::NewStructOps, TEXT("NearEarthObjects"), &Z_Registration_Info_UScriptStruct_NearEarthObjects, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNearEarthObjects), 4220219191U) },
		{ FNeo_Data::StaticStruct, Z_Construct_UScriptStruct_FNeo_Data_Statics::NewStructOps, TEXT("Neo_Data"), &Z_Registration_Info_UScriptStruct_Neo_Data, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNeo_Data), 3837247241U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNeoBrowse, UNeoBrowse::StaticClass, TEXT("UNeoBrowse"), &Z_Registration_Info_UClass_UNeoBrowse, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeoBrowse), 2233562991U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_1729388535(TEXT("/Script/NASA_API"),
		Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
