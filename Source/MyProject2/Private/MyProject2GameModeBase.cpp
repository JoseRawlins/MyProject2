// Fill out your copyright notice in the Description page of Project Settings.


#include "MyProject2GameModeBase.h"
#include "ObjectiveWorldSubsystem.h"

void AMyProject2GameModeBase::StartPlay()
{
	Super::StartPlay();
	UObjectiveWorldSubsystem* ObjectiveWorldSubsystem = GetWorld()->GetSubsystem<UObjectiveWorldSubsystem>();
	if (ObjectiveWorldSubsystem)
	{
		ObjectiveWorldSubsystem->CreateObjectiveWidget(ObjectiveWidgetClass);
		ObjectiveWorldSubsystem->DisplayObjectiveWidget();

	}
}
