// Fill out your copyright notice in the Description page of Project Settings.


#include "WJ_VJingTable.h"

// Sets default values
AWJ_VJingTable::AWJ_VJingTable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	rootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
	SetRootComponent(rootComp);

	bodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	bodyMesh->SetupAttachment(rootComp);

	playList = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayList"));
	playList->SetupAttachment(rootComp);

	auto fxPressBtnRoot = CreateDefaultSubobject<USceneComponent>(TEXT("FxPressBtns"));
	fxPressBtnRoot->SetupAttachment(rootComp);
	for (int i = 0; i < 12; i++)
	{
		FString compName = FString::Printf(TEXT("FxPressBtn%02d") ,i + 1);
		auto btn = CreateDefaultSubobject<UStaticMeshComponent>(FName(compName));
		btn->SetupAttachment(fxPressBtnRoot);
		fxPressBtns.Add(btn);
	}

	auto fxTurnBtnRoot = CreateDefaultSubobject<USceneComponent>(TEXT("FxTurnBtns"));
	fxTurnBtnRoot->SetupAttachment(rootComp);
	for (int i = 0; i < 8; i++)
	{
		FString compName = FString::Printf(TEXT("FxTurnBtn%02d"), i + 1);
		auto btn = CreateDefaultSubobject<UStaticMeshComponent>(FName(compName));
		btn->SetupAttachment(fxTurnBtnRoot);
		fxTurnBtns.Add(btn);
	}

	auto playListBtnRoot = CreateDefaultSubobject<USceneComponent>(TEXT("playListBtns"));
	playListBtnRoot->SetupAttachment(rootComp);
	for (int i = 0; i < 3; i++)
	{
		FString compName = FString::Printf(TEXT("playListBtn%02d"), i + 1);
		auto btn = CreateDefaultSubobject<UStaticMeshComponent>(FName(compName));
		btn->SetupAttachment(playListBtnRoot);
		playListBtns.Add(btn);
	}
}

// Called when the game starts or when spawned
void AWJ_VJingTable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWJ_VJingTable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

