// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractionComponent.generated.h"

class AActor;
class UCapsuleComponent;
class UprimativeComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInteractionSuccess);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPROJECT2_API UInteractionComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInteractionComponent();

	//this is broadcasted from children, they know when an interaction has successfully finished
	UPROPERTY(BlueprintAssignable, Category = "Interaction")
	FOnInteractionSuccess InteractionSuccess;

	UFUNCTION()
	virtual void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp,  AActor* OtherActor,  UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	virtual void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp,  AActor* OtherActor,  UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UCapsuleComponent* GetTriggerCapsule() const { return TriggerCapsule; }

	

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	//virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	virtual void InteractionStart();

	//UFUNCTION(BlueprintCallable)
	//virtual void InteractionRequested();

	UPROPERTY(EditAnywhere)
	FText InteractionPrompt;

	UPROPERTY(EditAnywhere, NoClear)
	UCapsuleComponent* TriggerCapsule = nullptr;

	AActor* InteractingActor = nullptr;
	bool bActive = true;
	FDelegateHandle InteractingBinding;
};
