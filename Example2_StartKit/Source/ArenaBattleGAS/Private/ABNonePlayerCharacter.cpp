// Fill out your copyright notice in the Description page of Project Settings.


#include "ABNonePlayerCharacter.h"
#include "AbilitySystemComponent.h"

AABNonePlayerCharacter::AABNonePlayerCharacter()
{
}

void AABNonePlayerCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	ASC->InitAbilityActorInfo(this, this);
}
