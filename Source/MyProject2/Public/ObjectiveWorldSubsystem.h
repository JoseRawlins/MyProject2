// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFrameWork/GameModeBase.h"
#include "Subsystems/WorldSubsystem.h"
#include "Blueprint/UserWidget.h"
#include "ObjectiveComponent.h"
#include "ObjectiveHUD.h"
#include "ObjectiveWorldSubsystem.generated.h"

class UObjectiveHUD;
class UObjectiveComponent;

UCLASS()
class MYPROJECT2_API UObjectiveWorldSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable)
	FString GetCurrentObjectiveDescription();

	UFUNCTION(BlueprintCallable)
	void AddObjective(UObjectiveComponent* ObjectiveComponent);
	
	UFUNCTION(BlueprintCallable)
	void RemoveObjective(UObjectiveComponent* ObjectiveComponent);

	UFUNCTION(BlueprintCallable)
	void OnMapStart();

	virtual void Deinitialize() override;

	void CreateObjectiveWidget(TSubclassOf<UUserWidget> ObjectiveWidgetClass);

	void DisplayObjectiveWidget();
	void RemoveObjectiveWidget();

	void DisplayObjectivesCompleteWidget();
	void RemoveObjectivesCompleteWidget();

	uint32 GetCompletedObjectiveCount();

	void OnObjectiveStateChanged(UObjectiveComponent* ObjectiveComponent, EObjectiveState ObjectiveState);

private:
	UObjectiveHUD* ObjectiveWidget = nullptr;
	UUserWidget* ObjectivesCompleteWidget = nullptr;

	// add remove them
	// sign up for callback onchanged
	TArray<UObjectiveComponent*> Objectives;
};
