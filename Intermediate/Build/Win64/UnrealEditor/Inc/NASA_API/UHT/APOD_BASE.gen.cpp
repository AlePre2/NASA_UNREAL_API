// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NASA_API/Public/AOPD/APOD_BASE.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAPOD_BASE() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	NASA_API_API UClass* Z_Construct_UClass_UAPOD_Base();
	NASA_API_API UClass* Z_Construct_UClass_UAPOD_Base_NoRegister();
	NASA_API_API UFunction* Z_Construct_UDelegateFunction_UAPOD_Base_APODResponseDelegate__DelegateSignature();
	NASA_API_API UFunction* Z_Construct_UDelegateFunction_UAPOD_Base_Fail__DelegateSignature();
	NASA_API_API UScriptStruct* Z_Construct_UScriptStruct_FAPODResponse();
	UPackage* Z_Construct_UPackage__Script_NASA_API();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_APODResponse;
class UScriptStruct* FAPODResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_APODResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_APODResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAPODResponse, (UObject*)Z_Construct_UPackage__Script_NASA_API(), TEXT("APODResponse"));
	}
	return Z_Registration_Info_UScriptStruct_APODResponse.OuterSingleton;
}
template<> NASA_API_API UScriptStruct* StaticStruct<FAPODResponse>()
{
	return FAPODResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAPODResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Copyright_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Copyright;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Date_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Date;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Explanation_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Explanation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HdUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HdUrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MediaType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServiceVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServiceVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAPODResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AOPD/APOD_BASE.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAPODResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAPODResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_Copyright_MetaData[] = {
		{ "Category", "APODResponse" },
		{ "ModuleRelativePath", "Public/AOPD/APOD_BASE.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_Copyright = { "Copyright", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAPODResponse, Copyright), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_Copyright_MetaData), Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_Copyright_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_Date_MetaData[] = {
		{ "Category", "APODResponse" },
		{ "ModuleRelativePath", "Public/AOPD/APOD_BASE.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_Date = { "Date", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAPODResponse, Date), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_Date_MetaData), Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_Date_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_Explanation_MetaData[] = {
		{ "Category", "APODResponse" },
		{ "ModuleRelativePath", "Public/AOPD/APOD_BASE.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_Explanation = { "Explanation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAPODResponse, Explanation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_Explanation_MetaData), Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_Explanation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_HdUrl_MetaData[] = {
		{ "Category", "APODResponse" },
		{ "ModuleRelativePath", "Public/AOPD/APOD_BASE.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_HdUrl = { "HdUrl", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAPODResponse, HdUrl), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_HdUrl_MetaData), Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_HdUrl_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_MediaType_MetaData[] = {
		{ "Category", "APODResponse" },
		{ "ModuleRelativePath", "Public/AOPD/APOD_BASE.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_MediaType = { "MediaType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAPODResponse, MediaType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_MediaType_MetaData), Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_MediaType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_ServiceVersion_MetaData[] = {
		{ "Category", "APODResponse" },
		{ "ModuleRelativePath", "Public/AOPD/APOD_BASE.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_ServiceVersion = { "ServiceVersion", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAPODResponse, ServiceVersion), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_ServiceVersion_MetaData), Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_ServiceVersion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "APODResponse" },
		{ "ModuleRelativePath", "Public/AOPD/APOD_BASE.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAPODResponse, Title), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_Title_MetaData), Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_Title_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_Url_MetaData[] = {
		{ "Category", "APODResponse" },
		{ "ModuleRelativePath", "Public/AOPD/APOD_BASE.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAPODResponse, Url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_Url_MetaData), Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_Url_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAPODResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_Copyright,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_Date,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_Explanation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_HdUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_MediaType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_ServiceVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAPODResponse_Statics::NewProp_Url,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAPODResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NASA_API,
		nullptr,
		&NewStructOps,
		"APODResponse",
		Z_Construct_UScriptStruct_FAPODResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAPODResponse_Statics::PropPointers),
		sizeof(FAPODResponse),
		alignof(FAPODResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAPODResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAPODResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAPODResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAPODResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_APODResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_APODResponse.InnerSingleton, Z_Construct_UScriptStruct_FAPODResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_APODResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UAPOD_Base_APODResponseDelegate__DelegateSignature_Statics
	{
		struct APOD_Base_eventAPODResponseDelegate_Parms
		{
			FAPODResponse APOD_Data;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_APOD_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UAPOD_Base_APODResponseDelegate__DelegateSignature_Statics::NewProp_APOD_Data = { "APOD_Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOD_Base_eventAPODResponseDelegate_Parms, APOD_Data), Z_Construct_UScriptStruct_FAPODResponse, METADATA_PARAMS(0, nullptr) }; // 3037370840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAPOD_Base_APODResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAPOD_Base_APODResponseDelegate__DelegateSignature_Statics::NewProp_APOD_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAPOD_Base_APODResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AOPD/APOD_BASE.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAPOD_Base_APODResponseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAPOD_Base, nullptr, "APODResponseDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UAPOD_Base_APODResponseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAPOD_Base_APODResponseDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UAPOD_Base_APODResponseDelegate__DelegateSignature_Statics::APOD_Base_eventAPODResponseDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAPOD_Base_APODResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UAPOD_Base_APODResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAPOD_Base_APODResponseDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UAPOD_Base_APODResponseDelegate__DelegateSignature_Statics::APOD_Base_eventAPODResponseDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UAPOD_Base_APODResponseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAPOD_Base_APODResponseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UAPOD_Base::FAPODResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& APODResponseDelegate, FAPODResponse APOD_Data)
{
	struct APOD_Base_eventAPODResponseDelegate_Parms
	{
		FAPODResponse APOD_Data;
	};
	APOD_Base_eventAPODResponseDelegate_Parms Parms;
	Parms.APOD_Data=APOD_Data;
	APODResponseDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UAPOD_Base_Fail__DelegateSignature_Statics
	{
		struct APOD_Base_eventFail_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UAPOD_Base_Fail__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOD_Base_eventFail_Parms, Error), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAPOD_Base_Fail__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAPOD_Base_Fail__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAPOD_Base_Fail__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AOPD/APOD_BASE.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAPOD_Base_Fail__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAPOD_Base, nullptr, "Fail__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UAPOD_Base_Fail__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAPOD_Base_Fail__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UAPOD_Base_Fail__DelegateSignature_Statics::APOD_Base_eventFail_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAPOD_Base_Fail__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UAPOD_Base_Fail__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAPOD_Base_Fail__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UAPOD_Base_Fail__DelegateSignature_Statics::APOD_Base_eventFail_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UAPOD_Base_Fail__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAPOD_Base_Fail__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UAPOD_Base::FFail_DelegateWrapper(const FMulticastScriptDelegate& Fail, const FString& Error)
{
	struct APOD_Base_eventFail_Parms
	{
		FString Error;
	};
	APOD_Base_eventFail_Parms Parms;
	Parms.Error=Error;
	Fail.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAPOD_Base::execSendHTTPRequest)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_AdditionalKeys);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendHTTPRequest(Z_Param_Out_AdditionalKeys);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAPOD_Base::execAPOD)
	{
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_Date);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAPOD_Base**)Z_Param__Result=UAPOD_Base::APOD(Z_Param_Out_Date);
		P_NATIVE_END;
	}
	void UAPOD_Base::StaticRegisterNativesUAPOD_Base()
	{
		UClass* Class = UAPOD_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "APOD", &UAPOD_Base::execAPOD },
			{ "SendHTTPRequest", &UAPOD_Base::execSendHTTPRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAPOD_Base_APOD_Statics
	{
		struct APOD_Base_eventAPOD_Parms
		{
			FDateTime Date;
			UAPOD_Base* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Date_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Date;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAPOD_Base_APOD_Statics::NewProp_Date_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAPOD_Base_APOD_Statics::NewProp_Date = { "Date", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOD_Base_eventAPOD_Parms, Date), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAPOD_Base_APOD_Statics::NewProp_Date_MetaData), Z_Construct_UFunction_UAPOD_Base_APOD_Statics::NewProp_Date_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAPOD_Base_APOD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOD_Base_eventAPOD_Parms, ReturnValue), Z_Construct_UClass_UAPOD_Base_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAPOD_Base_APOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAPOD_Base_APOD_Statics::NewProp_Date,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAPOD_Base_APOD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAPOD_Base_APOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "NASA_API" },
		{ "DisplayName", "Astronomy Picture of the Day" },
		{ "Keywords", "NASA" },
		{ "ModuleRelativePath", "Public/AOPD/APOD_BASE.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAPOD_Base_APOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAPOD_Base, nullptr, "APOD", nullptr, nullptr, Z_Construct_UFunction_UAPOD_Base_APOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAPOD_Base_APOD_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAPOD_Base_APOD_Statics::APOD_Base_eventAPOD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAPOD_Base_APOD_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAPOD_Base_APOD_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAPOD_Base_APOD_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAPOD_Base_APOD_Statics::APOD_Base_eventAPOD_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAPOD_Base_APOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAPOD_Base_APOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAPOD_Base_SendHTTPRequest_Statics
	{
		struct APOD_Base_eventSendHTTPRequest_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAPOD_Base_SendHTTPRequest_Statics::NewProp_AdditionalKeys_Inner = { "AdditionalKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAPOD_Base_SendHTTPRequest_Statics::NewProp_AdditionalKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAPOD_Base_SendHTTPRequest_Statics::NewProp_AdditionalKeys = { "AdditionalKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOD_Base_eventSendHTTPRequest_Parms, AdditionalKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAPOD_Base_SendHTTPRequest_Statics::NewProp_AdditionalKeys_MetaData), Z_Construct_UFunction_UAPOD_Base_SendHTTPRequest_Statics::NewProp_AdditionalKeys_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAPOD_Base_SendHTTPRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAPOD_Base_SendHTTPRequest_Statics::NewProp_AdditionalKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAPOD_Base_SendHTTPRequest_Statics::NewProp_AdditionalKeys,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAPOD_Base_SendHTTPRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AOPD/APOD_BASE.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAPOD_Base_SendHTTPRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAPOD_Base, nullptr, "SendHTTPRequest", nullptr, nullptr, Z_Construct_UFunction_UAPOD_Base_SendHTTPRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAPOD_Base_SendHTTPRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAPOD_Base_SendHTTPRequest_Statics::APOD_Base_eventSendHTTPRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAPOD_Base_SendHTTPRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAPOD_Base_SendHTTPRequest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAPOD_Base_SendHTTPRequest_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAPOD_Base_SendHTTPRequest_Statics::APOD_Base_eventSendHTTPRequest_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAPOD_Base_SendHTTPRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAPOD_Base_SendHTTPRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAPOD_Base);
	UClass* Z_Construct_UClass_UAPOD_Base_NoRegister()
	{
		return UAPOD_Base::StaticClass();
	}
	struct Z_Construct_UClass_UAPOD_Base_Statics
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
	UObject* (*const Z_Construct_UClass_UAPOD_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NASA_API,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAPOD_Base_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAPOD_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAPOD_Base_APOD, "APOD" }, // 4061334198
		{ &Z_Construct_UDelegateFunction_UAPOD_Base_APODResponseDelegate__DelegateSignature, "APODResponseDelegate__DelegateSignature" }, // 2847138193
		{ &Z_Construct_UDelegateFunction_UAPOD_Base_Fail__DelegateSignature, "Fail__DelegateSignature" }, // 1767410527
		{ &Z_Construct_UFunction_UAPOD_Base_SendHTTPRequest, "SendHTTPRequest" }, // 634015092
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAPOD_Base_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAPOD_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AOPD/APOD_BASE.h" },
		{ "ModuleRelativePath", "Public/AOPD/APOD_BASE.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAPOD_Base_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/AOPD/APOD_BASE.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAPOD_Base_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAPOD_Base, OnSuccess), Z_Construct_UDelegateFunction_UAPOD_Base_APODResponseDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAPOD_Base_Statics::NewProp_OnSuccess_MetaData), Z_Construct_UClass_UAPOD_Base_Statics::NewProp_OnSuccess_MetaData) }; // 2847138193
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAPOD_Base_Statics::NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "Public/AOPD/APOD_BASE.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAPOD_Base_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAPOD_Base, OnFail), Z_Construct_UDelegateFunction_UAPOD_Base_Fail__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAPOD_Base_Statics::NewProp_OnFail_MetaData), Z_Construct_UClass_UAPOD_Base_Statics::NewProp_OnFail_MetaData) }; // 1767410527
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAPOD_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAPOD_Base_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAPOD_Base_Statics::NewProp_OnFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAPOD_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAPOD_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAPOD_Base_Statics::ClassParams = {
		&UAPOD_Base::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAPOD_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAPOD_Base_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAPOD_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_UAPOD_Base_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAPOD_Base_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAPOD_Base()
	{
		if (!Z_Registration_Info_UClass_UAPOD_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAPOD_Base.OuterSingleton, Z_Construct_UClass_UAPOD_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAPOD_Base.OuterSingleton;
	}
	template<> NASA_API_API UClass* StaticClass<UAPOD_Base>()
	{
		return UAPOD_Base::StaticClass();
	}
	UAPOD_Base::UAPOD_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAPOD_Base);
	UAPOD_Base::~UAPOD_Base() {}
	struct Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_AOPD_APOD_BASE_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_AOPD_APOD_BASE_h_Statics::ScriptStructInfo[] = {
		{ FAPODResponse::StaticStruct, Z_Construct_UScriptStruct_FAPODResponse_Statics::NewStructOps, TEXT("APODResponse"), &Z_Registration_Info_UScriptStruct_APODResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAPODResponse), 3037370840U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_AOPD_APOD_BASE_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAPOD_Base, UAPOD_Base::StaticClass, TEXT("UAPOD_Base"), &Z_Registration_Info_UClass_UAPOD_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAPOD_Base), 1001207187U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_AOPD_APOD_BASE_h_1089258169(TEXT("/Script/NASA_API"),
		Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_AOPD_APOD_BASE_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_AOPD_APOD_BASE_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_AOPD_APOD_BASE_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_AOPD_APOD_BASE_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
