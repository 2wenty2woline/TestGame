// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemTypes.h"
#include "InventoryItem.generated.h"

class USphereComponent;

UCLASS()
class GAMETEST_API AInventoryItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInventoryItem();

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

protected:
	/* Collision Component */
	UPROPERTY(VisibleAnywhere)
	USphereComponent* CollisionComponent;

	/* Type InventoryItem and count Score */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FInventoryData InventoryData;
};
