// Fill out your copyright notice in the Description page of Project Settings.

#include "BuildingEscapeGame.h"
#include "OpenDoor.h"


// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();

	/*FString ObjectName = GetOwner()->GetName();
	FString ObjectPos = GetOwner()->GetActorRotation().ToString();
	UE_LOG(LogTemp, Warning, TEXT("lololol kill them all I'm a %s Rotating at %s"), *ObjectName, *ObjectPos);*/

	
	
	//Find the owning actor
	AActor* Owner = GetOwner();
	
	//Create a rotator
	FRotator  NewRotation = FRotator(0.0f, 65.0f, 0.0f);

	//Set the door rotation
	Owner->SetActorRotation(NewRotation);
	
}


// Called every frame
void UOpenDoor::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

