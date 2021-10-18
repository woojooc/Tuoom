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
	int GetAvatarID();						// �ƹ�Ÿ Idx ����
	ELevelState GetLevelState();			// ���� ���� ����
	void SetLevelState(ELevelState state);	// ���� ���� ���� ( OpenLevel �� ��ȯ )

private:
	int avatarIdx;							// ������ �ƹ�Ÿ ���� ���� ����
	ELevelState levelState;					// ���� ���� ���� ���� ����
		
	void SetAvatarID(int id);				// �ƹ�Ÿ ���ý� ���� ����
	
};
