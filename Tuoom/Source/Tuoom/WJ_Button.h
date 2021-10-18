#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WJ_Button.generated.h"

DECLARE_DELEGATE(FActorClick);

UCLASS()
class TUOOM_API AWJ_Button : public AActor
{
	GENERATED_BODY()
	
public:	
	AWJ_Button();

protected:
	virtual void BeginPlay() override;

public:	
	//virtual void Tick(float DeltaTime) override;
	//DECLARE_EVENT(AWJ_Button, FDele_Event);

	UPROPERTY(EditAnywhere, Category = MeshComp)
	class UStaticMeshComponent* meshComp;

	FActorClick ClickEvent;
	//FDele_Event Click_Event;
};
