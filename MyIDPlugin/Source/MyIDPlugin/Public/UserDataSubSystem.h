// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UserDataSubSystem.generated.h"

/**
 * 
 */
UCLASS()
class MYIDPLUGIN_API UUserDataSubSystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	void SetUserName(const FString& NewName) { UserName = NewName;}
	const FString& GetUserName() const { return UserName; }

public:
	UPROPERTY()
	FString UserName;
};
