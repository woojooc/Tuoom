#include "WJ_Button.h"

AWJ_Button::AWJ_Button()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
}

void AWJ_Button::BeginPlay()
{
	Super::BeginPlay();
	
}


