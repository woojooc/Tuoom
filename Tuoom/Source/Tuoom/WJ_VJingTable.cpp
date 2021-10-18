

#include "WJ_VJingTable.h"
#include "WJ_PlayListCtr.h"
#include "WJ_RoomGameModeBase.h"
#include "WJ_Button.h"

AWJ_VJingTable::AWJ_VJingTable()
{
	PrimaryActorTick.bCanEverTick = true;

#pragma region Mesh

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
		auto btn = CreateDefaultSubobject<UChildActorComponent>(FName(*compName));
		btn->SetChildActorClass(AWJ_Button::StaticClass());
		btn->SetupAttachment(fxPressBtnRoot);
		fxPressBtns.Add(btn);
		//fxPressBtns.Add(Cast<AWJ_Button>(btn));
	}

	auto fxTurnBtnRoot = CreateDefaultSubobject<USceneComponent>(TEXT("FxTurnBtns"));
	fxTurnBtnRoot->SetupAttachment(rootComp);
	for (int i = 0; i < 8; i++)
	{
		FString compName = FString::Printf(TEXT("FxTurnBtn%02d"), i + 1);
		auto btn = CreateDefaultSubobject<UChildActorComponent>(FName(*compName));
		btn->SetChildActorClass(AWJ_Button::StaticClass());
		btn->SetupAttachment(fxTurnBtnRoot);
		fxTurnBtns.Add(btn);

	}

	auto playListBtnRoot = CreateDefaultSubobject<USceneComponent>(TEXT("playListBtns"));
	playListBtnRoot->SetupAttachment(rootComp);
	for (int i = 0; i < 3; i++)
	{
		FString compName = FString::Printf(TEXT("playListBtn%02d"), i + 1);
		auto btn = CreateDefaultSubobject<UChildActorComponent>(FName(*compName));
		btn->SetChildActorClass(AWJ_Button::StaticClass());
		btn->SetupAttachment(playListBtnRoot);
		playListBtns.Add(btn);

	}
#pragma endregion

	//
	playListStrComp = CreateDefaultSubobject<UWJ_PlayListCtr>(TEXT("PlayListCtr"));
}

void AWJ_VJingTable::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	// 바인딩
	//Cast<AWJ_Button>(playListBtns[1])->Click_Event.AddUFunction(playListStrComp, FName("Play"));
}

void AWJ_VJingTable::BeginPlay()
{
	Super::BeginPlay();
	
	gameModeBase = Cast<AWJ_RoomGameModeBase>(GetWorld()->GetAuthGameMode());

	// 테스트 코드
	//playListStrComp->Play(0);

	Cast<AWJ_Button>(playListBtns[1])->ClickEvent.BindUFunction(playListStrComp, FName("Play")); //&UWJ_PlayListCtr::Play);

}

void AWJ_VJingTable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Cast<AWJ_Button>(playListBtns[1])->Click_Event.Broadcast();
	if (Cast<AWJ_Button>(playListBtns[1])->ClickEvent.IsBound())
	{
		Cast<AWJ_Button>(playListBtns[1])->ClickEvent.Execute();
	}
}

