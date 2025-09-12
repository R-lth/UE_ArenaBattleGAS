// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "ABBaseCharacter.generated.h"

UCLASS()
class ARENABATTLEGAS_API AABBaseCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AABBaseCharacter();

protected:
	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	virtual void PossessedBy(AController* NewController) override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Weapon")
	TObjectPtr<class USkeletalMeshComponent> Weapon;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "UI")
	TObjectPtr<class UWidgetComponent> HpBar;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "GAS")
	TObjectPtr<class UAbilitySystemComponent> ASC; // 그냥 인스턴스

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GAS")
	TArray<TSubclassOf<class UGameplayAbility>> InitialAbilities; // 클래스 정보에 대한 인스턴스. 클래스 정보 추출

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category = "GAS")
	TObjectPtr<class UABCharacterAttributeSet>CharacterAttributeSet; // 캐릭터의 속성
};
