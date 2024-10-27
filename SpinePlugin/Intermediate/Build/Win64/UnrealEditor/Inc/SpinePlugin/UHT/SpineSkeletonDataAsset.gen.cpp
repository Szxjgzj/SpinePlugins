// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpineSkeletonDataAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineSkeletonDataAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonDataAsset();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonDataAsset_NoRegister();
	SPINEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSpineAnimationStateMixData();
	UPackage* Z_Construct_UPackage__Script_SpinePlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpineAnimationStateMixData;
class UScriptStruct* FSpineAnimationStateMixData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpineAnimationStateMixData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpineAnimationStateMixData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpineAnimationStateMixData, (UObject*)Z_Construct_UPackage__Script_SpinePlugin(), TEXT("SpineAnimationStateMixData"));
	}
	return Z_Registration_Info_UScriptStruct_SpineAnimationStateMixData.OuterSingleton;
}
template<> SPINEPLUGIN_API UScriptStruct* StaticStruct<FSpineAnimationStateMixData>()
{
	return FSpineAnimationStateMixData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_From;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_To_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_To;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mix_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Spine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// clang-format on\n" },
#endif
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "clang-format on" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpineAnimationStateMixData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_From_MetaData[] = {
		{ "Category", "SpineAnimationStateMixData" },
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpineAnimationStateMixData, From), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_From_MetaData), Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_From_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_To_MetaData[] = {
		{ "Category", "SpineAnimationStateMixData" },
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpineAnimationStateMixData, To), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_To_MetaData), Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_To_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_Mix_MetaData[] = {
		{ "Category", "SpineAnimationStateMixData" },
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_Mix = { "Mix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpineAnimationStateMixData, Mix), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_Mix_MetaData), Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_Mix_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_From,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_To,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewProp_Mix,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SpinePlugin,
		nullptr,
		&NewStructOps,
		"SpineAnimationStateMixData",
		Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::PropPointers),
		sizeof(FSpineAnimationStateMixData),
		alignof(FSpineAnimationStateMixData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSpineAnimationStateMixData()
	{
		if (!Z_Registration_Info_UScriptStruct_SpineAnimationStateMixData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpineAnimationStateMixData.InnerSingleton, Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SpineAnimationStateMixData.InnerSingleton;
	}
	void USpineSkeletonDataAsset::StaticRegisterNativesUSpineSkeletonDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpineSkeletonDataAsset);
	UClass* Z_Construct_UClass_USpineSkeletonDataAsset_NoRegister()
	{
		return USpineSkeletonDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_USpineSkeletonDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMix_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultMix;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MixData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MixData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MixData;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Bones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bones;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Slots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Slots;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Skins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Skins;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Animations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Animations;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Events_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Events;
		static const UECodeGen_Private::FBytePropertyParams NewProp_rawData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rawData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_rawData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skeletonDataFileName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_skeletonDataFileName;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_importData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_importData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpineSkeletonDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SpinePlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Spine" },
		{ "IncludePath", "SpineSkeletonDataAsset.h" },
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_DefaultMix_MetaData[] = {
		{ "Category", "SpineSkeletonDataAsset" },
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_DefaultMix = { "DefaultMix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpineSkeletonDataAsset, DefaultMix), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_DefaultMix_MetaData), Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_DefaultMix_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_MixData_Inner = { "MixData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSpineAnimationStateMixData, METADATA_PARAMS(0, nullptr) }; // 3916830909
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_MixData_MetaData[] = {
		{ "Category", "SpineSkeletonDataAsset" },
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_MixData = { "MixData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpineSkeletonDataAsset, MixData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_MixData_MetaData), Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_MixData_MetaData) }; // 3916830909
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Bones_Inner = { "Bones", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Bones_MetaData[] = {
		{ "Category", "SpineSkeletonDataAsset" },
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Bones = { "Bones", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpineSkeletonDataAsset, Bones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Bones_MetaData), Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Bones_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Slots_Inner = { "Slots", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Slots_MetaData[] = {
		{ "Category", "SpineSkeletonDataAsset" },
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Slots = { "Slots", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpineSkeletonDataAsset, Slots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Slots_MetaData), Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Slots_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Skins_Inner = { "Skins", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Skins_MetaData[] = {
		{ "Category", "SpineSkeletonDataAsset" },
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Skins = { "Skins", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpineSkeletonDataAsset, Skins), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Skins_MetaData), Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Skins_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Animations_Inner = { "Animations", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Animations_MetaData[] = {
		{ "Category", "SpineSkeletonDataAsset" },
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Animations = { "Animations", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpineSkeletonDataAsset, Animations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Animations_MetaData), Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Animations_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Events_MetaData[] = {
		{ "Category", "SpineSkeletonDataAsset" },
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpineSkeletonDataAsset, Events), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Events_MetaData), Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Events_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_rawData_Inner = { "rawData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_rawData_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_rawData = { "rawData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpineSkeletonDataAsset, rawData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_rawData_MetaData), Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_rawData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_skeletonDataFileName_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_skeletonDataFileName = { "skeletonDataFileName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpineSkeletonDataAsset, skeletonDataFileName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_skeletonDataFileName_MetaData), Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_skeletonDataFileName_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_importData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpineSkeletonDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_importData = { "importData", nullptr, (EPropertyFlags)0x00220808000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpineSkeletonDataAsset, importData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_importData_MetaData), Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_importData_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpineSkeletonDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_DefaultMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_MixData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_MixData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Bones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Bones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Slots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Slots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Skins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Skins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Animations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Animations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Events_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_Events,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_rawData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_rawData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_skeletonDataFileName,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineSkeletonDataAsset_Statics::NewProp_importData,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpineSkeletonDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpineSkeletonDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpineSkeletonDataAsset_Statics::ClassParams = {
		&USpineSkeletonDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpineSkeletonDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_USpineSkeletonDataAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpineSkeletonDataAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USpineSkeletonDataAsset()
	{
		if (!Z_Registration_Info_UClass_USpineSkeletonDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpineSkeletonDataAsset.OuterSingleton, Z_Construct_UClass_USpineSkeletonDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpineSkeletonDataAsset.OuterSingleton;
	}
	template<> SPINEPLUGIN_API UClass* StaticClass<USpineSkeletonDataAsset>()
	{
		return USpineSkeletonDataAsset::StaticClass();
	}
	USpineSkeletonDataAsset::USpineSkeletonDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpineSkeletonDataAsset);
	USpineSkeletonDataAsset::~USpineSkeletonDataAsset() {}
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USpineSkeletonDataAsset)
#endif
	struct Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonDataAsset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonDataAsset_h_Statics::ScriptStructInfo[] = {
		{ FSpineAnimationStateMixData::StaticStruct, Z_Construct_UScriptStruct_FSpineAnimationStateMixData_Statics::NewStructOps, TEXT("SpineAnimationStateMixData"), &Z_Registration_Info_UScriptStruct_SpineAnimationStateMixData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpineAnimationStateMixData), 3916830909U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpineSkeletonDataAsset, USpineSkeletonDataAsset::StaticClass, TEXT("USpineSkeletonDataAsset"), &Z_Registration_Info_UClass_USpineSkeletonDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpineSkeletonDataAsset), 3576038328U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonDataAsset_h_1708404106(TEXT("/Script/SpinePlugin"),
		Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonDataAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonDataAsset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
