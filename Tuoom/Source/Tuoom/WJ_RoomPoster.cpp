// Fill out your copyright notice in the Description page of Project Settings.


#include "WJ_RoomPoster.h"
#include <Components/BoxComponent.h>
#include <Kismet/GameplayStatics.h>
#include "WJ_TuoomGameInstance.h"

// Sets default values
AWJ_RoomPoster::AWJ_RoomPoster()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	SetRootComponent(boxComp);

	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	meshComp->SetupAttachment(boxComp);
}

// Called when the game starts or when spawned
void AWJ_RoomPoster::BeginPlay()
{
	Super::BeginPlay();
	
	meshComp->OnClicked.AddDynamic(this, &AWJ_RoomPoster::EnterRoom);
}

// Called every frame
void AWJ_RoomPoster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWJ_RoomPoster::SetPoster()
{

}

void AWJ_RoomPoster::EnterRoom(UPrimitiveComponent* TouchedComponent, FKey ButtonPressed)
{
	// ��� �̵�
	UGameplayStatics::OpenLevel(GetWorld(),TEXT("PlayRoom"));

	// ������ ���, �����Ϳ� ����� �������� �̵�

	// ���� ���� ���� ����
	Cast<UWJ_TuoomGameInstance>(GetGameInstance())->SetLevelState(ELevelState::PlayRoom);

}

