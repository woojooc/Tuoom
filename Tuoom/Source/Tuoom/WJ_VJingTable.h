#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WJ_VJingTable.generated.h"

UCLASS()
class TUOOM_API AWJ_VJingTable : public AActor
{
	GENERATED_BODY()
	
public:	
	AWJ_VJingTable();

protected:
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Root")
	class USceneComponent* rootComp;

	// 12�� ����Ʈ ��ư
	UPROPERTY(EditAnywhere, Instanced,Category = "Button")
	TArray<class UChildActorComponent*> fxPressBtns;

	// 8�� ������ ��ư
	UPROPERTY(EditAnywhere, Category = "Button")
	TArray<class UChildActorComponent*> fxTurnBtns;

	// �÷��� ����Ʈ ���� ��ư
	UPROPERTY(EditAnywhere, Category = "Button")
	TArray<class UChildActorComponent*> playListBtns;

	// �ٵ�
	UPROPERTY(EditAnywhere, Category = "Body")
	class UStaticMeshComponent* bodyMesh;

	// �÷��� ����Ʈ ȭ��
	UPROPERTY(EditAnywhere, Category = "PlayList")
	class UStaticMeshComponent* playList;

	// 
	UPROPERTY(EditAnywhere, Category = "GameModeBase")
	class AWJ_RoomGameModeBase* gameModeBase;

	UPROPERTY(EditAnywhere, Category = "Component")
	class UWJ_PlayListCtr* playListStrComp;


	
};
