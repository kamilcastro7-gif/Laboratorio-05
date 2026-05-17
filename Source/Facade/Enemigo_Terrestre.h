// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo_Terrestre.generated.h"

UCLASS()
class FACADE_API AEnemigo_Terrestre : public AActor
{
	GENERATED_BODY()

public:
	AEnemigo_Terrestre();
	void moverET();
protected:
	UStaticMeshComponent* MallaET;
};
