// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SpineAtlasAsset.h"
#include "SpineSkeletonDataAsset.h"
#include "UObject/Object.h"
#include "SpineMesh.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class SPINEDATA_API USpineMesh : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	USpineAtlasAsset* SpineAtlasAsset;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	USpineSkeletonDataAsset* SpineSkelAsset;
};
