// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UActionConfig.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class B_API UUActionConfig : public UDataAsset
{
	GENERATED_BODY()
	
public:
    // 定义可配置参数
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Material")
    FLinearColor BaseColor = FLinearColor::White;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Material")
    float EmissiveIntensity = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Material")
    UMaterialInterface* OverrideMaterial;
	
	
};
