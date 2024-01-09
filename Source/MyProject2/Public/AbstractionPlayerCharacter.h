// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
//#include "../../../../Epic Games/UE_5.3/Engine/Plugins/Cameras/GameplayCameras/Source/GameplayCameras/Public/LegacyCameraShake.h"
#include "AbstractionPlayerCharacter.generated.h"

class UHealthComponent;
class UParticleSystemComponent;
class UDamageHandlerComponent;

DECLARE_MULTICAST_DELEGATE(FOnInteractionStart);
DECLARE_MULTICAST_DELEGATE(FOnInteractionCancel);

UCLASS()
class MYPROJECT2_API AAbstractionPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	//AAbstractionPlayerCharacter();


	AAbstractionPlayerCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/** Called when the actor falls out of the world 'safely' (below KillZ and such) */
	virtual void FellOutOfWorld(const class UDamageType& dmgType) override;

    virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser);
	void SetOnFire(UParticleSystemComponent* FireParticleSystemComponent);
	 
	UFUNCTION(BlueprintCallable)
	void HandleItemCollected();

	UFUNCTION(BlueprintImplementableEvent)
	void ItemCollected();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int ItemsCollected = 0;

	UFUNCTION(BlueprintCallable)
	const bool IsAlive() const;

	UFUNCTION(BlueprintCallable)
	const float GetCurrentHealth() const;

	FOnInteractionStart OnInteractionStart;
	FOnInteractionCancel OnInteractionCancel;

	UPROPERTY(VisibleAnywhere)
	UHealthComponent* HealthComponent;

	UPROPERTY(VisibleAnywhere)
	UDamageHandlerComponent* DamageHandlerComponent;

	UPROPERTY(EditAnywhere)
	UParticleSystemComponent* ParticleSystemComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void OnDeath(bool IsFellOut);

	UFUNCTION()
	void OnDeathTimerFinished();

	//Input Bidnings
	void StartInteraction();
	void StopInteraction();

	UPROPERTY(EditAnywhere)
	float TimeRestartLevelAfterDeath = 2.0f;

	//Handlet to manage the death timer
	FTimerHandle RestartLevelTimerHandle;

	APlayerController* PC;

	UPROPERTY(EditAnywhere, Category="Effects")
	TSubclassOf<UCameraShakeBase> CamShake;

	//Force Feedback Falues
	UPROPERTY(EditAnywhere, Category="Force Feedback")
	float ForceFeedbackIntensity = 1.0f;
	UPROPERTY(EditAnywhere, Category="Force Feedback")
	float ForceFeedbackDuration = 1.0f;
};
