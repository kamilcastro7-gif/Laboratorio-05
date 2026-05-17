// Fill out your copyright notice in the Description page of Project Settings.

#include "Enemigo_Acuatico.h"

AEnemigo_Acuatico::AEnemigo_Acuatico()
{
	PrimaryActorTick.bCanEverTick = true;
	Tags.Add(FName("Enemigo"));

	MallaAA = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaAA"));
	RootComponent = MallaAA;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MllAAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	if (MllAAsset.Succeeded()) {
		MallaAA->SetStaticMesh(MllAAsset.Object);
	}
}

void AEnemigo_Acuatico::moverEAC()
{

	float Oscilacion = FMath::Sin(GetWorld()->GetTimeSeconds() * 2.0f) * 5.0f;

	AddActorLocalOffset(FVector(Oscilacion, 0.0f, 0.0f));
}