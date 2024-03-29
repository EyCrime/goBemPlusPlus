// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UIController.generated.h"

/**
 * 
 */
UCLASS()
class GOBEM_API AUIController : public APlayerController
{
	GENERATED_BODY()

protected:

	AUIController();

	virtual void SetupInputComponent() override;

	void OpenMenu();

};
