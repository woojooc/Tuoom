// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tuoom.h"
#include "Components/ActorComponent.h"
#include "WJ_PlayListCtr.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TUOOM_API UWJ_PlayListCtr : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWJ_PlayListCtr();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, Category = "Owner")
	class AWJ_VJingTable* vjingTable;

	UPROPERTY(EditAnywhere, Category = "SoundCue")
	class USoundCue* soundCue;

	UPROPERTY(EditAnywhere, Category = "AudioComp")
	class UAudioComponent* audioComp;

	int playIdx;
	int playCount;
	bool bEndList;

	void Play();
	void Play(int idx);
	void Stop();
	void Pause();
	void Next();
	void Prev();

};
