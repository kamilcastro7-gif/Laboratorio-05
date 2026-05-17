// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo_Acuatico.generated.h"

UCLASS()
class FACADE_API AEnemigo_Acuatico : public AActor
{
	GENERATED_BODY()

public:
	AEnemigo_Acuatico();
	void moverEAC();
protected:
	UStaticMeshComponent* MallaAA;
};
