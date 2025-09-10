// Fill out your copyright notice in the Description page of Project Settings.


#include "BlueprintCommunication.h"
#include "C:/Program Files/Epic Games/UE_5.3/Engine/Plugins/Marketplace/CesiumForUnreal_5.3/Source/CesiumRuntime/Public/CesiumGeoreference.h"

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
//void ABlueprintCommunication::setGeoreference(double x, double y, double z) {
//	SetOriginLongitude(x);
//	SetOriginLatitude(y);
//	SetOriginHeight(z);
//}

// Called every frame
void ABlueprintCommunication::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

