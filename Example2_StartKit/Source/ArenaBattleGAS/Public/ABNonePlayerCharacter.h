// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ABBaseCharacter.h"
#include "AbilitySystemInterface.h"
#include "ABNonePlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLEGAS_API AABNonePlayerCharacter : public AABBaseCharacter
{
	GENERATED_BODY()

public:
	AABNonePlayerCharacter();

public:
	virtual void PossessedBy(AController* NewController) override;
};

