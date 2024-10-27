// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SpineAnimSMS.h"
#include "SpineSkeletonAnimationComponent.h"
#include "SpineSkeletonRendererComponent.h"
#include "GameFramework/Character.h"
#include "SpineChar.generated.h"

UCLASS(Blueprintable,BlueprintType)
class SPINEPLUGIN_API ASpineChar : public ACharacter
{
	GENERATED_BODY()

public:
	ASpineChar(const FObjectInitializer& ObjectInitializer);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	USpineAnimSMS* SpineAnimSMS;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	USpineSkeletonRendererComponent* SpineRender;
};
