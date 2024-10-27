// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpineBoneDriverComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineBoneDriverComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineBoneDriverComponent();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineBoneDriverComponent_NoRegister();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SpinePlugin();
// End Cross Module References
	DEFINE_FUNCTION(USpineBoneDriverComponent::execBeforeUpdateWorldTransform)
	{
		P_GET_OBJECT(USpineSkeletonComponent,Z_Param_skeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeforeUpdateWorldTransform(Z_Param_skeleton);
		P_NATIVE_END;
	}
	void USpineBoneDriverComponent::StaticRegisterNativesUSpineBoneDriverComponent()
	{
		UClass* Class = USpineBoneDriverComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeforeUpdateWorldTransform", &USpineBoneDriverComponent::execBeforeUpdateWorldTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics
	{
		struct SpineBoneDriverComponent_eventBeforeUpdateWorldTransform_Parms
		{
			USpineSkeletonComponent* skeleton;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeleton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics::NewProp_skeleton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics::NewProp_skeleton = { "skeleton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineBoneDriverComponent_eventBeforeUpdateWorldTransform_Parms, skeleton), Z_Construct_UClass_USpineSkeletonComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics::NewProp_skeleton_MetaData), Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics::NewProp_skeleton_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics::NewProp_skeleton,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpineBoneDriverComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineBoneDriverComponent, nullptr, "BeforeUpdateWorldTransform", nullptr, nullptr, Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics::SpineBoneDriverComponent_eventBeforeUpdateWorldTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics::SpineBoneDriverComponent_eventBeforeUpdateWorldTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpineBoneDriverComponent);
	UClass* Z_Construct_UClass_USpineBoneDriverComponent_NoRegister()
	{
		return USpineBoneDriverComponent::StaticClass();
	}
	struct Z_Construct_UClass_USpineBoneDriverComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseComponentTransform_MetaData[];
#endif
		static void NewProp_UseComponentTransform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseComponentTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsePosition_MetaData[];
#endif
		static void NewProp_UsePosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UsePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseRotation_MetaData[];
#endif
		static void NewProp_UseRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseScale_MetaData[];
#endif
		static void NewProp_UseScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpineBoneDriverComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SpinePlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneDriverComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USpineBoneDriverComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpineBoneDriverComponent_BeforeUpdateWorldTransform, "BeforeUpdateWorldTransform" }, // 1705134199
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneDriverComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneDriverComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SpineBoneDriverComponent.h" },
		{ "ModuleRelativePath", "Public/SpineBoneDriverComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "SpineBoneDriverComponent" },
		{ "ModuleRelativePath", "Public/SpineBoneDriverComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpineBoneDriverComponent, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_Target_MetaData), Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_Target_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "SpineBoneDriverComponent" },
		{ "ModuleRelativePath", "Public/SpineBoneDriverComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpineBoneDriverComponent, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_BoneName_MetaData), Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_BoneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseComponentTransform_MetaData[] = {
		{ "Category", "SpineBoneDriverComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Uses just this component when set to true. Updates owning actor otherwise.\n" },
#endif
		{ "ModuleRelativePath", "Public/SpineBoneDriverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uses just this component when set to true. Updates owning actor otherwise." },
#endif
	};
#endif
	void Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseComponentTransform_SetBit(void* Obj)
	{
		((USpineBoneDriverComponent*)Obj)->UseComponentTransform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseComponentTransform = { "UseComponentTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USpineBoneDriverComponent), &Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseComponentTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseComponentTransform_MetaData), Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseComponentTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UsePosition_MetaData[] = {
		{ "Category", "SpineBoneDriverComponent" },
		{ "ModuleRelativePath", "Public/SpineBoneDriverComponent.h" },
	};
#endif
	void Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UsePosition_SetBit(void* Obj)
	{
		((USpineBoneDriverComponent*)Obj)->UsePosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UsePosition = { "UsePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USpineBoneDriverComponent), &Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UsePosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UsePosition_MetaData), Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UsePosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseRotation_MetaData[] = {
		{ "Category", "SpineBoneDriverComponent" },
		{ "ModuleRelativePath", "Public/SpineBoneDriverComponent.h" },
	};
#endif
	void Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseRotation_SetBit(void* Obj)
	{
		((USpineBoneDriverComponent*)Obj)->UseRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseRotation = { "UseRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USpineBoneDriverComponent), &Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseRotation_MetaData), Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseScale_MetaData[] = {
		{ "Category", "SpineBoneDriverComponent" },
		{ "ModuleRelativePath", "Public/SpineBoneDriverComponent.h" },
	};
#endif
	void Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseScale_SetBit(void* Obj)
	{
		((USpineBoneDriverComponent*)Obj)->UseScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseScale = { "UseScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USpineBoneDriverComponent), &Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseScale_MetaData), Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseScale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpineBoneDriverComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseComponentTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UsePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineBoneDriverComponent_Statics::NewProp_UseScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpineBoneDriverComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpineBoneDriverComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpineBoneDriverComponent_Statics::ClassParams = {
		&USpineBoneDriverComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpineBoneDriverComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneDriverComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneDriverComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USpineBoneDriverComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpineBoneDriverComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USpineBoneDriverComponent()
	{
		if (!Z_Registration_Info_UClass_USpineBoneDriverComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpineBoneDriverComponent.OuterSingleton, Z_Construct_UClass_USpineBoneDriverComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpineBoneDriverComponent.OuterSingleton;
	}
	template<> SPINEPLUGIN_API UClass* StaticClass<USpineBoneDriverComponent>()
	{
		return USpineBoneDriverComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpineBoneDriverComponent);
	USpineBoneDriverComponent::~USpineBoneDriverComponent() {}
	struct Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineBoneDriverComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineBoneDriverComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpineBoneDriverComponent, USpineBoneDriverComponent::StaticClass, TEXT("USpineBoneDriverComponent"), &Z_Registration_Info_UClass_USpineBoneDriverComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpineBoneDriverComponent), 3226104914U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineBoneDriverComponent_h_1869233564(TEXT("/Script/SpinePlugin"),
		Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineBoneDriverComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineBoneDriverComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
