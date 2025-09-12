// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "ABCharacterAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLEGAS_API UABCharacterAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	UABCharacterAttributeSet();

	ATTRIBUTE_ACCESSORS_BASIC(ThisClass, Health);

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GAS")
	FGameplayAttributeData Health;
};
