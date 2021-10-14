// Fill out your copyright notice in the Description page of Project Settings.


#include "C_PlayerMoveComponent.h"

#include "C_Player.h"
#include "Components/WidgetInteractionComponent.h"

// Sets default values for this component's properties
UC_PlayerMoveComponent::UC_PlayerMoveComponent()
{
	
	PrimaryComponentTick.bCanEverTick = false;

	
}


void UC_PlayerMoveComponent::BeginPlay()
{
	Super::BeginPlay();

	player = Cast<AC_Player>(GetOwner());
	
}



void UC_PlayerMoveComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	
}

void UC_PlayerMoveComponent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	PlayerInputComponent->BindAxis("MovementAxisLeft_X", this, &UC_PlayerMoveComponent::MoveHorizontal);
	PlayerInputComponent->BindAxis("MovementAxisLeft_Y", this, &UC_PlayerMoveComponent::MoveVertical);
	PlayerInputComponent->BindAxis("MovementAxisRight_X", this, &UC_PlayerMoveComponent::RotateHorizontal);
	PlayerInputComponent->BindAction("TriggerLeft", IE_Pressed, this, &UC_PlayerMoveComponent::ButtonClick);
	PlayerInputComponent->BindAction("TriggerLeft", IE_Released, this, &UC_PlayerMoveComponent::ButtonRelease);
}

void UC_PlayerMoveComponent::MoveHorizontal(float value)
{
	if(player == nullptr)
	{
		return;
	}
	FVector dir = player->GetActorRightVector() * value;
	player->SetActorLocation(player->GetActorLocation() + dir * moveSpeed * GetWorld()->DeltaTimeSeconds);
}

void UC_PlayerMoveComponent::MoveVertical(float value)
{
	if (player == nullptr)
	{
		return;
	}
	FVector dir = player->GetActorForwardVector() * value;
	player->SetActorLocation(player->GetActorLocation() + dir * moveSpeed * GetWorld()->DeltaTimeSeconds);
}

void UC_PlayerMoveComponent::RotateHorizontal(float value)
{
	if (player == nullptr)
	{
		return;
	}
	//FRotator rot = FRotator(0, value* rotateSpeed* GetWorld()->DeltaTimeSeconds, 0);
	//player->AddActorLocalRotation(rot);
	player->AddControllerYawInput(value);
}

void UC_PlayerMoveComponent::ButtonClick()
{
	player->widgetPointer->PressPointerKey(EKeys::LeftMouseButton);
}

void UC_PlayerMoveComponent::ButtonRelease()
{
	player->widgetPointer->ReleasePointerKey(EKeys::LeftMouseButton);
}

