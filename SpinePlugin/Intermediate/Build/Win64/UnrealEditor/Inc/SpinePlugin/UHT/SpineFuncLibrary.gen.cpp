// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpineFuncLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineFuncLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineAtlasAsset_NoRegister();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineFuncLibrary();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineFuncLibrary_NoRegister();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonDataAsset_NoRegister();
	SPINEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSpineInfo();
	UPackage* Z_Construct_UPackage__Script_SpinePlugin();
// End Cross Module References

static_assert(std::is_polymorphic<FSpineInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSpineInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpineInfo;
class UScriptStruct* FSpineInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpineInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpineInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpineInfo, (UObject*)Z_Construct_UPackage__Script_SpinePlugin(), TEXT("SpineInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SpineInfo.OuterSingleton;
}
template<> SPINEPLUGIN_API UScriptStruct* StaticStruct<FSpineInfo>()
{
	return FSpineInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSpineInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtlasAsset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AtlasAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonDataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SkeletonDataAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpineInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpineFuncLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpineInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpineInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpineInfo_Statics::NewProp_AtlasAsset_MetaData[] = {
		{ "Category", "SpineInfo" },
		{ "ModuleRelativePath", "Public/SpineFuncLibrary.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSpineInfo_Statics::NewProp_AtlasAsset = { "AtlasAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpineInfo, AtlasAsset), Z_Construct_UClass_USpineAtlasAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpineInfo_Statics::NewProp_AtlasAsset_MetaData), Z_Construct_UScriptStruct_FSpineInfo_Statics::NewProp_AtlasAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpineInfo_Statics::NewProp_SkeletonDataAsset_MetaData[] = {
		{ "Category", "SpineInfo" },
		{ "ModuleRelativePath", "Public/SpineFuncLibrary.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSpineInfo_Statics::NewProp_SkeletonDataAsset = { "SkeletonDataAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpineInfo, SkeletonDataAsset), Z_Construct_UClass_USpineSkeletonDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpineInfo_Statics::NewProp_SkeletonDataAsset_MetaData), Z_Construct_UScriptStruct_FSpineInfo_Statics::NewProp_SkeletonDataAsset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpineInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpineInfo_Statics::NewProp_AtlasAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpineInfo_Statics::NewProp_SkeletonDataAsset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpineInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SpinePlugin,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SpineInfo",
		Z_Construct_UScriptStruct_FSpineInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpineInfo_Statics::PropPointers),
		sizeof(FSpineInfo),
		alignof(FSpineInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpineInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpineInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpineInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSpineInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SpineInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpineInfo.InnerSingleton, Z_Construct_UScriptStruct_FSpineInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SpineInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(USpineFuncLibrary::execSaveToDataTable)
	{
		P_GET_OBJECT(UDataTable,Z_Param_DataTable);
		P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
		P_GET_OBJECT(USpineAtlasAsset,Z_Param_AtlasAsset);
		P_GET_OBJECT(USpineSkeletonDataAsset,Z_Param_SkeletonDataAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USpineFuncLibrary::SaveToDataTable(Z_Param_DataTable,Z_Param_RowName,Z_Param_AtlasAsset,Z_Param_SkeletonDataAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineFuncLibrary::execGetAllSpineDataTable)
	{
		P_GET_TARRAY_REF(UDataTable*,Z_Param_Out_DataTables);
		P_FINISH;
		P_NATIVE_BEGIN;
		USpineFuncLibrary::GetAllSpineDataTable(Z_Param_Out_DataTables);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineFuncLibrary::execGetAllSubClassNames)
	{
		P_GET_TARRAY_REF(UClass*,Z_Param_Out_SpineChars);
		P_FINISH;
		P_NATIVE_BEGIN;
		USpineFuncLibrary::GetAllSubClassNames(Z_Param_Out_SpineChars);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineFuncLibrary::execSaveCurrentSpineAsset)
	{
		P_GET_OBJECT(UClass,Z_Param_SpineChar);
		P_GET_PROPERTY(FStrProperty,Z_Param_PackageName);
		P_GET_OBJECT(USpineAtlasAsset,Z_Param_SpineAtlasAsset);
		P_GET_OBJECT(USpineSkeletonDataAsset,Z_Param_SpineSkeletonDataAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USpineFuncLibrary::SaveCurrentSpineAsset(Z_Param_SpineChar,Z_Param_PackageName,Z_Param_SpineAtlasAsset,Z_Param_SpineSkeletonDataAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineFuncLibrary::execGetUsefulSpineAssetByPair)
	{
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_SkelData);
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_Atlas);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USpineFuncLibrary::GetUsefulSpineAssetByPair(Z_Param_Out_SkelData,Z_Param_Out_Atlas);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineFuncLibrary::execGetUsefulSpineAssetByPath)
	{
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_SkelData);
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_Atlas);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USpineFuncLibrary::GetUsefulSpineAssetByPath(Z_Param_Out_SkelData,Z_Param_Out_Atlas);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineFuncLibrary::execGetAllSpineSkeletonAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAssetData>*)Z_Param__Result=USpineFuncLibrary::GetAllSpineSkeletonAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpineFuncLibrary::execGetAllSpineAtlasAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAssetData>*)Z_Param__Result=USpineFuncLibrary::GetAllSpineAtlasAsset();
		P_NATIVE_END;
	}
	void USpineFuncLibrary::StaticRegisterNativesUSpineFuncLibrary()
	{
		UClass* Class = USpineFuncLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllSpineAtlasAsset", &USpineFuncLibrary::execGetAllSpineAtlasAsset },
			{ "GetAllSpineDataTable", &USpineFuncLibrary::execGetAllSpineDataTable },
			{ "GetAllSpineSkeletonAsset", &USpineFuncLibrary::execGetAllSpineSkeletonAsset },
			{ "GetAllSubClassNames", &USpineFuncLibrary::execGetAllSubClassNames },
			{ "GetUsefulSpineAssetByPair", &USpineFuncLibrary::execGetUsefulSpineAssetByPair },
			{ "GetUsefulSpineAssetByPath", &USpineFuncLibrary::execGetUsefulSpineAssetByPath },
			{ "SaveCurrentSpineAsset", &USpineFuncLibrary::execSaveCurrentSpineAsset },
			{ "SaveToDataTable", &USpineFuncLibrary::execSaveToDataTable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineAtlasAsset_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct SpineFuncLibrary_eventGetAllSpineAtlasAsset_Parms
		{
			TArray<FAssetData> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineAtlasAsset_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineAtlasAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineFuncLibrary_eventGetAllSpineAtlasAsset_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineAtlasAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineAtlasAsset_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineAtlasAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineAtlasAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpineFuncLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineAtlasAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineFuncLibrary, nullptr, "GetAllSpineAtlasAsset", nullptr, nullptr, Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineAtlasAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineAtlasAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineAtlasAsset_Statics::SpineFuncLibrary_eventGetAllSpineAtlasAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineAtlasAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineAtlasAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineAtlasAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineAtlasAsset_Statics::SpineFuncLibrary_eventGetAllSpineAtlasAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineAtlasAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineAtlasAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineDataTable_Statics
	{
		struct SpineFuncLibrary_eventGetAllSpineDataTable_Parms
		{
			TArray<UDataTable*> DataTables;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTables_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataTables;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineDataTable_Statics::NewProp_DataTables_Inner = { "DataTables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineDataTable_Statics::NewProp_DataTables = { "DataTables", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineFuncLibrary_eventGetAllSpineDataTable_Parms, DataTables), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineDataTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineDataTable_Statics::NewProp_DataTables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineDataTable_Statics::NewProp_DataTables,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineDataTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpineFuncLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineFuncLibrary, nullptr, "GetAllSpineDataTable", nullptr, nullptr, Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineDataTable_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineDataTable_Statics::SpineFuncLibrary_eventGetAllSpineDataTable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineDataTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineDataTable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineDataTable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineDataTable_Statics::SpineFuncLibrary_eventGetAllSpineDataTable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineSkeletonAsset_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct SpineFuncLibrary_eventGetAllSpineSkeletonAsset_Parms
		{
			TArray<FAssetData> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineSkeletonAsset_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineSkeletonAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineFuncLibrary_eventGetAllSpineSkeletonAsset_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineSkeletonAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineSkeletonAsset_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineSkeletonAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineSkeletonAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpineFuncLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineSkeletonAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineFuncLibrary, nullptr, "GetAllSpineSkeletonAsset", nullptr, nullptr, Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineSkeletonAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineSkeletonAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineSkeletonAsset_Statics::SpineFuncLibrary_eventGetAllSpineSkeletonAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineSkeletonAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineSkeletonAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineSkeletonAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineSkeletonAsset_Statics::SpineFuncLibrary_eventGetAllSpineSkeletonAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineSkeletonAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineSkeletonAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineFuncLibrary_GetAllSubClassNames_Statics
	{
		struct SpineFuncLibrary_eventGetAllSubClassNames_Parms
		{
			TArray<UClass*> SpineChars;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_SpineChars_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpineChars;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USpineFuncLibrary_GetAllSubClassNames_Statics::NewProp_SpineChars_Inner = { "SpineChars", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USpineFuncLibrary_GetAllSubClassNames_Statics::NewProp_SpineChars = { "SpineChars", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineFuncLibrary_eventGetAllSubClassNames_Parms, SpineChars), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineFuncLibrary_GetAllSubClassNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineFuncLibrary_GetAllSubClassNames_Statics::NewProp_SpineChars_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineFuncLibrary_GetAllSubClassNames_Statics::NewProp_SpineChars,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineFuncLibrary_GetAllSubClassNames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpineFuncLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineFuncLibrary_GetAllSubClassNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineFuncLibrary, nullptr, "GetAllSubClassNames", nullptr, nullptr, Z_Construct_UFunction_USpineFuncLibrary_GetAllSubClassNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineFuncLibrary_GetAllSubClassNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpineFuncLibrary_GetAllSubClassNames_Statics::SpineFuncLibrary_eventGetAllSubClassNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineFuncLibrary_GetAllSubClassNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpineFuncLibrary_GetAllSubClassNames_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineFuncLibrary_GetAllSubClassNames_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USpineFuncLibrary_GetAllSubClassNames_Statics::SpineFuncLibrary_eventGetAllSubClassNames_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USpineFuncLibrary_GetAllSubClassNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineFuncLibrary_GetAllSubClassNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPair_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct SpineFuncLibrary_eventGetUsefulSpineAssetByPair_Parms
		{
			TArray<FAssetData> SkelData;
			TArray<FAssetData> Atlas;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkelData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SkelData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Atlas_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Atlas;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPair_Statics::NewProp_SkelData_Inner = { "SkelData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPair_Statics::NewProp_SkelData = { "SkelData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineFuncLibrary_eventGetUsefulSpineAssetByPair_Parms, SkelData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPair_Statics::NewProp_Atlas_Inner = { "Atlas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPair_Statics::NewProp_Atlas = { "Atlas", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineFuncLibrary_eventGetUsefulSpineAssetByPair_Parms, Atlas), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPair_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineFuncLibrary_eventGetUsefulSpineAssetByPair_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPair_Statics::NewProp_SkelData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPair_Statics::NewProp_SkelData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPair_Statics::NewProp_Atlas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPair_Statics::NewProp_Atlas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPair_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPair_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpineFuncLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPair_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineFuncLibrary, nullptr, "GetUsefulSpineAssetByPair", nullptr, nullptr, Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPair_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPair_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPair_Statics::SpineFuncLibrary_eventGetUsefulSpineAssetByPair_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPair_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPair_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPair_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPair_Statics::SpineFuncLibrary_eventGetUsefulSpineAssetByPair_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPair()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPair_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPath_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct SpineFuncLibrary_eventGetUsefulSpineAssetByPath_Parms
		{
			TArray<FAssetData> SkelData;
			TArray<FAssetData> Atlas;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkelData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SkelData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Atlas_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Atlas;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPath_Statics::NewProp_SkelData_Inner = { "SkelData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPath_Statics::NewProp_SkelData = { "SkelData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineFuncLibrary_eventGetUsefulSpineAssetByPath_Parms, SkelData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPath_Statics::NewProp_Atlas_Inner = { "Atlas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPath_Statics::NewProp_Atlas = { "Atlas", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineFuncLibrary_eventGetUsefulSpineAssetByPath_Parms, Atlas), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineFuncLibrary_eventGetUsefulSpineAssetByPath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPath_Statics::NewProp_SkelData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPath_Statics::NewProp_SkelData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPath_Statics::NewProp_Atlas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPath_Statics::NewProp_Atlas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpineFuncLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineFuncLibrary, nullptr, "GetUsefulSpineAssetByPath", nullptr, nullptr, Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPath_Statics::SpineFuncLibrary_eventGetUsefulSpineAssetByPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPath_Statics::SpineFuncLibrary_eventGetUsefulSpineAssetByPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineFuncLibrary_SaveCurrentSpineAsset_Statics
	{
		struct SpineFuncLibrary_eventSaveCurrentSpineAsset_Parms
		{
			TSubclassOf<AActor>  SpineChar;
			FString PackageName;
			USpineAtlasAsset* SpineAtlasAsset;
			USpineSkeletonDataAsset* SpineSkeletonDataAsset;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_SpineChar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackageName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpineAtlasAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpineSkeletonDataAsset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USpineFuncLibrary_SaveCurrentSpineAsset_Statics::NewProp_SpineChar = { "SpineChar", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineFuncLibrary_eventSaveCurrentSpineAsset_Parms, SpineChar), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineFuncLibrary_SaveCurrentSpineAsset_Statics::NewProp_PackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpineFuncLibrary_SaveCurrentSpineAsset_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineFuncLibrary_eventSaveCurrentSpineAsset_Parms, PackageName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineFuncLibrary_SaveCurrentSpineAsset_Statics::NewProp_PackageName_MetaData), Z_Construct_UFunction_USpineFuncLibrary_SaveCurrentSpineAsset_Statics::NewProp_PackageName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineFuncLibrary_SaveCurrentSpineAsset_Statics::NewProp_SpineAtlasAsset = { "SpineAtlasAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineFuncLibrary_eventSaveCurrentSpineAsset_Parms, SpineAtlasAsset), Z_Construct_UClass_USpineAtlasAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineFuncLibrary_SaveCurrentSpineAsset_Statics::NewProp_SpineSkeletonDataAsset = { "SpineSkeletonDataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineFuncLibrary_eventSaveCurrentSpineAsset_Parms, SpineSkeletonDataAsset), Z_Construct_UClass_USpineSkeletonDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USpineFuncLibrary_SaveCurrentSpineAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpineFuncLibrary_eventSaveCurrentSpineAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpineFuncLibrary_SaveCurrentSpineAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpineFuncLibrary_eventSaveCurrentSpineAsset_Parms), &Z_Construct_UFunction_USpineFuncLibrary_SaveCurrentSpineAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineFuncLibrary_SaveCurrentSpineAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineFuncLibrary_SaveCurrentSpineAsset_Statics::NewProp_SpineChar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineFuncLibrary_SaveCurrentSpineAsset_Statics::NewProp_PackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineFuncLibrary_SaveCurrentSpineAsset_Statics::NewProp_SpineAtlasAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineFuncLibrary_SaveCurrentSpineAsset_Statics::NewProp_SpineSkeletonDataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineFuncLibrary_SaveCurrentSpineAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineFuncLibrary_SaveCurrentSpineAsset_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_PackageName", "SpineActor" },
		{ "CPP_Default_SpineAtlasAsset", "None" },
		{ "CPP_Default_SpineSkeletonDataAsset", "None" },
		{ "ModuleRelativePath", "Public/SpineFuncLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineFuncLibrary_SaveCurrentSpineAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineFuncLibrary, nullptr, "SaveCurrentSpineAsset", nullptr, nullptr, Z_Construct_UFunction_USpineFuncLibrary_SaveCurrentSpineAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineFuncLibrary_SaveCurrentSpineAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpineFuncLibrary_SaveCurrentSpineAsset_Statics::SpineFuncLibrary_eventSaveCurrentSpineAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineFuncLibrary_SaveCurrentSpineAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpineFuncLibrary_SaveCurrentSpineAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineFuncLibrary_SaveCurrentSpineAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USpineFuncLibrary_SaveCurrentSpineAsset_Statics::SpineFuncLibrary_eventSaveCurrentSpineAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USpineFuncLibrary_SaveCurrentSpineAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineFuncLibrary_SaveCurrentSpineAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpineFuncLibrary_SaveToDataTable_Statics
	{
		struct SpineFuncLibrary_eventSaveToDataTable_Parms
		{
			UDataTable* DataTable;
			FName RowName;
			USpineAtlasAsset* AtlasAsset;
			USpineSkeletonDataAsset* SkeletonDataAsset;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AtlasAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletonDataAsset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineFuncLibrary_SaveToDataTable_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineFuncLibrary_eventSaveToDataTable_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USpineFuncLibrary_SaveToDataTable_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineFuncLibrary_eventSaveToDataTable_Parms, RowName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineFuncLibrary_SaveToDataTable_Statics::NewProp_AtlasAsset = { "AtlasAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineFuncLibrary_eventSaveToDataTable_Parms, AtlasAsset), Z_Construct_UClass_USpineAtlasAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpineFuncLibrary_SaveToDataTable_Statics::NewProp_SkeletonDataAsset = { "SkeletonDataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpineFuncLibrary_eventSaveToDataTable_Parms, SkeletonDataAsset), Z_Construct_UClass_USpineSkeletonDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USpineFuncLibrary_SaveToDataTable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpineFuncLibrary_eventSaveToDataTable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpineFuncLibrary_SaveToDataTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpineFuncLibrary_eventSaveToDataTable_Parms), &Z_Construct_UFunction_USpineFuncLibrary_SaveToDataTable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpineFuncLibrary_SaveToDataTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineFuncLibrary_SaveToDataTable_Statics::NewProp_DataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineFuncLibrary_SaveToDataTable_Statics::NewProp_RowName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineFuncLibrary_SaveToDataTable_Statics::NewProp_AtlasAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineFuncLibrary_SaveToDataTable_Statics::NewProp_SkeletonDataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpineFuncLibrary_SaveToDataTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpineFuncLibrary_SaveToDataTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpineFuncLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpineFuncLibrary_SaveToDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpineFuncLibrary, nullptr, "SaveToDataTable", nullptr, nullptr, Z_Construct_UFunction_USpineFuncLibrary_SaveToDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpineFuncLibrary_SaveToDataTable_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpineFuncLibrary_SaveToDataTable_Statics::SpineFuncLibrary_eventSaveToDataTable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineFuncLibrary_SaveToDataTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpineFuncLibrary_SaveToDataTable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpineFuncLibrary_SaveToDataTable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USpineFuncLibrary_SaveToDataTable_Statics::SpineFuncLibrary_eventSaveToDataTable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USpineFuncLibrary_SaveToDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpineFuncLibrary_SaveToDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpineFuncLibrary);
	UClass* Z_Construct_UClass_USpineFuncLibrary_NoRegister()
	{
		return USpineFuncLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USpineFuncLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpineFuncLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SpinePlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpineFuncLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USpineFuncLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineAtlasAsset, "GetAllSpineAtlasAsset" }, // 1741104266
		{ &Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineDataTable, "GetAllSpineDataTable" }, // 3569389431
		{ &Z_Construct_UFunction_USpineFuncLibrary_GetAllSpineSkeletonAsset, "GetAllSpineSkeletonAsset" }, // 1225598754
		{ &Z_Construct_UFunction_USpineFuncLibrary_GetAllSubClassNames, "GetAllSubClassNames" }, // 3096704431
		{ &Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPair, "GetUsefulSpineAssetByPair" }, // 3333752598
		{ &Z_Construct_UFunction_USpineFuncLibrary_GetUsefulSpineAssetByPath, "GetUsefulSpineAssetByPath" }, // 278096603
		{ &Z_Construct_UFunction_USpineFuncLibrary_SaveCurrentSpineAsset, "SaveCurrentSpineAsset" }, // 2684129439
		{ &Z_Construct_UFunction_USpineFuncLibrary_SaveToDataTable, "SaveToDataTable" }, // 3948002269
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpineFuncLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineFuncLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SpineFuncLibrary.h" },
		{ "ModuleRelativePath", "Public/SpineFuncLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpineFuncLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpineFuncLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpineFuncLibrary_Statics::ClassParams = {
		&USpineFuncLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineFuncLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USpineFuncLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USpineFuncLibrary()
	{
		if (!Z_Registration_Info_UClass_USpineFuncLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpineFuncLibrary.OuterSingleton, Z_Construct_UClass_USpineFuncLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpineFuncLibrary.OuterSingleton;
	}
	template<> SPINEPLUGIN_API UClass* StaticClass<USpineFuncLibrary>()
	{
		return USpineFuncLibrary::StaticClass();
	}
	USpineFuncLibrary::USpineFuncLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpineFuncLibrary);
	USpineFuncLibrary::~USpineFuncLibrary() {}
	struct Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineFuncLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineFuncLibrary_h_Statics::ScriptStructInfo[] = {
		{ FSpineInfo::StaticStruct, Z_Construct_UScriptStruct_FSpineInfo_Statics::NewStructOps, TEXT("SpineInfo"), &Z_Registration_Info_UScriptStruct_SpineInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpineInfo), 1695537221U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineFuncLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpineFuncLibrary, USpineFuncLibrary::StaticClass, TEXT("USpineFuncLibrary"), &Z_Registration_Info_UClass_USpineFuncLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpineFuncLibrary), 746032351U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineFuncLibrary_h_712425934(TEXT("/Script/SpinePlugin"),
		Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineFuncLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineFuncLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineFuncLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineFuncLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
