// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyIDPluginBPLibrary.h"
#include "MyIDPlugin.h"
#include "UserDataSubSystem.h"


FString UMyIDPluginBPLibrary::UserName = TEXT("Unknown");

UMyIDPluginBPLibrary::UMyIDPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UMyIDPluginBPLibrary::SetUserName(const FString& NewName)
{
	UserName = NewName;
	UE_LOG(LogTemp, Log, TEXT("UserName set to: %s"), *NewName);
}

void UMyIDPluginBPLibrary::SetUserNameWithSubSystem(UUserDataSubSystem* UserDataSubSystem, const FString& NewName)
{
	UserDataSubSystem->SetUserName(NewName);
	UE_LOG(LogTemp, Log, TEXT("UserName set to: %s"), *NewName);
}

FString UMyIDPluginBPLibrary::GetUserName()
{
	return UserName;
}

FString UMyIDPluginBPLibrary::GetUserNameWithSubSystem(UUserDataSubSystem* UserDataSubSystem)
{
	return UserDataSubSystem->GetUserName();
}
