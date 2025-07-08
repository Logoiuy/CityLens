// Fill out your copyright notice in the Description page of Project Settings.


#include "BlueprintCommunication.h"

// Sets default values
ABlueprintCommunication::ABlueprintCommunication()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABlueprintCommunication::BeginPlay()
{
	Super::BeginPlay();
	
}
void ABlueprintCommunication::myLog() {
	// Your code
	UE_LOG(LogTemp, Display, TEXT("Hello World, it seems a Blueprint can call a cpp function!"));
	CalledFromCpp(80);
}

// Called every frame
void ABlueprintCommunication::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

