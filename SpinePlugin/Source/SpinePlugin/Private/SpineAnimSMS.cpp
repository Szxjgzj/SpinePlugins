// Fill out your copyright notice in the Description page of Project Settings.


#include "SpineAnimSMS.h"

#include "SMUtils.h"
#include "SpineChar.h"


// Sets default values for this component's properties
USpineAnimSMS::USpineAnimSMS()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
	// ...
}


// Called when the game starts
void USpineAnimSMS::BeginPlay()
{
	Super::BeginPlay();
	ASpineChar* SpineChar = Cast<ASpineChar>(GetOwner());
	if (SpineChar)
	{
		StateMachineClass = USMBlueprintUtils::CreateStateMachineInstance(SpineAnimBp,SpineChar,true);
		if(StateMachineClass)
		{
			StateMachineClass->Start();
			UE_LOG(LogTemp,Warning,TEXT("SM:%s"),*StateMachineClass->GetName());
		}
	}
}


// Called every frame
void USpineAnimSMS::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

USMInstance* USpineAnimSMS::GetStateMachine()
{
	return StateMachineClass;
}

