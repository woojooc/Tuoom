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

public:	
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Root")
	class USceneComponent* rootComp;

	UPROPERTY(EditAnywhere, Category = "Button")
	TArray<class UStaticMeshComponent*> fxPressBtns;

	UPROPERTY(EditAnywhere, Category = "Button")
	TArray<class UStaticMeshComponent*> fxTurnBtns;

	UPROPERTY(EditAnywhere, Category = "Button")
	TArray<class UStaticMeshComponent*> playListBtns;

	UPROPERTY(EditAnywhere, Category = "Body")
	class UStaticMeshComponent* bodyMesh;

	UPROPERTY(EditAnywhere, Category = "PlayList")
	class UStaticMeshComponent* playList;

	// 
	UPROPERTY(EditAnywhere, Category = "GameModeBase")
	class AWJ_RoomGameModeBase* gameModeBase;

	UPROPERTY(EditAnywhere, Category = "Component")
		class UWJ_PlayListCtr* playListStrComp;

};
