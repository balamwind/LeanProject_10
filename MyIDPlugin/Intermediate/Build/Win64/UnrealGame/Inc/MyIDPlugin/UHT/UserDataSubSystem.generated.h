// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UserDataSubSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYIDPLUGIN_UserDataSubSystem_generated_h
#error "UserDataSubSystem.generated.h already included, missing '#pragma once' in UserDataSubSystem.h"
#endif
#define MYIDPLUGIN_UserDataSubSystem_generated_h

#define FID_HostProject_Plugins_MyIDPlugin_Source_MyIDPlugin_Public_UserDataSubSystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserDataSubSystem(); \
	friend struct Z_Construct_UClass_UUserDataSubSystem_Statics; \
public: \
	DECLARE_CLASS(UUserDataSubSystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyIDPlugin"), NO_API) \
	DECLARE_SERIALIZER(UUserDataSubSystem)


#define FID_HostProject_Plugins_MyIDPlugin_Source_MyIDPlugin_Public_UserDataSubSystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserDataSubSystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUserDataSubSystem(UUserDataSubSystem&&); \
	UUserDataSubSystem(const UUserDataSubSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserDataSubSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserDataSubSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUserDataSubSystem) \
	NO_API virtual ~UUserDataSubSystem();


#define FID_HostProject_Plugins_MyIDPlugin_Source_MyIDPlugin_Public_UserDataSubSystem_h_12_PROLOG
#define FID_HostProject_Plugins_MyIDPlugin_Source_MyIDPlugin_Public_UserDataSubSystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_MyIDPlugin_Source_MyIDPlugin_Public_UserDataSubSystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_MyIDPlugin_Source_MyIDPlugin_Public_UserDataSubSystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYIDPLUGIN_API UClass* StaticClass<class UUserDataSubSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_MyIDPlugin_Source_MyIDPlugin_Public_UserDataSubSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
