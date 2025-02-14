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
	// 自定义变量
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "GameState")
	int32 Scores;

	// 如果需要，可以添加网络复制函数
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	
};
