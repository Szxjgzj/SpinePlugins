// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SpineSkeletonAnimationComponent.h"
#include "SpineAnimSMS.generated.h"

class USMInstance;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SPINEPLUGIN_API USpineAnimSMS : public USpineSkeletonAnimationComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	USpineAnimSMS();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TSubclassOf<USMInstance> SpineAnimBp;


	UFUNCTION(BlueprintCallable)
	USMInstance* GetStateMachine();
	
private:
	USMInstance* StateMachineClass;
};
