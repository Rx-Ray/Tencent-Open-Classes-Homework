// Fill out your copyright notice in the Description page of Project Settings.


#include "ScoreState.h"
#include <Net/UnrealNetwork.h>


void AScoreState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    // 复制 TotalScore 变量到所有客户端
    DOREPLIFETIME(AScoreState, Scores);
}

