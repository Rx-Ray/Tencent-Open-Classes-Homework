// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "ScoreState.generated.h"

/**
 * 
 */
UCLASS()
class B_API AScoreState : public APlayerState
{
	GENERATED_BODY()
	
public:
	// �Զ������
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "GameState")
	int32 Scores;

	// �����Ҫ������������縴�ƺ���
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	
};
