// Fill out your copyright notice in the Description page of Project Settings.
#include "SpineChar.h"

ASpineChar::ASpineChar(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer.DoNotCreateDefaultSubobject(ACharacter::MeshComponentName))
{
	PrimaryActorTick.bCanEverTick = true;
	SpineAnimSMS = CreateDefaultSubobject<USpineAnimSMS>(TEXT("SpineAnimSMS"));
	SpineRender = CreateDefaultSubobject<USpineSkeletonRendererComponent>(TEXT("SpineRender"));
	
	SpineRender->SetupAttachment(GetRootComponent());
	SpineRender->SetRelativeLocation(FVector(0,0,0),0,0);
}

void ASpineChar::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASpineChar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASpineChar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

