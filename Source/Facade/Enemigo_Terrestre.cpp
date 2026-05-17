// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo_Terrestre.h"

AEnemigo_Terrestre::AEnemigo_Terrestre()
{
	PrimaryActorTick.bCanEverTick = true;
	Tags.Add(FName("Enemigo")); 

	MallaET = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaET"));
	RootComponent = MallaET;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MllETAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (MllETAsset.Succeeded()) {
		MallaET->SetStaticMesh(MllETAsset.Object);
	}
}

void AEnemigo_Terrestre::moverET()
{
	float Oscilacion = FMath::Sin(GetWorld()->GetTimeSeconds() * 2.0f) * 5.0f;
	AddActorLocalOffset(FVector(0.0f, Oscilacion, 0.0f));
}
