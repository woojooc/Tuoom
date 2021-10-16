#include "WJ_PlayListCtr.h"
#include <Sound/SoundCue.h>
#include <Components/AudioComponent.h>
#include "WJ_VJingTable.h"
#include "WJ_RoomGameModeBase.h"
#include <Kismet/GameplayStatics.h>

UWJ_PlayListCtr::UWJ_PlayListCtr()
{
	PrimaryComponentTick.bCanEverTick = true;

	audioComp = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
	audioComp->bAutoActivate = false;
}


void UWJ_PlayListCtr::BeginPlay()
{
	Super::BeginPlay();

	if (soundCue->IsValidLowLevelFast())
	{
		audioComp->SetSound(soundCue);
	}
	
	vjingTable = Cast<AWJ_VJingTable>(GetOwner());
	bEndList = false;


	///*
	auto arrayS = soundCue->AllNodes;
	int num = arrayS.Num();

	//UE_LOG(LogTemp,Warning,TEXT("%d"),num);

	for (int i = 0; i < num; i++)
	{
		//UE_LOG(LogTemp, Warning, TEXT("%s"), *(arrayS[i]->GetName()));
		if (arrayS[i]->GetName().Contains(TEXT("WavePlayer")))
		{
			playCount++;
		}
	}
	UE_LOG(LogTemp,Warning,TEXT("%d"), playCount);
	//*/

}

void UWJ_PlayListCtr::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bEndList == true)
	{
		return;
	}

	///*
	if (audioComp->IsPlaying() == false)
	{
		playIdx++;
		if (playIdx >= playCount)
		{
			bEndList = true;
			return;
		}

		Play(playIdx);
	}
	//*/
}

void UWJ_PlayListCtr::Play()
{
	if (audioComp->bIsPaused)
	{
		audioComp->SetPaused(false);
		return;
	}

	audioComp->Play();
	vjingTable->gameModeBase->SetRoomState(EPlayRoomState::Playing);
}

void UWJ_PlayListCtr::Play(int idx)
{

	if (audioComp->bIsPaused)
	{
		audioComp->SetPaused(false);
		return;
	} 

	FName switchNode = TEXT("PlayList");
	audioComp->SetIntParameter(switchNode, idx);
	audioComp->Play();

	playIdx = idx;

	vjingTable->gameModeBase->SetRoomState(EPlayRoomState::Playing);
}

void UWJ_PlayListCtr::Stop()
{
	audioComp->Stop();
}

void UWJ_PlayListCtr::Pause()
{
	audioComp->SetPaused(true);
}

void UWJ_PlayListCtr::Next()
{

}

void UWJ_PlayListCtr::Prev()
{

}

