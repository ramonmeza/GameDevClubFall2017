// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

UCLASS(Blueprintable)
class GAMEDEVCLUBFALL2017_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintImplementableEvent, Category="Item");
		void Pickup();

	UFUNCTION(BlueprintImplementableEvent, Category = "Item");
		void Drop();

	UFUNCTION(BlueprintImplementableEvent, Category = "Item");
		void Use();
};
