// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo_Aereo.generated.h"

UCLASS()
class FACADE_API AEnemigo_Aereo : public AActor
{
	GENERATED_BODY()

public:
	AEnemigo_Aereo();
	void moverEA();
protected:
	UStaticMeshComponent* MallaAE;
};
