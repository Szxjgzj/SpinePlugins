// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpineData/CustomSpineData/SpineMeshFuncLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineMeshFuncLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SPINEDATA_API UClass* Z_Construct_UClass_USpineMesh_NoRegister();
	SPINEDATA_API UClass* Z_Construct_UClass_USpineMeshFuncLibrary();
	SPINEDATA_API UClass* Z_Construct_UClass_USpineMeshFuncLibrary_NoRegister();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineAtlasAsset_NoRegister();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonDataAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SpineData();
// End Cross Module References
	DEFINE_FUNCTION(USpineMeshFuncLibrary::execCreateSpineMeshData)
	{
		P_GET_OBJECT(USpineAtlasAsset,Z_Param_SpineAtlasAsset);
		P_GET_OBJECT(USpineSkeletonDataAsset,Z_Param_SpineSkeletonDataAsset);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USpineMesh**)Z_Param__Result=USpineMeshFuncLibrary::CreateSpineMeshData(Z_Param_SpineAtlasAsset,Z_Param_SpineSkeletonDataAsset,Z_Param_AssetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineMeshFuncLibrary::execCreateSpineMeshDataEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USpineMeshFuncLibrary::CreateSpineMeshDataEmpty();
		P_NATIVE_END;
	}
	void USpineMeshFuncLibrary::StaticRegisterNativesUSpineMeshFuncLibrary()
	{
		UClass* Class = USpineMeshFuncLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSpineMeshData", &USpineMeshFuncLibrary::execCreateSpineMeshData },
			{ "CreateSpineMeshDataEmpty", &USpineMeshFuncLibrary::execCreateSpineMeshDataEmpty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshData_Statics
	{
		struct SpineMeshFuncLibrary_eventCreateSpineMeshData_Parms
		{
			USpineAtlasAsset* SpineAtlasAsset;
			USpineSkeletonDataAsset* SpineSkeletonDataAsset;
			FString AssetName;
			USpineMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpineAtlasAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpineSkeletonDataAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshData_Statics::NewProp_SpineAtlasAsset = { "SpineAtlasAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineMeshFuncLibrary_eventCreateSpineMeshData_Parms, SpineAtlasAsset), Z_Construct_UClass_USpineAtlasAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshData_Statics::NewProp_SpineSkeletonDataAsset = { "SpineSkeletonDataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineMeshFuncLibrary_eventCreateSpineMeshData_Parms, SpineSkeletonDataAsset), Z_Construct_UClass_USpineSkeletonDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshData_Statics::NewProp_AssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshData_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineMeshFuncLibrary_eventCreateSpineMeshData_Parms, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshData_Statics::NewProp_AssetName_MetaData), Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshData_Statics::NewProp_AssetName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineMeshFuncLibrary_eventCreateSpineMeshData_Parms, ReturnValue), Z_Construct_UClass_USpineMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshData_Statics::NewProp_SpineAtlasAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshData_Statics::NewProp_SpineSkeletonDataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshData_Statics::NewProp_AssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CustomSpineData/SpineMeshFuncLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineMeshFuncLibrary, nullptr, "CreateSpineMeshData", nullptr, nullptr, Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshData_Statics::SpineMeshFuncLibrary_eventCreateSpineMeshData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshData_Statics::SpineMeshFuncLibrary_eventCreateSpineMeshData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshDataEmpty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshDataEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CustomSpineData/SpineMeshFuncLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshDataEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineMeshFuncLibrary, nullptr, "CreateSpineMeshDataEmpty", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshDataEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshDataEmpty_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshDataEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshDataEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpineMeshFuncLibrary);
	UClass* Z_Construct_UClass_USpineMeshFuncLibrary_NoRegister()
	{
		return USpineMeshFuncLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USpineMeshFuncLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpineMeshFuncLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SpineData,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpineMeshFuncLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USpineMeshFuncLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshData, "CreateSpineMeshData" }, // 2613822032
		{ &Z_Construct_UFunction_USpineMeshFuncLibrary_CreateSpineMeshDataEmpty, "CreateSpineMeshDataEmpty" }, // 210335046
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpineMeshFuncLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineMeshFuncLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CustomSpineData/SpineMeshFuncLibrary.h" },
		{ "ModuleRelativePath", "CustomSpineData/SpineMeshFuncLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpineMeshFuncLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpineMeshFuncLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpineMeshFuncLibrary_Statics::ClassParams = {
		&USpineMeshFuncLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineMeshFuncLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USpineMeshFuncLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USpineMeshFuncLibrary()
	{
		if (!Z_Registration_Info_UClass_USpineMeshFuncLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpineMeshFuncLibrary.OuterSingleton, Z_Construct_UClass_USpineMeshFuncLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpineMeshFuncLibrary.OuterSingleton;
	}
	template<> SPINEDATA_API UClass* StaticClass<USpineMeshFuncLibrary>()
	{
		return USpineMeshFuncLibrary::StaticClass();
	}
	USpineMeshFuncLibrary::USpineMeshFuncLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpineMeshFuncLibrary);
	USpineMeshFuncLibrary::~USpineMeshFuncLibrary() {}
	struct Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePreview_Source_SpineData_CustomSpineData_SpineMeshFuncLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePreview_Source_SpineData_CustomSpineData_SpineMeshFuncLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpineMeshFuncLibrary, USpineMeshFuncLibrary::StaticClass, TEXT("USpineMeshFuncLibrary"), &Z_Registration_Info_UClass_USpineMeshFuncLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpineMeshFuncLibrary), 2775993621U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePreview_Source_SpineData_CustomSpineData_SpineMeshFuncLibrary_h_2750509863(TEXT("/Script/SpineData"),
		Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePreview_Source_SpineData_CustomSpineData_SpineMeshFuncLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePreview_Source_SpineData_CustomSpineData_SpineMeshFuncLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
