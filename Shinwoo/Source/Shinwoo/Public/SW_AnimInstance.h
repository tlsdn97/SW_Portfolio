// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SW_AnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class SHINWOO_API USW_AnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	USW_AnimInstance();

	virtual void NativeUpdateAnimation(float DeltaSeconds);
private:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "pawn", meta = (AllowPrivateAccess = "true"))
	float _speed = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "pawn", meta = (AllowPrivateAccess = "true"))
	bool _isFalling;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AnimMontate", meta = (AllowPrivateAccess = "true"))
	float _vertical;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AnimMontate", meta = (AllowPrivateAccess = "true"))
	float _horizontal;
};
