// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tuoom.h"
#include "Engine/GameInstance.h"
#include "WJ_TuoomGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class TUOOM_API UWJ_TuoomGameInstance : public UGameInstance
{
	GENERATED_BODY()
	

public:
	int GetAvatarID();						// 아바타 Idx 리턴
	ELevelState GetLevelState();			// 레벨 상태 리턴
	void SetLevelState(ELevelState state);	// 레벨 상태 설정 ( OpenLevel 시 변환 )

private:
	int avatarIdx;							// 선택한 아바타 정보 저장 변수
	ELevelState levelState;					// 현재 레벨 상태 저장 변수
		
	void SetAvatarID(int id);				// 아바타 선택시 변수 설정
	
};
