// Fill out your copyright notice in the Description page of Project Settings.


#include "BlueprintCommunication.h"
#include "Misc/FileHelper.h"

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
FString ABlueprintCommunication::readQR() {
	FString file = "/storage/emulated/0/Android/data/de.byteflow.CityLens/files/qrcontent.txt";
	FString FileContent;
	if (FFileHelper::LoadFileToString(FileContent, *file, FFileHelper::EHashOptions::None))
	{
		UE_LOG(LogTemp, Warning, TEXT("FileManipulation: Text From File: %s"), *FileContent);
		return FileContent;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("FileManipulation: Did not load text from file"));
		return "uff";
	}

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

