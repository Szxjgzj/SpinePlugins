// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpineAnimSMS.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineAnimSMS() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMInstance_NoRegister();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineAnimSMS();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineAnimSMS_NoRegister();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonAnimationComponent();
	UPackage* Z_Construct_UPackage__Script_SpinePlugin();
// End Cross Module References
	DEFINE_FUNCTION(USpineAnimSMS::execGetStateMachine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMInstance**)Z_Param__Result=P_THIS->GetStateMachine();
		P_NATIVE_END;
	}
	void USpineAnimSMS::StaticRegisterNativesUSpineAnimSMS()
	{
		UClass* Class = USpineAnimSMS::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStateMachine", &USpineAnimSMS::execGetStateMachine },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpineAnimSMS_GetStateMachine_Statics
	{
		struct SpineAnimSMS_eventGetStateMachine_Parms
		{
			USMInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineAnimSMS_GetStateMachine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineAnimSMS_eventGetStateMachine_Parms, ReturnValue), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineAnimSMS_GetStateMachine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineAnimSMS_GetStateMachine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineAnimSMS_GetStateMachine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpineAnimSMS.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineAnimSMS_GetStateMachine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineAnimSMS, nullptr, "GetStateMachine", nullptr, nullptr, Z_Construct_UFunction_USpineAnimSMS_GetStateMachine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineAnimSMS_GetStateMachine_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpineAnimSMS_GetStateMachine_Statics::SpineAnimSMS_eventGetStateMachine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineAnimSMS_GetStateMachine_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpineAnimSMS_GetStateMachine_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineAnimSMS_GetStateMachine_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USpineAnimSMS_GetStateMachine_Statics::SpineAnimSMS_eventGetStateMachine_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USpineAnimSMS_GetStateMachine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineAnimSMS_GetStateMachine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpineAnimSMS);
	UClass* Z_Construct_UClass_USpineAnimSMS_NoRegister()
	{
		return USpineAnimSMS::StaticClass();
	}
	struct Z_Construct_UClass_USpineAnimSMS_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpineAnimBp_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SpineAnimBp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpineAnimSMS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpineSkeletonAnimationComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SpinePlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimSMS_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USpineAnimSMS_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpineAnimSMS_GetStateMachine, "GetStateMachine" }, // 3517695683
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimSMS_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAnimSMS_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SpineAnimSMS.h" },
		{ "ModuleRelativePath", "Public/SpineAnimSMS.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAnimSMS_Statics::NewProp_SpineAnimBp_MetaData[] = {
		{ "Category", "SpineAnimSMS" },
		{ "ModuleRelativePath", "Public/SpineAnimSMS.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USpineAnimSMS_Statics::NewProp_SpineAnimBp = { "SpineAnimBp", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpineAnimSMS, SpineAnimBp), Z_Construct_UClass_UClass, Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimSMS_Statics::NewProp_SpineAnimBp_MetaData), Z_Construct_UClass_USpineAnimSMS_Statics::NewProp_SpineAnimBp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpineAnimSMS_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineAnimSMS_Statics::NewProp_SpineAnimBp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpineAnimSMS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpineAnimSMS>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpineAnimSMS_Statics::ClassParams = {
		&USpineAnimSMS::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpineAnimSMS_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimSMS_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimSMS_Statics::Class_MetaDataParams), Z_Construct_UClass_USpineAnimSMS_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpineAnimSMS_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USpineAnimSMS()
	{
		if (!Z_Registration_Info_UClass_USpineAnimSMS.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpineAnimSMS.OuterSingleton, Z_Construct_UClass_USpineAnimSMS_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpineAnimSMS.OuterSingleton;
	}
	template<> SPINEPLUGIN_API UClass* StaticClass<USpineAnimSMS>()
	{
		return USpineAnimSMS::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpineAnimSMS);
	USpineAnimSMS::~USpineAnimSMS() {}
	struct Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAnimSMS_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAnimSMS_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpineAnimSMS, USpineAnimSMS::StaticClass, TEXT("USpineAnimSMS"), &Z_Registration_Info_UClass_USpineAnimSMS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpineAnimSMS), 742150288U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAnimSMS_h_541883079(TEXT("/Script/SpinePlugin"),
		Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAnimSMS_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineAnimSMS_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
