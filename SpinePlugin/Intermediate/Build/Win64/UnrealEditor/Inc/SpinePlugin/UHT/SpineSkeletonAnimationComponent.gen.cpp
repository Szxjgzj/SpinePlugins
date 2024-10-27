// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpineSkeletonAnimationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineSkeletonAnimationComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonAnimationComponent();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonAnimationComponent_NoRegister();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonComponent();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_UTrackEntry();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_UTrackEntry_NoRegister();
	SPINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationCompleteDelegate__DelegateSignature();
	SPINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationDisposeDelegate__DelegateSignature();
	SPINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEndDelegate__DelegateSignature();
	SPINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEventDelegate__DelegateSignature();
	SPINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationInterruptDelegate__DelegateSignature();
	SPINEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationStartDelegate__DelegateSignature();
	SPINEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSpineEvent();
	UPackage* Z_Construct_UPackage__Script_SpinePlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpineEvent;
class UScriptStruct* FSpineEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpineEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpineEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpineEvent, (UObject*)Z_Construct_UPackage__Script_SpinePlugin(), TEXT("SpineEvent"));
	}
	return Z_Registration_Info_UScriptStruct_SpineEvent.OuterSingleton;
}
template<> SPINEPLUGIN_API UScriptStruct* StaticStruct<FSpineEvent>()
{
	return FSpineEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSpineEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpineEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Spine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// clang-format on\n" },
#endif
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "clang-format on" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FSpineEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpineEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpineEvent_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "SpineEvent" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpineEvent_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpineEvent, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpineEvent_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FSpineEvent_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpineEvent_Statics::NewProp_StringValue_MetaData[] = {
		{ "Category", "SpineEvent" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpineEvent_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpineEvent, StringValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpineEvent_Statics::NewProp_StringValue_MetaData), Z_Construct_UScriptStruct_FSpineEvent_Statics::NewProp_StringValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpineEvent_Statics::NewProp_IntValue_MetaData[] = {
		{ "Category", "SpineEvent" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpineEvent_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpineEvent, IntValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpineEvent_Statics::NewProp_IntValue_MetaData), Z_Construct_UScriptStruct_FSpineEvent_Statics::NewProp_IntValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpineEvent_Statics::NewProp_FloatValue_MetaData[] = {
		{ "Category", "SpineEvent" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpineEvent_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpineEvent, FloatValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpineEvent_Statics::NewProp_FloatValue_MetaData), Z_Construct_UScriptStruct_FSpineEvent_Statics::NewProp_FloatValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpineEvent_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "SpineEvent" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpineEvent_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpineEvent, Time), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpineEvent_Statics::NewProp_Time_MetaData), Z_Construct_UScriptStruct_FSpineEvent_Statics::NewProp_Time_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpineEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpineEvent_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpineEvent_Statics::NewProp_StringValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpineEvent_Statics::NewProp_IntValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpineEvent_Statics::NewProp_FloatValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpineEvent_Statics::NewProp_Time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpineEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SpinePlugin,
		nullptr,
		&NewStructOps,
		"SpineEvent",
		Z_Construct_UScriptStruct_FSpineEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpineEvent_Statics::PropPointers),
		sizeof(FSpineEvent),
		alignof(FSpineEvent),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpineEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpineEvent_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpineEvent_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSpineEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_SpineEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpineEvent.InnerSingleton, Z_Construct_UScriptStruct_FSpineEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SpineEvent.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationStartDelegate__DelegateSignature_Statics
	{
		struct _Script_SpinePlugin_eventSpineAnimationStartDelegate_Parms
		{
			UTrackEntry* entry;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_entry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationStartDelegate__DelegateSignature_Statics::NewProp_entry = { "entry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SpinePlugin_eventSpineAnimationStartDelegate_Parms, entry), Z_Construct_UClass_UTrackEntry_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationStartDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationStartDelegate__DelegateSignature_Statics::NewProp_entry,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationStartDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationStartDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpinePlugin, nullptr, "SpineAnimationStartDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationStartDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationStartDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationStartDelegate__DelegateSignature_Statics::_Script_SpinePlugin_eventSpineAnimationStartDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationStartDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationStartDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationStartDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationStartDelegate__DelegateSignature_Statics::_Script_SpinePlugin_eventSpineAnimationStartDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationStartDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationStartDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSpineAnimationStartDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationStartDelegate, UTrackEntry* entry)
{
	struct _Script_SpinePlugin_eventSpineAnimationStartDelegate_Parms
	{
		UTrackEntry* entry;
	};
	_Script_SpinePlugin_eventSpineAnimationStartDelegate_Parms Parms;
	Parms.entry=entry;
	SpineAnimationStartDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEventDelegate__DelegateSignature_Statics
	{
		struct _Script_SpinePlugin_eventSpineAnimationEventDelegate_Parms
		{
			UTrackEntry* entry;
			FSpineEvent evt;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_entry;
		static const UECodeGen_Private::FStructPropertyParams NewProp_evt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEventDelegate__DelegateSignature_Statics::NewProp_entry = { "entry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SpinePlugin_eventSpineAnimationEventDelegate_Parms, entry), Z_Construct_UClass_UTrackEntry_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEventDelegate__DelegateSignature_Statics::NewProp_evt = { "evt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SpinePlugin_eventSpineAnimationEventDelegate_Parms, evt), Z_Construct_UScriptStruct_FSpineEvent, METADATA_PARAMS(0, nullptr) }; // 2282543674
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEventDelegate__DelegateSignature_Statics::NewProp_entry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEventDelegate__DelegateSignature_Statics::NewProp_evt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpinePlugin, nullptr, "SpineAnimationEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEventDelegate__DelegateSignature_Statics::_Script_SpinePlugin_eventSpineAnimationEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEventDelegate__DelegateSignature_Statics::_Script_SpinePlugin_eventSpineAnimationEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSpineAnimationEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationEventDelegate, UTrackEntry* entry, FSpineEvent evt)
{
	struct _Script_SpinePlugin_eventSpineAnimationEventDelegate_Parms
	{
		UTrackEntry* entry;
		FSpineEvent evt;
	};
	_Script_SpinePlugin_eventSpineAnimationEventDelegate_Parms Parms;
	Parms.entry=entry;
	Parms.evt=evt;
	SpineAnimationEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationInterruptDelegate__DelegateSignature_Statics
	{
		struct _Script_SpinePlugin_eventSpineAnimationInterruptDelegate_Parms
		{
			UTrackEntry* entry;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_entry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationInterruptDelegate__DelegateSignature_Statics::NewProp_entry = { "entry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SpinePlugin_eventSpineAnimationInterruptDelegate_Parms, entry), Z_Construct_UClass_UTrackEntry_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationInterruptDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationInterruptDelegate__DelegateSignature_Statics::NewProp_entry,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationInterruptDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationInterruptDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpinePlugin, nullptr, "SpineAnimationInterruptDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationInterruptDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationInterruptDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationInterruptDelegate__DelegateSignature_Statics::_Script_SpinePlugin_eventSpineAnimationInterruptDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationInterruptDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationInterruptDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationInterruptDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationInterruptDelegate__DelegateSignature_Statics::_Script_SpinePlugin_eventSpineAnimationInterruptDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationInterruptDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationInterruptDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSpineAnimationInterruptDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationInterruptDelegate, UTrackEntry* entry)
{
	struct _Script_SpinePlugin_eventSpineAnimationInterruptDelegate_Parms
	{
		UTrackEntry* entry;
	};
	_Script_SpinePlugin_eventSpineAnimationInterruptDelegate_Parms Parms;
	Parms.entry=entry;
	SpineAnimationInterruptDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationCompleteDelegate__DelegateSignature_Statics
	{
		struct _Script_SpinePlugin_eventSpineAnimationCompleteDelegate_Parms
		{
			UTrackEntry* entry;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_entry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationCompleteDelegate__DelegateSignature_Statics::NewProp_entry = { "entry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SpinePlugin_eventSpineAnimationCompleteDelegate_Parms, entry), Z_Construct_UClass_UTrackEntry_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationCompleteDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationCompleteDelegate__DelegateSignature_Statics::NewProp_entry,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationCompleteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpinePlugin, nullptr, "SpineAnimationCompleteDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationCompleteDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationCompleteDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationCompleteDelegate__DelegateSignature_Statics::_Script_SpinePlugin_eventSpineAnimationCompleteDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationCompleteDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationCompleteDelegate__DelegateSignature_Statics::_Script_SpinePlugin_eventSpineAnimationCompleteDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationCompleteDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationCompleteDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSpineAnimationCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationCompleteDelegate, UTrackEntry* entry)
{
	struct _Script_SpinePlugin_eventSpineAnimationCompleteDelegate_Parms
	{
		UTrackEntry* entry;
	};
	_Script_SpinePlugin_eventSpineAnimationCompleteDelegate_Parms Parms;
	Parms.entry=entry;
	SpineAnimationCompleteDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEndDelegate__DelegateSignature_Statics
	{
		struct _Script_SpinePlugin_eventSpineAnimationEndDelegate_Parms
		{
			UTrackEntry* entry;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_entry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEndDelegate__DelegateSignature_Statics::NewProp_entry = { "entry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SpinePlugin_eventSpineAnimationEndDelegate_Parms, entry), Z_Construct_UClass_UTrackEntry_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEndDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEndDelegate__DelegateSignature_Statics::NewProp_entry,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEndDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEndDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpinePlugin, nullptr, "SpineAnimationEndDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEndDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEndDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEndDelegate__DelegateSignature_Statics::_Script_SpinePlugin_eventSpineAnimationEndDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEndDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEndDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEndDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEndDelegate__DelegateSignature_Statics::_Script_SpinePlugin_eventSpineAnimationEndDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEndDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEndDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSpineAnimationEndDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationEndDelegate, UTrackEntry* entry)
{
	struct _Script_SpinePlugin_eventSpineAnimationEndDelegate_Parms
	{
		UTrackEntry* entry;
	};
	_Script_SpinePlugin_eventSpineAnimationEndDelegate_Parms Parms;
	Parms.entry=entry;
	SpineAnimationEndDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationDisposeDelegate__DelegateSignature_Statics
	{
		struct _Script_SpinePlugin_eventSpineAnimationDisposeDelegate_Parms
		{
			UTrackEntry* entry;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_entry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationDisposeDelegate__DelegateSignature_Statics::NewProp_entry = { "entry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SpinePlugin_eventSpineAnimationDisposeDelegate_Parms, entry), Z_Construct_UClass_UTrackEntry_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationDisposeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationDisposeDelegate__DelegateSignature_Statics::NewProp_entry,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationDisposeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationDisposeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpinePlugin, nullptr, "SpineAnimationDisposeDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationDisposeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationDisposeDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationDisposeDelegate__DelegateSignature_Statics::_Script_SpinePlugin_eventSpineAnimationDisposeDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationDisposeDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationDisposeDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationDisposeDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationDisposeDelegate__DelegateSignature_Statics::_Script_SpinePlugin_eventSpineAnimationDisposeDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationDisposeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationDisposeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSpineAnimationDisposeDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationDisposeDelegate, UTrackEntry* entry)
{
	struct _Script_SpinePlugin_eventSpineAnimationDisposeDelegate_Parms
	{
		UTrackEntry* entry;
	};
	_Script_SpinePlugin_eventSpineAnimationDisposeDelegate_Parms Parms;
	Parms.entry=entry;
	SpineAnimationDisposeDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UTrackEntry::execisValidAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->isValidAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execgetAnimationDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->getAnimationDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execgetAnimationName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->getAnimationName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execSetMixDuration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_mixDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMixDuration(Z_Param_mixDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execGetMixDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMixDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execSetMixTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_mixTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMixTime(Z_Param_mixTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execGetMixTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMixTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execSetAlpha)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAlpha(Z_Param_alpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execGetAlpha)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAlpha();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execSetTimeScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_timeScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimeScale(Z_Param_timeScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execGetTimeScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execSetTrackEnd)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_trackEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTrackEnd(Z_Param_trackEnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execGetTrackEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTrackEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execSetTrackTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_trackTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTrackTime(Z_Param_trackTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execGetTrackTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTrackTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execSetDelay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_delay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDelay(Z_Param_delay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execGetDelay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDelay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execSetAnimationLast)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_animationLast);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnimationLast(Z_Param_animationLast);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execGetAnimationLast)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAnimationLast();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execSetAnimationEnd)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_animationEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnimationEnd(Z_Param_animationEnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execGetAnimationEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAnimationEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execSetAnimationStart)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_animationStart);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnimationStart(Z_Param_animationStart);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execGetAnimationStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAnimationStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execSetMixAttachmentThreshold)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_drawOrderThreshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMixAttachmentThreshold(Z_Param_drawOrderThreshold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execGetMixAttachmentThreshold)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMixAttachmentThreshold();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execSetMixDrawOrderThreshold)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_drawOrderThreshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMixDrawOrderThreshold(Z_Param_drawOrderThreshold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execGetMixDrawOrderThreshold)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMixDrawOrderThreshold();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execSetAlphaAttachmentThreshold)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_attachmentThreshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAlphaAttachmentThreshold(Z_Param_attachmentThreshold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execGetAlphaAttachmentThreshold)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAlphaAttachmentThreshold();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execSetEventThreshold)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_eventThreshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEventThreshold(Z_Param_eventThreshold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execGetEventThreshold)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEventThreshold();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execSetLoop)
	{
		P_GET_UBOOL(Z_Param_loop);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoop(Z_Param_loop);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execGetLoop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLoop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackEntry::execGetTrackIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTrackIndex();
		P_NATIVE_END;
	}
	void UTrackEntry::StaticRegisterNativesUTrackEntry()
	{
		UClass* Class = UTrackEntry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAlpha", &UTrackEntry::execGetAlpha },
			{ "GetAlphaAttachmentThreshold", &UTrackEntry::execGetAlphaAttachmentThreshold },
			{ "getAnimationDuration", &UTrackEntry::execgetAnimationDuration },
			{ "GetAnimationEnd", &UTrackEntry::execGetAnimationEnd },
			{ "GetAnimationLast", &UTrackEntry::execGetAnimationLast },
			{ "getAnimationName", &UTrackEntry::execgetAnimationName },
			{ "GetAnimationStart", &UTrackEntry::execGetAnimationStart },
			{ "GetDelay", &UTrackEntry::execGetDelay },
			{ "GetEventThreshold", &UTrackEntry::execGetEventThreshold },
			{ "GetLoop", &UTrackEntry::execGetLoop },
			{ "GetMixAttachmentThreshold", &UTrackEntry::execGetMixAttachmentThreshold },
			{ "GetMixDrawOrderThreshold", &UTrackEntry::execGetMixDrawOrderThreshold },
			{ "GetMixDuration", &UTrackEntry::execGetMixDuration },
			{ "GetMixTime", &UTrackEntry::execGetMixTime },
			{ "GetTimeScale", &UTrackEntry::execGetTimeScale },
			{ "GetTrackEnd", &UTrackEntry::execGetTrackEnd },
			{ "GetTrackIndex", &UTrackEntry::execGetTrackIndex },
			{ "GetTrackTime", &UTrackEntry::execGetTrackTime },
			{ "isValidAnimation", &UTrackEntry::execisValidAnimation },
			{ "SetAlpha", &UTrackEntry::execSetAlpha },
			{ "SetAlphaAttachmentThreshold", &UTrackEntry::execSetAlphaAttachmentThreshold },
			{ "SetAnimationEnd", &UTrackEntry::execSetAnimationEnd },
			{ "SetAnimationLast", &UTrackEntry::execSetAnimationLast },
			{ "SetAnimationStart", &UTrackEntry::execSetAnimationStart },
			{ "SetDelay", &UTrackEntry::execSetDelay },
			{ "SetEventThreshold", &UTrackEntry::execSetEventThreshold },
			{ "SetLoop", &UTrackEntry::execSetLoop },
			{ "SetMixAttachmentThreshold", &UTrackEntry::execSetMixAttachmentThreshold },
			{ "SetMixDrawOrderThreshold", &UTrackEntry::execSetMixDrawOrderThreshold },
			{ "SetMixDuration", &UTrackEntry::execSetMixDuration },
			{ "SetMixTime", &UTrackEntry::execSetMixTime },
			{ "SetTimeScale", &UTrackEntry::execSetTimeScale },
			{ "SetTrackEnd", &UTrackEntry::execSetTrackEnd },
			{ "SetTrackTime", &UTrackEntry::execSetTrackTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTrackEntry_GetAlpha_Statics
	{
		struct TrackEntry_eventGetAlpha_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackEntry_GetAlpha_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventGetAlpha_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_GetAlpha_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_GetAlpha_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_GetAlpha_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_GetAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "GetAlpha", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_GetAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetAlpha_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_GetAlpha_Statics::TrackEntry_eventGetAlpha_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetAlpha_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_GetAlpha_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetAlpha_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_GetAlpha_Statics::TrackEntry_eventGetAlpha_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_GetAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_GetAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_GetAlphaAttachmentThreshold_Statics
	{
		struct TrackEntry_eventGetAlphaAttachmentThreshold_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackEntry_GetAlphaAttachmentThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventGetAlphaAttachmentThreshold_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_GetAlphaAttachmentThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_GetAlphaAttachmentThreshold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_GetAlphaAttachmentThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_GetAlphaAttachmentThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "GetAlphaAttachmentThreshold", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_GetAlphaAttachmentThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetAlphaAttachmentThreshold_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_GetAlphaAttachmentThreshold_Statics::TrackEntry_eventGetAlphaAttachmentThreshold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetAlphaAttachmentThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_GetAlphaAttachmentThreshold_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetAlphaAttachmentThreshold_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_GetAlphaAttachmentThreshold_Statics::TrackEntry_eventGetAlphaAttachmentThreshold_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_GetAlphaAttachmentThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_GetAlphaAttachmentThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_getAnimationDuration_Statics
	{
		struct TrackEntry_eventgetAnimationDuration_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackEntry_getAnimationDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventgetAnimationDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_getAnimationDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_getAnimationDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_getAnimationDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_getAnimationDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "getAnimationDuration", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_getAnimationDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_getAnimationDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_getAnimationDuration_Statics::TrackEntry_eventgetAnimationDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_getAnimationDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_getAnimationDuration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_getAnimationDuration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_getAnimationDuration_Statics::TrackEntry_eventgetAnimationDuration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_getAnimationDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_getAnimationDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_GetAnimationEnd_Statics
	{
		struct TrackEntry_eventGetAnimationEnd_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackEntry_GetAnimationEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventGetAnimationEnd_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_GetAnimationEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_GetAnimationEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_GetAnimationEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_GetAnimationEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "GetAnimationEnd", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_GetAnimationEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetAnimationEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_GetAnimationEnd_Statics::TrackEntry_eventGetAnimationEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetAnimationEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_GetAnimationEnd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetAnimationEnd_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_GetAnimationEnd_Statics::TrackEntry_eventGetAnimationEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_GetAnimationEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_GetAnimationEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_GetAnimationLast_Statics
	{
		struct TrackEntry_eventGetAnimationLast_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackEntry_GetAnimationLast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventGetAnimationLast_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_GetAnimationLast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_GetAnimationLast_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_GetAnimationLast_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_GetAnimationLast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "GetAnimationLast", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_GetAnimationLast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetAnimationLast_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_GetAnimationLast_Statics::TrackEntry_eventGetAnimationLast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetAnimationLast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_GetAnimationLast_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetAnimationLast_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_GetAnimationLast_Statics::TrackEntry_eventGetAnimationLast_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_GetAnimationLast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_GetAnimationLast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_getAnimationName_Statics
	{
		struct TrackEntry_eventgetAnimationName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTrackEntry_getAnimationName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventgetAnimationName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_getAnimationName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_getAnimationName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_getAnimationName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_getAnimationName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "getAnimationName", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_getAnimationName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_getAnimationName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_getAnimationName_Statics::TrackEntry_eventgetAnimationName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_getAnimationName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_getAnimationName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_getAnimationName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_getAnimationName_Statics::TrackEntry_eventgetAnimationName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_getAnimationName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_getAnimationName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_GetAnimationStart_Statics
	{
		struct TrackEntry_eventGetAnimationStart_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackEntry_GetAnimationStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventGetAnimationStart_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_GetAnimationStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_GetAnimationStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_GetAnimationStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_GetAnimationStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "GetAnimationStart", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_GetAnimationStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetAnimationStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_GetAnimationStart_Statics::TrackEntry_eventGetAnimationStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetAnimationStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_GetAnimationStart_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetAnimationStart_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_GetAnimationStart_Statics::TrackEntry_eventGetAnimationStart_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_GetAnimationStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_GetAnimationStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_GetDelay_Statics
	{
		struct TrackEntry_eventGetDelay_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackEntry_GetDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventGetDelay_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_GetDelay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_GetDelay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_GetDelay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_GetDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "GetDelay", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_GetDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetDelay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_GetDelay_Statics::TrackEntry_eventGetDelay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetDelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_GetDelay_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetDelay_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_GetDelay_Statics::TrackEntry_eventGetDelay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_GetDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_GetDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_GetEventThreshold_Statics
	{
		struct TrackEntry_eventGetEventThreshold_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackEntry_GetEventThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventGetEventThreshold_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_GetEventThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_GetEventThreshold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_GetEventThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_GetEventThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "GetEventThreshold", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_GetEventThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetEventThreshold_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_GetEventThreshold_Statics::TrackEntry_eventGetEventThreshold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetEventThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_GetEventThreshold_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetEventThreshold_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_GetEventThreshold_Statics::TrackEntry_eventGetEventThreshold_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_GetEventThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_GetEventThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_GetLoop_Statics
	{
		struct TrackEntry_eventGetLoop_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTrackEntry_GetLoop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TrackEntry_eventGetLoop_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTrackEntry_GetLoop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TrackEntry_eventGetLoop_Parms), &Z_Construct_UFunction_UTrackEntry_GetLoop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_GetLoop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_GetLoop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_GetLoop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_GetLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "GetLoop", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_GetLoop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetLoop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_GetLoop_Statics::TrackEntry_eventGetLoop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetLoop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_GetLoop_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetLoop_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_GetLoop_Statics::TrackEntry_eventGetLoop_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_GetLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_GetLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_GetMixAttachmentThreshold_Statics
	{
		struct TrackEntry_eventGetMixAttachmentThreshold_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackEntry_GetMixAttachmentThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventGetMixAttachmentThreshold_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_GetMixAttachmentThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_GetMixAttachmentThreshold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_GetMixAttachmentThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_GetMixAttachmentThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "GetMixAttachmentThreshold", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_GetMixAttachmentThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetMixAttachmentThreshold_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_GetMixAttachmentThreshold_Statics::TrackEntry_eventGetMixAttachmentThreshold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetMixAttachmentThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_GetMixAttachmentThreshold_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetMixAttachmentThreshold_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_GetMixAttachmentThreshold_Statics::TrackEntry_eventGetMixAttachmentThreshold_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_GetMixAttachmentThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_GetMixAttachmentThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_GetMixDrawOrderThreshold_Statics
	{
		struct TrackEntry_eventGetMixDrawOrderThreshold_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackEntry_GetMixDrawOrderThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventGetMixDrawOrderThreshold_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_GetMixDrawOrderThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_GetMixDrawOrderThreshold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_GetMixDrawOrderThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_GetMixDrawOrderThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "GetMixDrawOrderThreshold", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_GetMixDrawOrderThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetMixDrawOrderThreshold_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_GetMixDrawOrderThreshold_Statics::TrackEntry_eventGetMixDrawOrderThreshold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetMixDrawOrderThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_GetMixDrawOrderThreshold_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetMixDrawOrderThreshold_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_GetMixDrawOrderThreshold_Statics::TrackEntry_eventGetMixDrawOrderThreshold_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_GetMixDrawOrderThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_GetMixDrawOrderThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_GetMixDuration_Statics
	{
		struct TrackEntry_eventGetMixDuration_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackEntry_GetMixDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventGetMixDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_GetMixDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_GetMixDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_GetMixDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_GetMixDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "GetMixDuration", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_GetMixDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetMixDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_GetMixDuration_Statics::TrackEntry_eventGetMixDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetMixDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_GetMixDuration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetMixDuration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_GetMixDuration_Statics::TrackEntry_eventGetMixDuration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_GetMixDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_GetMixDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_GetMixTime_Statics
	{
		struct TrackEntry_eventGetMixTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackEntry_GetMixTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventGetMixTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_GetMixTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_GetMixTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_GetMixTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_GetMixTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "GetMixTime", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_GetMixTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetMixTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_GetMixTime_Statics::TrackEntry_eventGetMixTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetMixTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_GetMixTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetMixTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_GetMixTime_Statics::TrackEntry_eventGetMixTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_GetMixTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_GetMixTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_GetTimeScale_Statics
	{
		struct TrackEntry_eventGetTimeScale_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackEntry_GetTimeScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventGetTimeScale_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_GetTimeScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_GetTimeScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_GetTimeScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_GetTimeScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "GetTimeScale", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_GetTimeScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetTimeScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_GetTimeScale_Statics::TrackEntry_eventGetTimeScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetTimeScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_GetTimeScale_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetTimeScale_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_GetTimeScale_Statics::TrackEntry_eventGetTimeScale_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_GetTimeScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_GetTimeScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_GetTrackEnd_Statics
	{
		struct TrackEntry_eventGetTrackEnd_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackEntry_GetTrackEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventGetTrackEnd_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_GetTrackEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_GetTrackEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_GetTrackEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_GetTrackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "GetTrackEnd", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_GetTrackEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetTrackEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_GetTrackEnd_Statics::TrackEntry_eventGetTrackEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetTrackEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_GetTrackEnd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetTrackEnd_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_GetTrackEnd_Statics::TrackEntry_eventGetTrackEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_GetTrackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_GetTrackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_GetTrackIndex_Statics
	{
		struct TrackEntry_eventGetTrackIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTrackEntry_GetTrackIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventGetTrackIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_GetTrackIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_GetTrackIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_GetTrackIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_GetTrackIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "GetTrackIndex", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_GetTrackIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetTrackIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_GetTrackIndex_Statics::TrackEntry_eventGetTrackIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetTrackIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_GetTrackIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetTrackIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_GetTrackIndex_Statics::TrackEntry_eventGetTrackIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_GetTrackIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_GetTrackIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_GetTrackTime_Statics
	{
		struct TrackEntry_eventGetTrackTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackEntry_GetTrackTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventGetTrackTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_GetTrackTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_GetTrackTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_GetTrackTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_GetTrackTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "GetTrackTime", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_GetTrackTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetTrackTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_GetTrackTime_Statics::TrackEntry_eventGetTrackTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetTrackTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_GetTrackTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_GetTrackTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_GetTrackTime_Statics::TrackEntry_eventGetTrackTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_GetTrackTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_GetTrackTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_isValidAnimation_Statics
	{
		struct TrackEntry_eventisValidAnimation_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTrackEntry_isValidAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TrackEntry_eventisValidAnimation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTrackEntry_isValidAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TrackEntry_eventisValidAnimation_Parms), &Z_Construct_UFunction_UTrackEntry_isValidAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_isValidAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_isValidAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_isValidAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_isValidAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "isValidAnimation", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_isValidAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_isValidAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_isValidAnimation_Statics::TrackEntry_eventisValidAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_isValidAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_isValidAnimation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_isValidAnimation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_isValidAnimation_Statics::TrackEntry_eventisValidAnimation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_isValidAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_isValidAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_SetAlpha_Statics
	{
		struct TrackEntry_eventSetAlpha_Parms
		{
			float alpha;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_alpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackEntry_SetAlpha_Statics::NewProp_alpha = { "alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventSetAlpha_Parms, alpha), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_SetAlpha_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_SetAlpha_Statics::NewProp_alpha,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_SetAlpha_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_SetAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "SetAlpha", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_SetAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetAlpha_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_SetAlpha_Statics::TrackEntry_eventSetAlpha_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetAlpha_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_SetAlpha_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetAlpha_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_SetAlpha_Statics::TrackEntry_eventSetAlpha_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_SetAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_SetAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_SetAlphaAttachmentThreshold_Statics
	{
		struct TrackEntry_eventSetAlphaAttachmentThreshold_Parms
		{
			float attachmentThreshold;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_attachmentThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackEntry_SetAlphaAttachmentThreshold_Statics::NewProp_attachmentThreshold = { "attachmentThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventSetAlphaAttachmentThreshold_Parms, attachmentThreshold), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_SetAlphaAttachmentThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_SetAlphaAttachmentThreshold_Statics::NewProp_attachmentThreshold,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_SetAlphaAttachmentThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_SetAlphaAttachmentThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "SetAlphaAttachmentThreshold", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_SetAlphaAttachmentThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetAlphaAttachmentThreshold_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_SetAlphaAttachmentThreshold_Statics::TrackEntry_eventSetAlphaAttachmentThreshold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetAlphaAttachmentThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_SetAlphaAttachmentThreshold_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetAlphaAttachmentThreshold_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_SetAlphaAttachmentThreshold_Statics::TrackEntry_eventSetAlphaAttachmentThreshold_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_SetAlphaAttachmentThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_SetAlphaAttachmentThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_SetAnimationEnd_Statics
	{
		struct TrackEntry_eventSetAnimationEnd_Parms
		{
			float animationEnd;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_animationEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackEntry_SetAnimationEnd_Statics::NewProp_animationEnd = { "animationEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventSetAnimationEnd_Parms, animationEnd), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_SetAnimationEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_SetAnimationEnd_Statics::NewProp_animationEnd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_SetAnimationEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_SetAnimationEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "SetAnimationEnd", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_SetAnimationEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetAnimationEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_SetAnimationEnd_Statics::TrackEntry_eventSetAnimationEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetAnimationEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_SetAnimationEnd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetAnimationEnd_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_SetAnimationEnd_Statics::TrackEntry_eventSetAnimationEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_SetAnimationEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_SetAnimationEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_SetAnimationLast_Statics
	{
		struct TrackEntry_eventSetAnimationLast_Parms
		{
			float animationLast;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_animationLast;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackEntry_SetAnimationLast_Statics::NewProp_animationLast = { "animationLast", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventSetAnimationLast_Parms, animationLast), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_SetAnimationLast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_SetAnimationLast_Statics::NewProp_animationLast,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_SetAnimationLast_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_SetAnimationLast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "SetAnimationLast", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_SetAnimationLast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetAnimationLast_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_SetAnimationLast_Statics::TrackEntry_eventSetAnimationLast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetAnimationLast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_SetAnimationLast_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetAnimationLast_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_SetAnimationLast_Statics::TrackEntry_eventSetAnimationLast_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_SetAnimationLast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_SetAnimationLast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_SetAnimationStart_Statics
	{
		struct TrackEntry_eventSetAnimationStart_Parms
		{
			float animationStart;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_animationStart;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackEntry_SetAnimationStart_Statics::NewProp_animationStart = { "animationStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventSetAnimationStart_Parms, animationStart), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_SetAnimationStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_SetAnimationStart_Statics::NewProp_animationStart,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_SetAnimationStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_SetAnimationStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "SetAnimationStart", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_SetAnimationStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetAnimationStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_SetAnimationStart_Statics::TrackEntry_eventSetAnimationStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetAnimationStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_SetAnimationStart_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetAnimationStart_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_SetAnimationStart_Statics::TrackEntry_eventSetAnimationStart_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_SetAnimationStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_SetAnimationStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_SetDelay_Statics
	{
		struct TrackEntry_eventSetDelay_Parms
		{
			float delay;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_delay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackEntry_SetDelay_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventSetDelay_Parms, delay), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_SetDelay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_SetDelay_Statics::NewProp_delay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_SetDelay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_SetDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "SetDelay", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_SetDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetDelay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_SetDelay_Statics::TrackEntry_eventSetDelay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetDelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_SetDelay_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetDelay_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_SetDelay_Statics::TrackEntry_eventSetDelay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_SetDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_SetDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_SetEventThreshold_Statics
	{
		struct TrackEntry_eventSetEventThreshold_Parms
		{
			float eventThreshold;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_eventThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackEntry_SetEventThreshold_Statics::NewProp_eventThreshold = { "eventThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventSetEventThreshold_Parms, eventThreshold), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_SetEventThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_SetEventThreshold_Statics::NewProp_eventThreshold,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_SetEventThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_SetEventThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "SetEventThreshold", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_SetEventThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetEventThreshold_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_SetEventThreshold_Statics::TrackEntry_eventSetEventThreshold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetEventThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_SetEventThreshold_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetEventThreshold_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_SetEventThreshold_Statics::TrackEntry_eventSetEventThreshold_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_SetEventThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_SetEventThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_SetLoop_Statics
	{
		struct TrackEntry_eventSetLoop_Parms
		{
			bool loop;
		};
		static void NewProp_loop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_loop;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTrackEntry_SetLoop_Statics::NewProp_loop_SetBit(void* Obj)
	{
		((TrackEntry_eventSetLoop_Parms*)Obj)->loop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTrackEntry_SetLoop_Statics::NewProp_loop = { "loop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TrackEntry_eventSetLoop_Parms), &Z_Construct_UFunction_UTrackEntry_SetLoop_Statics::NewProp_loop_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_SetLoop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_SetLoop_Statics::NewProp_loop,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_SetLoop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_SetLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "SetLoop", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_SetLoop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetLoop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_SetLoop_Statics::TrackEntry_eventSetLoop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetLoop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_SetLoop_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetLoop_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_SetLoop_Statics::TrackEntry_eventSetLoop_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_SetLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_SetLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_SetMixAttachmentThreshold_Statics
	{
		struct TrackEntry_eventSetMixAttachmentThreshold_Parms
		{
			float drawOrderThreshold;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_drawOrderThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackEntry_SetMixAttachmentThreshold_Statics::NewProp_drawOrderThreshold = { "drawOrderThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventSetMixAttachmentThreshold_Parms, drawOrderThreshold), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_SetMixAttachmentThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_SetMixAttachmentThreshold_Statics::NewProp_drawOrderThreshold,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_SetMixAttachmentThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_SetMixAttachmentThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "SetMixAttachmentThreshold", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_SetMixAttachmentThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetMixAttachmentThreshold_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_SetMixAttachmentThreshold_Statics::TrackEntry_eventSetMixAttachmentThreshold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetMixAttachmentThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_SetMixAttachmentThreshold_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetMixAttachmentThreshold_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_SetMixAttachmentThreshold_Statics::TrackEntry_eventSetMixAttachmentThreshold_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_SetMixAttachmentThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_SetMixAttachmentThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_SetMixDrawOrderThreshold_Statics
	{
		struct TrackEntry_eventSetMixDrawOrderThreshold_Parms
		{
			float drawOrderThreshold;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_drawOrderThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackEntry_SetMixDrawOrderThreshold_Statics::NewProp_drawOrderThreshold = { "drawOrderThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventSetMixDrawOrderThreshold_Parms, drawOrderThreshold), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_SetMixDrawOrderThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_SetMixDrawOrderThreshold_Statics::NewProp_drawOrderThreshold,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_SetMixDrawOrderThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_SetMixDrawOrderThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "SetMixDrawOrderThreshold", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_SetMixDrawOrderThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetMixDrawOrderThreshold_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_SetMixDrawOrderThreshold_Statics::TrackEntry_eventSetMixDrawOrderThreshold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetMixDrawOrderThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_SetMixDrawOrderThreshold_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetMixDrawOrderThreshold_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_SetMixDrawOrderThreshold_Statics::TrackEntry_eventSetMixDrawOrderThreshold_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_SetMixDrawOrderThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_SetMixDrawOrderThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_SetMixDuration_Statics
	{
		struct TrackEntry_eventSetMixDuration_Parms
		{
			float mixDuration;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mixDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackEntry_SetMixDuration_Statics::NewProp_mixDuration = { "mixDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventSetMixDuration_Parms, mixDuration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_SetMixDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_SetMixDuration_Statics::NewProp_mixDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_SetMixDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_SetMixDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "SetMixDuration", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_SetMixDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetMixDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_SetMixDuration_Statics::TrackEntry_eventSetMixDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetMixDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_SetMixDuration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetMixDuration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_SetMixDuration_Statics::TrackEntry_eventSetMixDuration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_SetMixDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_SetMixDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_SetMixTime_Statics
	{
		struct TrackEntry_eventSetMixTime_Parms
		{
			float mixTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mixTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackEntry_SetMixTime_Statics::NewProp_mixTime = { "mixTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventSetMixTime_Parms, mixTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_SetMixTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_SetMixTime_Statics::NewProp_mixTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_SetMixTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_SetMixTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "SetMixTime", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_SetMixTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetMixTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_SetMixTime_Statics::TrackEntry_eventSetMixTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetMixTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_SetMixTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetMixTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_SetMixTime_Statics::TrackEntry_eventSetMixTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_SetMixTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_SetMixTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_SetTimeScale_Statics
	{
		struct TrackEntry_eventSetTimeScale_Parms
		{
			float timeScale;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_timeScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackEntry_SetTimeScale_Statics::NewProp_timeScale = { "timeScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventSetTimeScale_Parms, timeScale), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_SetTimeScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_SetTimeScale_Statics::NewProp_timeScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_SetTimeScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_SetTimeScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "SetTimeScale", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_SetTimeScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetTimeScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_SetTimeScale_Statics::TrackEntry_eventSetTimeScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetTimeScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_SetTimeScale_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetTimeScale_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_SetTimeScale_Statics::TrackEntry_eventSetTimeScale_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_SetTimeScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_SetTimeScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_SetTrackEnd_Statics
	{
		struct TrackEntry_eventSetTrackEnd_Parms
		{
			float trackEnd;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_trackEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackEntry_SetTrackEnd_Statics::NewProp_trackEnd = { "trackEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventSetTrackEnd_Parms, trackEnd), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_SetTrackEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_SetTrackEnd_Statics::NewProp_trackEnd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_SetTrackEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_SetTrackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "SetTrackEnd", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_SetTrackEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetTrackEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_SetTrackEnd_Statics::TrackEntry_eventSetTrackEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetTrackEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_SetTrackEnd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetTrackEnd_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_SetTrackEnd_Statics::TrackEntry_eventSetTrackEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_SetTrackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_SetTrackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackEntry_SetTrackTime_Statics
	{
		struct TrackEntry_eventSetTrackTime_Parms
		{
			float trackTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_trackTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackEntry_SetTrackTime_Statics::NewProp_trackTime = { "trackTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackEntry_eventSetTrackTime_Parms, trackTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackEntry_SetTrackTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackEntry_SetTrackTime_Statics::NewProp_trackTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackEntry_SetTrackTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackEntry_SetTrackTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackEntry, nullptr, "SetTrackTime", nullptr, nullptr, Z_Construct_UFunction_UTrackEntry_SetTrackTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetTrackTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrackEntry_SetTrackTime_Statics::TrackEntry_eventSetTrackTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetTrackTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackEntry_SetTrackTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackEntry_SetTrackTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrackEntry_SetTrackTime_Statics::TrackEntry_eventSetTrackTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrackEntry_SetTrackTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackEntry_SetTrackTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTrackEntry);
	UClass* Z_Construct_UClass_UTrackEntry_NoRegister()
	{
		return UTrackEntry::StaticClass();
	}
	struct Z_Construct_UClass_UTrackEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationStart_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AnimationStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationInterrupt_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AnimationInterrupt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AnimationEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AnimationComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AnimationEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationDispose_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AnimationDispose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTrackEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SpinePlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTrackEntry_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTrackEntry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTrackEntry_GetAlpha, "GetAlpha" }, // 3875092154
		{ &Z_Construct_UFunction_UTrackEntry_GetAlphaAttachmentThreshold, "GetAlphaAttachmentThreshold" }, // 660888459
		{ &Z_Construct_UFunction_UTrackEntry_getAnimationDuration, "getAnimationDuration" }, // 2632674860
		{ &Z_Construct_UFunction_UTrackEntry_GetAnimationEnd, "GetAnimationEnd" }, // 2751802701
		{ &Z_Construct_UFunction_UTrackEntry_GetAnimationLast, "GetAnimationLast" }, // 815210019
		{ &Z_Construct_UFunction_UTrackEntry_getAnimationName, "getAnimationName" }, // 698534545
		{ &Z_Construct_UFunction_UTrackEntry_GetAnimationStart, "GetAnimationStart" }, // 690231238
		{ &Z_Construct_UFunction_UTrackEntry_GetDelay, "GetDelay" }, // 462962502
		{ &Z_Construct_UFunction_UTrackEntry_GetEventThreshold, "GetEventThreshold" }, // 2541098640
		{ &Z_Construct_UFunction_UTrackEntry_GetLoop, "GetLoop" }, // 3976051492
		{ &Z_Construct_UFunction_UTrackEntry_GetMixAttachmentThreshold, "GetMixAttachmentThreshold" }, // 250157983
		{ &Z_Construct_UFunction_UTrackEntry_GetMixDrawOrderThreshold, "GetMixDrawOrderThreshold" }, // 3657899367
		{ &Z_Construct_UFunction_UTrackEntry_GetMixDuration, "GetMixDuration" }, // 4204704416
		{ &Z_Construct_UFunction_UTrackEntry_GetMixTime, "GetMixTime" }, // 3519538141
		{ &Z_Construct_UFunction_UTrackEntry_GetTimeScale, "GetTimeScale" }, // 4037501390
		{ &Z_Construct_UFunction_UTrackEntry_GetTrackEnd, "GetTrackEnd" }, // 656521929
		{ &Z_Construct_UFunction_UTrackEntry_GetTrackIndex, "GetTrackIndex" }, // 3351010022
		{ &Z_Construct_UFunction_UTrackEntry_GetTrackTime, "GetTrackTime" }, // 1266818472
		{ &Z_Construct_UFunction_UTrackEntry_isValidAnimation, "isValidAnimation" }, // 2401861971
		{ &Z_Construct_UFunction_UTrackEntry_SetAlpha, "SetAlpha" }, // 784623481
		{ &Z_Construct_UFunction_UTrackEntry_SetAlphaAttachmentThreshold, "SetAlphaAttachmentThreshold" }, // 1561753136
		{ &Z_Construct_UFunction_UTrackEntry_SetAnimationEnd, "SetAnimationEnd" }, // 1658896011
		{ &Z_Construct_UFunction_UTrackEntry_SetAnimationLast, "SetAnimationLast" }, // 361721814
		{ &Z_Construct_UFunction_UTrackEntry_SetAnimationStart, "SetAnimationStart" }, // 1905045522
		{ &Z_Construct_UFunction_UTrackEntry_SetDelay, "SetDelay" }, // 1075383664
		{ &Z_Construct_UFunction_UTrackEntry_SetEventThreshold, "SetEventThreshold" }, // 1082996604
		{ &Z_Construct_UFunction_UTrackEntry_SetLoop, "SetLoop" }, // 2804745295
		{ &Z_Construct_UFunction_UTrackEntry_SetMixAttachmentThreshold, "SetMixAttachmentThreshold" }, // 891280975
		{ &Z_Construct_UFunction_UTrackEntry_SetMixDrawOrderThreshold, "SetMixDrawOrderThreshold" }, // 1478229562
		{ &Z_Construct_UFunction_UTrackEntry_SetMixDuration, "SetMixDuration" }, // 1123037575
		{ &Z_Construct_UFunction_UTrackEntry_SetMixTime, "SetMixTime" }, // 4120633575
		{ &Z_Construct_UFunction_UTrackEntry_SetTimeScale, "SetTimeScale" }, // 3022489462
		{ &Z_Construct_UFunction_UTrackEntry_SetTrackEnd, "SetTrackEnd" }, // 2266605216
		{ &Z_Construct_UFunction_UTrackEntry_SetTrackTime, "SetTrackTime" }, // 602090233
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTrackEntry_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrackEntry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Spine" },
		{ "IncludePath", "SpineSkeletonAnimationComponent.h" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationStart_MetaData[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationStart = { "AnimationStart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrackEntry, AnimationStart), Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationStartDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationStart_MetaData), Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationStart_MetaData) }; // 3021118912
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationInterrupt_MetaData[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationInterrupt = { "AnimationInterrupt", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrackEntry, AnimationInterrupt), Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationInterruptDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationInterrupt_MetaData), Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationInterrupt_MetaData) }; // 595561490
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationEvent_MetaData[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationEvent = { "AnimationEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrackEntry, AnimationEvent), Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationEvent_MetaData), Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationEvent_MetaData) }; // 1798896872
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationComplete_MetaData[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationComplete = { "AnimationComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrackEntry, AnimationComplete), Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationCompleteDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationComplete_MetaData), Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationComplete_MetaData) }; // 1569130671
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationEnd_MetaData[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationEnd = { "AnimationEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrackEntry, AnimationEnd), Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEndDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationEnd_MetaData), Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationEnd_MetaData) }; // 3797093926
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationDispose_MetaData[] = {
		{ "Category", "Components|Spine|TrackEntry" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationDispose = { "AnimationDispose", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrackEntry, AnimationDispose), Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationDisposeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationDispose_MetaData), Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationDispose_MetaData) }; // 2150829440
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTrackEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationInterrupt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrackEntry_Statics::NewProp_AnimationDispose,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTrackEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrackEntry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTrackEntry_Statics::ClassParams = {
		&UTrackEntry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTrackEntry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTrackEntry_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrackEntry_Statics::Class_MetaDataParams), Z_Construct_UClass_UTrackEntry_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTrackEntry_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTrackEntry()
	{
		if (!Z_Registration_Info_UClass_UTrackEntry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTrackEntry.OuterSingleton, Z_Construct_UClass_UTrackEntry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTrackEntry.OuterSingleton;
	}
	template<> SPINEPLUGIN_API UClass* StaticClass<UTrackEntry>()
	{
		return UTrackEntry::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTrackEntry);
	UTrackEntry::~UTrackEntry() {}
	DEFINE_FUNCTION(USpineSkeletonAnimationComponent::execClearTrack)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_trackIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearTrack(Z_Param_trackIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineSkeletonAnimationComponent::execClearTracks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearTracks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineSkeletonAnimationComponent::execGetCurrent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_trackIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTrackEntry**)Z_Param__Result=P_THIS->GetCurrent(Z_Param_trackIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineSkeletonAnimationComponent::execAddEmptyAnimation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_trackIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_mixDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_delay);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTrackEntry**)Z_Param__Result=P_THIS->AddEmptyAnimation(Z_Param_trackIndex,Z_Param_mixDuration,Z_Param_delay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineSkeletonAnimationComponent::execSetEmptyAnimation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_trackIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_mixDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTrackEntry**)Z_Param__Result=P_THIS->SetEmptyAnimation(Z_Param_trackIndex,Z_Param_mixDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineSkeletonAnimationComponent::execAddAnimation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_trackIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_animationName);
		P_GET_UBOOL(Z_Param_loop);
		P_GET_PROPERTY(FFloatProperty,Z_Param_delay);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTrackEntry**)Z_Param__Result=P_THIS->AddAnimation(Z_Param_trackIndex,Z_Param_animationName,Z_Param_loop,Z_Param_delay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineSkeletonAnimationComponent::execSetAnimation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_trackIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_animationName);
		P_GET_UBOOL(Z_Param_loop);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTrackEntry**)Z_Param__Result=P_THIS->SetAnimation(Z_Param_trackIndex,Z_Param_animationName,Z_Param_loop);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineSkeletonAnimationComponent::execGetTimeScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineSkeletonAnimationComponent::execSetTimeScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_timeScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimeScale(Z_Param_timeScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineSkeletonAnimationComponent::execSetPlaybackTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPlaybackTime);
		P_GET_UBOOL(Z_Param_bCallDelegates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlaybackTime(Z_Param_InPlaybackTime,Z_Param_bCallDelegates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineSkeletonAnimationComponent::execSetAutoPlay)
	{
		P_GET_UBOOL(Z_Param_bInAutoPlays);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoPlay(Z_Param_bInAutoPlays);
		P_NATIVE_END;
	}
	void USpineSkeletonAnimationComponent::StaticRegisterNativesUSpineSkeletonAnimationComponent()
	{
		UClass* Class = USpineSkeletonAnimationComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAnimation", &USpineSkeletonAnimationComponent::execAddAnimation },
			{ "AddEmptyAnimation", &USpineSkeletonAnimationComponent::execAddEmptyAnimation },
			{ "ClearTrack", &USpineSkeletonAnimationComponent::execClearTrack },
			{ "ClearTracks", &USpineSkeletonAnimationComponent::execClearTracks },
			{ "GetCurrent", &USpineSkeletonAnimationComponent::execGetCurrent },
			{ "GetTimeScale", &USpineSkeletonAnimationComponent::execGetTimeScale },
			{ "SetAnimation", &USpineSkeletonAnimationComponent::execSetAnimation },
			{ "SetAutoPlay", &USpineSkeletonAnimationComponent::execSetAutoPlay },
			{ "SetEmptyAnimation", &USpineSkeletonAnimationComponent::execSetEmptyAnimation },
			{ "SetPlaybackTime", &USpineSkeletonAnimationComponent::execSetPlaybackTime },
			{ "SetTimeScale", &USpineSkeletonAnimationComponent::execSetTimeScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddAnimation_Statics
	{
		struct SpineSkeletonAnimationComponent_eventAddAnimation_Parms
		{
			int32 trackIndex;
			FString animationName;
			bool loop;
			float delay;
			UTrackEntry* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_trackIndex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_animationName;
		static void NewProp_loop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_loop;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_delay;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddAnimation_Statics::NewProp_trackIndex = { "trackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineSkeletonAnimationComponent_eventAddAnimation_Parms, trackIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddAnimation_Statics::NewProp_animationName = { "animationName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineSkeletonAnimationComponent_eventAddAnimation_Parms, animationName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddAnimation_Statics::NewProp_loop_SetBit(void* Obj)
	{
		((SpineSkeletonAnimationComponent_eventAddAnimation_Parms*)Obj)->loop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddAnimation_Statics::NewProp_loop = { "loop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpineSkeletonAnimationComponent_eventAddAnimation_Parms), &Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddAnimation_Statics::NewProp_loop_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddAnimation_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineSkeletonAnimationComponent_eventAddAnimation_Parms, delay), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineSkeletonAnimationComponent_eventAddAnimation_Parms, ReturnValue), Z_Construct_UClass_UTrackEntry_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddAnimation_Statics::NewProp_trackIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddAnimation_Statics::NewProp_animationName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddAnimation_Statics::NewProp_loop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddAnimation_Statics::NewProp_delay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineSkeletonAnimationComponent, nullptr, "AddAnimation", nullptr, nullptr, Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddAnimation_Statics::SpineSkeletonAnimationComponent_eventAddAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddAnimation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddAnimation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddAnimation_Statics::SpineSkeletonAnimationComponent_eventAddAnimation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddEmptyAnimation_Statics
	{
		struct SpineSkeletonAnimationComponent_eventAddEmptyAnimation_Parms
		{
			int32 trackIndex;
			float mixDuration;
			float delay;
			UTrackEntry* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_trackIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mixDuration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_delay;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddEmptyAnimation_Statics::NewProp_trackIndex = { "trackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineSkeletonAnimationComponent_eventAddEmptyAnimation_Parms, trackIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddEmptyAnimation_Statics::NewProp_mixDuration = { "mixDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineSkeletonAnimationComponent_eventAddEmptyAnimation_Parms, mixDuration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddEmptyAnimation_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineSkeletonAnimationComponent_eventAddEmptyAnimation_Parms, delay), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddEmptyAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineSkeletonAnimationComponent_eventAddEmptyAnimation_Parms, ReturnValue), Z_Construct_UClass_UTrackEntry_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddEmptyAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddEmptyAnimation_Statics::NewProp_trackIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddEmptyAnimation_Statics::NewProp_mixDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddEmptyAnimation_Statics::NewProp_delay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddEmptyAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddEmptyAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddEmptyAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineSkeletonAnimationComponent, nullptr, "AddEmptyAnimation", nullptr, nullptr, Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddEmptyAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddEmptyAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddEmptyAnimation_Statics::SpineSkeletonAnimationComponent_eventAddEmptyAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddEmptyAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddEmptyAnimation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddEmptyAnimation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddEmptyAnimation_Statics::SpineSkeletonAnimationComponent_eventAddEmptyAnimation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddEmptyAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddEmptyAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineSkeletonAnimationComponent_ClearTrack_Statics
	{
		struct SpineSkeletonAnimationComponent_eventClearTrack_Parms
		{
			int32 trackIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_trackIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_ClearTrack_Statics::NewProp_trackIndex = { "trackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineSkeletonAnimationComponent_eventClearTrack_Parms, trackIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineSkeletonAnimationComponent_ClearTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationComponent_ClearTrack_Statics::NewProp_trackIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineSkeletonAnimationComponent_ClearTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_ClearTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineSkeletonAnimationComponent, nullptr, "ClearTrack", nullptr, nullptr, Z_Construct_UFunction_USpineSkeletonAnimationComponent_ClearTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_ClearTrack_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpineSkeletonAnimationComponent_ClearTrack_Statics::SpineSkeletonAnimationComponent_eventClearTrack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_ClearTrack_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpineSkeletonAnimationComponent_ClearTrack_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_ClearTrack_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USpineSkeletonAnimationComponent_ClearTrack_Statics::SpineSkeletonAnimationComponent_eventClearTrack_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USpineSkeletonAnimationComponent_ClearTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineSkeletonAnimationComponent_ClearTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineSkeletonAnimationComponent_ClearTracks_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineSkeletonAnimationComponent_ClearTracks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_ClearTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineSkeletonAnimationComponent, nullptr, "ClearTracks", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_ClearTracks_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpineSkeletonAnimationComponent_ClearTracks_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USpineSkeletonAnimationComponent_ClearTracks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineSkeletonAnimationComponent_ClearTracks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetCurrent_Statics
	{
		struct SpineSkeletonAnimationComponent_eventGetCurrent_Parms
		{
			int32 trackIndex;
			UTrackEntry* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_trackIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetCurrent_Statics::NewProp_trackIndex = { "trackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineSkeletonAnimationComponent_eventGetCurrent_Parms, trackIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetCurrent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineSkeletonAnimationComponent_eventGetCurrent_Parms, ReturnValue), Z_Construct_UClass_UTrackEntry_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetCurrent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetCurrent_Statics::NewProp_trackIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetCurrent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetCurrent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineSkeletonAnimationComponent, nullptr, "GetCurrent", nullptr, nullptr, Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetCurrent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetCurrent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetCurrent_Statics::SpineSkeletonAnimationComponent_eventGetCurrent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetCurrent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetCurrent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetCurrent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetCurrent_Statics::SpineSkeletonAnimationComponent_eventGetCurrent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetCurrent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetCurrent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetTimeScale_Statics
	{
		struct SpineSkeletonAnimationComponent_eventGetTimeScale_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetTimeScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineSkeletonAnimationComponent_eventGetTimeScale_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetTimeScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetTimeScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetTimeScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetTimeScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineSkeletonAnimationComponent, nullptr, "GetTimeScale", nullptr, nullptr, Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetTimeScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetTimeScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetTimeScale_Statics::SpineSkeletonAnimationComponent_eventGetTimeScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetTimeScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetTimeScale_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetTimeScale_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetTimeScale_Statics::SpineSkeletonAnimationComponent_eventGetTimeScale_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetTimeScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetTimeScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAnimation_Statics
	{
		struct SpineSkeletonAnimationComponent_eventSetAnimation_Parms
		{
			int32 trackIndex;
			FString animationName;
			bool loop;
			UTrackEntry* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_trackIndex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_animationName;
		static void NewProp_loop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_loop;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAnimation_Statics::NewProp_trackIndex = { "trackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineSkeletonAnimationComponent_eventSetAnimation_Parms, trackIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAnimation_Statics::NewProp_animationName = { "animationName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineSkeletonAnimationComponent_eventSetAnimation_Parms, animationName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAnimation_Statics::NewProp_loop_SetBit(void* Obj)
	{
		((SpineSkeletonAnimationComponent_eventSetAnimation_Parms*)Obj)->loop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAnimation_Statics::NewProp_loop = { "loop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpineSkeletonAnimationComponent_eventSetAnimation_Parms), &Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAnimation_Statics::NewProp_loop_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineSkeletonAnimationComponent_eventSetAnimation_Parms, ReturnValue), Z_Construct_UClass_UTrackEntry_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAnimation_Statics::NewProp_trackIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAnimation_Statics::NewProp_animationName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAnimation_Statics::NewProp_loop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineSkeletonAnimationComponent, nullptr, "SetAnimation", nullptr, nullptr, Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAnimation_Statics::SpineSkeletonAnimationComponent_eventSetAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAnimation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAnimation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAnimation_Statics::SpineSkeletonAnimationComponent_eventSetAnimation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAutoPlay_Statics
	{
		struct SpineSkeletonAnimationComponent_eventSetAutoPlay_Parms
		{
			bool bInAutoPlays;
		};
		static void NewProp_bInAutoPlays_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInAutoPlays;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAutoPlay_Statics::NewProp_bInAutoPlays_SetBit(void* Obj)
	{
		((SpineSkeletonAnimationComponent_eventSetAutoPlay_Parms*)Obj)->bInAutoPlays = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAutoPlay_Statics::NewProp_bInAutoPlays = { "bInAutoPlays", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpineSkeletonAnimationComponent_eventSetAutoPlay_Parms), &Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAutoPlay_Statics::NewProp_bInAutoPlays_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAutoPlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAutoPlay_Statics::NewProp_bInAutoPlays,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAutoPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Manages if this skeleton should update automatically or is paused. */" },
#endif
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manages if this skeleton should update automatically or is paused." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAutoPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineSkeletonAnimationComponent, nullptr, "SetAutoPlay", nullptr, nullptr, Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAutoPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAutoPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAutoPlay_Statics::SpineSkeletonAnimationComponent_eventSetAutoPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAutoPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAutoPlay_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAutoPlay_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAutoPlay_Statics::SpineSkeletonAnimationComponent_eventSetAutoPlay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAutoPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAutoPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetEmptyAnimation_Statics
	{
		struct SpineSkeletonAnimationComponent_eventSetEmptyAnimation_Parms
		{
			int32 trackIndex;
			float mixDuration;
			UTrackEntry* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_trackIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mixDuration;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetEmptyAnimation_Statics::NewProp_trackIndex = { "trackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineSkeletonAnimationComponent_eventSetEmptyAnimation_Parms, trackIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetEmptyAnimation_Statics::NewProp_mixDuration = { "mixDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineSkeletonAnimationComponent_eventSetEmptyAnimation_Parms, mixDuration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetEmptyAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineSkeletonAnimationComponent_eventSetEmptyAnimation_Parms, ReturnValue), Z_Construct_UClass_UTrackEntry_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetEmptyAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetEmptyAnimation_Statics::NewProp_trackIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetEmptyAnimation_Statics::NewProp_mixDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetEmptyAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetEmptyAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetEmptyAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineSkeletonAnimationComponent, nullptr, "SetEmptyAnimation", nullptr, nullptr, Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetEmptyAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetEmptyAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetEmptyAnimation_Statics::SpineSkeletonAnimationComponent_eventSetEmptyAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetEmptyAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetEmptyAnimation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetEmptyAnimation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetEmptyAnimation_Statics::SpineSkeletonAnimationComponent_eventSetEmptyAnimation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetEmptyAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetEmptyAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetPlaybackTime_Statics
	{
		struct SpineSkeletonAnimationComponent_eventSetPlaybackTime_Parms
		{
			float InPlaybackTime;
			bool bCallDelegates;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlaybackTime;
		static void NewProp_bCallDelegates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCallDelegates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetPlaybackTime_Statics::NewProp_InPlaybackTime = { "InPlaybackTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineSkeletonAnimationComponent_eventSetPlaybackTime_Parms, InPlaybackTime), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetPlaybackTime_Statics::NewProp_bCallDelegates_SetBit(void* Obj)
	{
		((SpineSkeletonAnimationComponent_eventSetPlaybackTime_Parms*)Obj)->bCallDelegates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetPlaybackTime_Statics::NewProp_bCallDelegates = { "bCallDelegates", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpineSkeletonAnimationComponent_eventSetPlaybackTime_Parms), &Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetPlaybackTime_Statics::NewProp_bCallDelegates_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetPlaybackTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetPlaybackTime_Statics::NewProp_InPlaybackTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetPlaybackTime_Statics::NewProp_bCallDelegates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetPlaybackTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Directly set the time of the current animation, will clamp to animation range. */" },
#endif
		{ "CPP_Default_bCallDelegates", "true" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Directly set the time of the current animation, will clamp to animation range." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetPlaybackTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineSkeletonAnimationComponent, nullptr, "SetPlaybackTime", nullptr, nullptr, Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetPlaybackTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetPlaybackTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetPlaybackTime_Statics::SpineSkeletonAnimationComponent_eventSetPlaybackTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetPlaybackTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetPlaybackTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetPlaybackTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetPlaybackTime_Statics::SpineSkeletonAnimationComponent_eventSetPlaybackTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetPlaybackTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetPlaybackTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetTimeScale_Statics
	{
		struct SpineSkeletonAnimationComponent_eventSetTimeScale_Parms
		{
			float timeScale;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_timeScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetTimeScale_Statics::NewProp_timeScale = { "timeScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineSkeletonAnimationComponent_eventSetTimeScale_Parms, timeScale), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetTimeScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetTimeScale_Statics::NewProp_timeScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetTimeScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Spine|Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint functions\n" },
#endif
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint functions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetTimeScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineSkeletonAnimationComponent, nullptr, "SetTimeScale", nullptr, nullptr, Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetTimeScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetTimeScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetTimeScale_Statics::SpineSkeletonAnimationComponent_eventSetTimeScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetTimeScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetTimeScale_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetTimeScale_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetTimeScale_Statics::SpineSkeletonAnimationComponent_eventSetTimeScale_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetTimeScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetTimeScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpineSkeletonAnimationComponent);
	UClass* Z_Construct_UClass_USpineSkeletonAnimationComponent_NoRegister()
	{
		return USpineSkeletonAnimationComponent::StaticClass();
	}
	struct Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationStart_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AnimationStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationInterrupt_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AnimationInterrupt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AnimationEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AnimationComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AnimationEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationDispose_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AnimationDispose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PreviewAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSkin_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PreviewSkin;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_trackEntries_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trackEntries_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_trackEntries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPlaying_MetaData[];
#endif
		static void NewProp_bAutoPlaying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlaying;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpineSkeletonComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SpinePlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddAnimation, "AddAnimation" }, // 4171195851
		{ &Z_Construct_UFunction_USpineSkeletonAnimationComponent_AddEmptyAnimation, "AddEmptyAnimation" }, // 1291000058
		{ &Z_Construct_UFunction_USpineSkeletonAnimationComponent_ClearTrack, "ClearTrack" }, // 1121994944
		{ &Z_Construct_UFunction_USpineSkeletonAnimationComponent_ClearTracks, "ClearTracks" }, // 964085346
		{ &Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetCurrent, "GetCurrent" }, // 3510884435
		{ &Z_Construct_UFunction_USpineSkeletonAnimationComponent_GetTimeScale, "GetTimeScale" }, // 1003262726
		{ &Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAnimation, "SetAnimation" }, // 4187384719
		{ &Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetAutoPlay, "SetAutoPlay" }, // 3044033364
		{ &Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetEmptyAnimation, "SetEmptyAnimation" }, // 1539018789
		{ &Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetPlaybackTime, "SetPlaybackTime" }, // 1160096258
		{ &Z_Construct_UFunction_USpineSkeletonAnimationComponent_SetTimeScale, "SetTimeScale" }, // 4006561882
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Spine" },
		{ "IncludePath", "SpineSkeletonAnimationComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationStart_MetaData[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationStart = { "AnimationStart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpineSkeletonAnimationComponent, AnimationStart), Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationStartDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationStart_MetaData), Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationStart_MetaData) }; // 3021118912
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationInterrupt_MetaData[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationInterrupt = { "AnimationInterrupt", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpineSkeletonAnimationComponent, AnimationInterrupt), Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationInterruptDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationInterrupt_MetaData), Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationInterrupt_MetaData) }; // 595561490
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationEvent_MetaData[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationEvent = { "AnimationEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpineSkeletonAnimationComponent, AnimationEvent), Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationEvent_MetaData), Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationEvent_MetaData) }; // 1798896872
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationComplete_MetaData[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationComplete = { "AnimationComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpineSkeletonAnimationComponent, AnimationComplete), Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationCompleteDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationComplete_MetaData), Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationComplete_MetaData) }; // 1569130671
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationEnd_MetaData[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationEnd = { "AnimationEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpineSkeletonAnimationComponent, AnimationEnd), Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationEndDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationEnd_MetaData), Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationEnd_MetaData) }; // 3797093926
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationDispose_MetaData[] = {
		{ "Category", "Components|Spine|Animation" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationDispose = { "AnimationDispose", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpineSkeletonAnimationComponent, AnimationDispose), Z_Construct_UDelegateFunction_SpinePlugin_SpineAnimationDisposeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationDispose_MetaData), Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationDispose_MetaData) }; // 2150829440
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_PreviewAnimation_MetaData[] = {
		{ "Category", "Spine" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_PreviewAnimation = { "PreviewAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpineSkeletonAnimationComponent, PreviewAnimation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_PreviewAnimation_MetaData), Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_PreviewAnimation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_PreviewSkin_MetaData[] = {
		{ "Category", "Spine" },
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_PreviewSkin = { "PreviewSkin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpineSkeletonAnimationComponent, PreviewSkin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_PreviewSkin_MetaData), Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_PreviewSkin_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_trackEntries_ElementProp = { "trackEntries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTrackEntry_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_trackEntries_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// keep track of track entries so they won't get GCed while\n// in transit within a blueprint\n" },
#endif
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "keep track of track entries so they won't get GCed while\nin transit within a blueprint" },
#endif
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_trackEntries = { "trackEntries", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpineSkeletonAnimationComponent, trackEntries), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_trackEntries_MetaData), Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_trackEntries_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_bAutoPlaying_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* If the animation should update automatically. */" },
#endif
		{ "ModuleRelativePath", "Public/SpineSkeletonAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the animation should update automatically." },
#endif
	};
#endif
	void Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_bAutoPlaying_SetBit(void* Obj)
	{
		((USpineSkeletonAnimationComponent*)Obj)->bAutoPlaying = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_bAutoPlaying = { "bAutoPlaying", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USpineSkeletonAnimationComponent), &Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_bAutoPlaying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_bAutoPlaying_MetaData), Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_bAutoPlaying_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationInterrupt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_AnimationDispose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_PreviewAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_PreviewSkin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_trackEntries_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_trackEntries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::NewProp_bAutoPlaying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpineSkeletonAnimationComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::ClassParams = {
		&USpineSkeletonAnimationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USpineSkeletonAnimationComponent()
	{
		if (!Z_Registration_Info_UClass_USpineSkeletonAnimationComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpineSkeletonAnimationComponent.OuterSingleton, Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpineSkeletonAnimationComponent.OuterSingleton;
	}
	template<> SPINEPLUGIN_API UClass* StaticClass<USpineSkeletonAnimationComponent>()
	{
		return USpineSkeletonAnimationComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpineSkeletonAnimationComponent);
	USpineSkeletonAnimationComponent::~USpineSkeletonAnimationComponent() {}
	struct Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_Statics::ScriptStructInfo[] = {
		{ FSpineEvent::StaticStruct, Z_Construct_UScriptStruct_FSpineEvent_Statics::NewStructOps, TEXT("SpineEvent"), &Z_Registration_Info_UScriptStruct_SpineEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpineEvent), 2282543674U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTrackEntry, UTrackEntry::StaticClass, TEXT("UTrackEntry"), &Z_Registration_Info_UClass_UTrackEntry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTrackEntry), 1548963462U) },
		{ Z_Construct_UClass_USpineSkeletonAnimationComponent, USpineSkeletonAnimationComponent::StaticClass, TEXT("USpineSkeletonAnimationComponent"), &Z_Registration_Info_UClass_USpineSkeletonAnimationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpineSkeletonAnimationComponent), 1620536158U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_3177613852(TEXT("/Script/SpinePlugin"),
		Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
