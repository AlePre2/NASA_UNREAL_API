// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AOPD/APOD_BASE.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAPOD_Base;
struct FAPODResponse;
struct FDateTime;
#ifdef NASA_API_APOD_BASE_generated_h
#error "APOD_BASE.generated.h already included, missing '#pragma once' in APOD_BASE.h"
#endif
#define NASA_API_APOD_BASE_generated_h

#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_AOPD_APOD_BASE_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAPODResponse_Statics; \
	NASA_API_API static class UScriptStruct* StaticStruct();


template<> NASA_API_API UScriptStruct* StaticStruct<struct FAPODResponse>();

#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_AOPD_APOD_BASE_h_48_DELEGATE \
static void FAPODResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& APODResponseDelegate, FAPODResponse APOD_Data);


#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_AOPD_APOD_BASE_h_49_DELEGATE \
static void FFail_DelegateWrapper(const FMulticastScriptDelegate& Fail, const FString& Error);


#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_AOPD_APOD_BASE_h_45_SPARSE_DATA
#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_AOPD_APOD_BASE_h_45_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_AOPD_APOD_BASE_h_45_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_AOPD_APOD_BASE_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendHTTPRequest); \
	DECLARE_FUNCTION(execAPOD);


#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_AOPD_APOD_BASE_h_45_ACCESSORS
#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_AOPD_APOD_BASE_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAPOD_Base(); \
	friend struct Z_Construct_UClass_UAPOD_Base_Statics; \
public: \
	DECLARE_CLASS(UAPOD_Base, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NASA_API"), NO_API) \
	DECLARE_SERIALIZER(UAPOD_Base)


#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_AOPD_APOD_BASE_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAPOD_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAPOD_Base(UAPOD_Base&&); \
	NO_API UAPOD_Base(const UAPOD_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAPOD_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAPOD_Base); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAPOD_Base) \
	NO_API virtual ~UAPOD_Base();


#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_AOPD_APOD_BASE_h_42_PROLOG
#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_AOPD_APOD_BASE_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_AOPD_APOD_BASE_h_45_SPARSE_DATA \
	FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_AOPD_APOD_BASE_h_45_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_AOPD_APOD_BASE_h_45_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_AOPD_APOD_BASE_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_AOPD_APOD_BASE_h_45_ACCESSORS \
	FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_AOPD_APOD_BASE_h_45_INCLASS_NO_PURE_DECLS \
	FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_AOPD_APOD_BASE_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NASA_API_API UClass* StaticClass<class UAPOD_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_AOPD_APOD_BASE_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
