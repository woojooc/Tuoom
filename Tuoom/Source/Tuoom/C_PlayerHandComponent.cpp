// Fill out your copyright notice in the Description page of Project Settings.


#include "C_PlayerHandComponent.h"

#include "C_Player.h"
#include "DrawDebugHelpers.h"
#include "MotionControllerComponent.h"
#include "Components/WidgetInteractionComponent.h"
#include "Kismet/GameplayStatics.h"


UC_PlayerHandComponent::UC_PlayerHandComponent()
{
	
	PrimaryComponentTick.bCanEverTick = true;

	

}



void UC_PlayerHandComponent::BeginPlay()
{
	Super::BeginPlay();

	player = Cast<AC_Player>(GetOwner());
	
}



void UC_PlayerHandComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	switch (levelState)
	{
	case ELevelState::Lobby:
		Lobby();
		break;
	case ELevelState::CustomRoom:
		CustomRoom();
		break;
	case ELevelState::PlayRoom:
		PlayRoom();
		break;
	}
				
	
}

void UC_PlayerHandComponent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	
	PlayerInputComponent->BindAction("TriggerRight", IE_Pressed, this, &UC_PlayerHandComponent::Click);
}

void UC_PlayerHandComponent::Click()
{
	if (bHit_L)
	{

		GEngine->AddOnScreenDebugMessage(-1,3.f,FColor::Red, FString::Printf(TEXT("Click")));
	}
	
}

void UC_PlayerHandComponent::Lobby()
{

		FHitResult hitinfo_L;
		FHitResult hitinfo_R;
		FVector startPos_L = player->leftController->GetComponentLocation();
		FVector endPos_L = startPos_L + player->leftController->GetForwardVector() * 30;
		FVector lineEndPos_L = startPos_L + player->leftController->GetForwardVector() * 500;
		FVector startPos_R = player->rightController->GetComponentLocation();
		FVector endPos_R = startPos_R + player->rightController->GetForwardVector() * 30;
		FVector lineEndPos_R = startPos_R + player->rightController->GetForwardVector() * 500;

		FCollisionQueryParams params;
		params.AddIgnoredActor(player);
		FCollisionObjectQueryParams objParams;
		objParams.AddObjectTypesToQuery(ECC_WorldStatic);
		objParams.AddObjectTypesToQuery(ECC_WorldDynamic);

		
		bHit_L = GetWorld()->LineTraceSingleByObjectType(hitinfo_L, startPos_L, lineEndPos_L, objParams, params);
		bHit_R = GetWorld()->LineTraceSingleByObjectType(hitinfo_R, startPos_R, lineEndPos_R, objParams, params);
		if (bHit_L)
		{
			DrawDebugLine(GetWorld(), startPos_L, hitinfo_L.ImpactPoint, FColor::Green, false, -1, 0, 1);
		}
		else
		{
			DrawDebugLine(GetWorld(), startPos_L, endPos_L, FColor::Red, false, -1, 0, 1);
		}
		if (bHit_R)
		{
			DrawDebugLine(GetWorld(), startPos_R, hitinfo_R.ImpactPoint, FColor::Green, false, -1, 0, 1);
		}
		else
		{
		DrawDebugLine(GetWorld(), startPos_R, endPos_R, FColor::Red, false, -1, 0, 1);

		}
	
}

void UC_PlayerHandComponent::CustomRoom()
{
	
}

void UC_PlayerHandComponent::PlayRoom()
{
	
}

