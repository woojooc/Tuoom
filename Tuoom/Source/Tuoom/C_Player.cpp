// Fill out your copyright notice in the Description page of Project Settings.


#include "C_Player.h"

#include "C_PlayerAnimInstance.h"
#include "C_PlayerHandComponent.h"
#include "C_PlayerMoveComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "MotionControllerComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/WidgetInteractionComponent.h"


AC_Player::AC_Player()
{
 	
	PrimaryActorTick.bCanEverTick = true;

	SetRootComponent(GetCapsuleComponent());

	cameraRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Camera Root"));
	cameraRoot->SetupAttachment(RootComponent);
	cameraRoot->SetRelativeLocation(FVector(0, 0, 30.0f));

	playerCam = CreateDefaultSubobject<UCameraComponent>(TEXT("MainCamera"));
	playerCam->SetupAttachment(cameraRoot);

	leftController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("LeftMotionController"));
	leftController->SetupAttachment(cameraRoot);
	leftController->MotionSource = "Left";

	rightController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("RightMotionController"));
	rightController->SetupAttachment(cameraRoot);
	rightController->MotionSource = "Right";
	
	moveComp = CreateDefaultSubobject<UC_PlayerMoveComponent>(TEXT("MoveComponent"));
	handComp = CreateDefaultSubobject<UC_PlayerHandComponent>(TEXT("HandComponent"));
	
	//widgetPointer_L = CreateDefaultSubobject<UWidgetInteractionComponent>(TEXT("Widget Pointer_L"));
	//widgetPointer_L->SetupAttachment(leftController);
	//widgetPointer_R = CreateDefaultSubobject<UWidgetInteractionComponent>(TEXT("Widget Pointer_R"));
	//widgetPointer_R->SetupAttachment(rightController);
}

// Called when the game starts or when spawned
void AC_Player::BeginPlay()
{
	Super::BeginPlay();


	UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(hmdRotate, hmdLocation);
	UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Eye);
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();

	anim = Cast<UC_PlayerAnimInstance>(GetMesh()->GetAnimInstance());
	
}

// Called every frame
void AC_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (anim)
	{
	
		anim->leftHandLocation = leftController->GetComponentLocation();
		anim->leftHandRotation = leftController->GetComponentRotation();
		anim->rightHandLocation = rightController->GetComponentLocation();
		anim->rightHandRotation = rightController->GetComponentRotation();
		anim->headLocation = playerCam->GetComponentLocation() - playerCam->GetForwardVector()* 0.15f;
		anim->headRotation = playerCam->GetComponentRotation();
	}
}

// Called to bind functionality to input
void AC_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	PlayerInputComponent->BindAction("ResetVR",IE_Pressed,this, &AC_Player::ResetHMD);
	moveComp->SetupPlayerInputComponent(PlayerInputComponent);
	handComp->SetupPlayerInputComponent(PlayerInputComponent);
}

void AC_Player::ResetHMD()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}


