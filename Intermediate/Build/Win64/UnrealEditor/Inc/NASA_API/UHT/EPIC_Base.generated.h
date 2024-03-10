// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EPIC/EPIC_Base.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEPIC_Base;
struct FEPICResponse;
#ifdef NASA_API_EPIC_Base_generated_h
#error "EPIC_Base.generated.h already included, missing '#pragma once' in EPIC_Base.h"
#endif
#define NASA_API_EPIC_Base_generated_h

#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_EPIC_EPIC_Base_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEPICCoordinates_Statics; \
	NASA_API_API static class UScriptStruct* StaticStruct();


template<> NASA_API_API UScriptStruct* StaticStruct<struct FEPICCoordinates>();

#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_EPIC_EPIC_Base_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEPICResponse_Statics; \
	NASA_API_API static class UScriptStruct* StaticStruct();


template<> NASA_API_API UScriptStruct* StaticStruct<struct FEPICResponse>();

#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_EPIC_EPIC_Base_h_66_DELEGATE \
static void FEPICResponsDelegate_DelegateWrapper(const FMulticastScriptDelegate& EPICResponsDelegate, TArray<FEPICResponse> const& EPIC_Data);


#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_EPIC_EPIC_Base_h_67_DELEGATE \
static void FFail_DelegateWrapper(const FMulticastScriptDelegate& Fail, const FString& Error);


#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_EPIC_EPIC_Base_h_63_SPARSE_DATA
#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_EPIC_EPIC_Base_h_63_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_EPIC_EPIC_Base_h_63_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_EPIC_EPIC_Base_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendHTTPRequest); \
	DECLARE_FUNCTION(execEPIC);


#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_EPIC_EPIC_Base_h_63_ACCESSORS
#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_EPIC_EPIC_Base_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEPIC_Base(); \
	friend struct Z_Construct_UClass_UEPIC_Base_Statics; \
public: \
	DECLARE_CLASS(UEPIC_Base, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NASA_API"), NO_API) \
	DECLARE_SERIALIZER(UEPIC_Base)


#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_EPIC_EPIC_Base_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEPIC_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEPIC_Base(UEPIC_Base&&); \
	NO_API UEPIC_Base(const UEPIC_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEPIC_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEPIC_Base); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEPIC_Base) \
	NO_API virtual ~UEPIC_Base();


#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_EPIC_EPIC_Base_h_60_PROLOG
#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_EPIC_EPIC_Base_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_EPIC_EPIC_Base_h_63_SPARSE_DATA \
	FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_EPIC_EPIC_Base_h_63_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_EPIC_EPIC_Base_h_63_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_EPIC_EPIC_Base_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_EPIC_EPIC_Base_h_63_ACCESSORS \
	FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_EPIC_EPIC_Base_h_63_INCLASS_NO_PURE_DECLS \
	FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_EPIC_EPIC_Base_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NASA_API_API UClass* StaticClass<class UEPIC_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_EPIC_EPIC_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
