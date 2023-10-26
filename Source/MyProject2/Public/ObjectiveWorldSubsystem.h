// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFrameWork/GameModeBase.h"
#include "Subsystems/WorldSubsystem.h"
#include "Blueprint/UserWidget.h"
#include "ObjectiveWorldSubsystem.generated.h"

UCLASS()
class MYPROJECT2_API UObjectiveWorldSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
public:
	void CreateObjectiveWidget(TSubclassOf<UUserWidget> ObjectiveWidgetClass);
	void DisplayObjectiveWidget();

	void OnObjectiveCompleted();
private:
	UUserWidget* ObjectiveWidget = nullptr;
};