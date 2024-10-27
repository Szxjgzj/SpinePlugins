// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SpineAtlasAsset.h"
#include "SpineSkeletonDataAsset.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SpineFuncLibrary.generated.h"


USTRUCT(BlueprintType)
struct  FSpineInfo :public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	TSoftObjectPtr<USpineAtlasAsset> AtlasAsset;

	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	TSoftObjectPtr<USpineSkeletonDataAsset> SkeletonDataAsset;
};
/**
 * 
 */
UCLASS()
class SPINEPLUGIN_API USpineFuncLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	static TArray<FAssetData> GetAllSpineAtlasAsset();

	UFUNCTION(BlueprintCallable)
	static TArray<FAssetData> GetAllSpineSkeletonAsset();

	UFUNCTION(BlueprintCallable)
	static int32 GetUsefulSpineAssetByPath(TArray<FAssetData>& SkelData,TArray<FAssetData>& Atlas);

	UFUNCTION(BlueprintCallable)
	static int32 GetUsefulSpineAssetByPair(TArray<FAssetData>& SkelData,TArray<FAssetData>& Atlas);
	
	UFUNCTION(BlueprintCallable)
	static bool SaveCurrentSpineAsset(TSubclassOf<AActor> SpineChar,const FString&PackageName = "SpineActor",USpineAtlasAsset* SpineAtlasAsset = nullptr,USpineSkeletonDataAsset* SpineSkeletonDataAsset = nullptr);

	UFUNCTION(BlueprintCallable)
	static void GetAllSubClassNames(TArray<UClass*>& SpineChars);

	UFUNCTION(BlueprintCallable)
	static void GetAllSpineDataTable(TArray<UDataTable*>& DataTables);

	UFUNCTION(BlueprintCallable)
	static bool SaveToDataTable(UDataTable* DataTable,FName RowName,USpineAtlasAsset* AtlasAsset,USpineSkeletonDataAsset* SkeletonDataAsset);
};
