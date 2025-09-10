// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BlueprintCommunication.generated.h"

UCLASS()
class CITYLENS_API ABlueprintCommunication : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlueprintCommunication();
	UFUNCTION(BlueprintCallable, Category = "#Log")
	void myLog();
	/*UFUNCTION(BlueprintCallable, Category = "#DoubleGeo")
	void setGeoreference(double x, double y, double z);*/
	UFUNCTION(BlueprintImplementableEvent, Category = "#Log")
	void CalledFromCpp(int value);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
