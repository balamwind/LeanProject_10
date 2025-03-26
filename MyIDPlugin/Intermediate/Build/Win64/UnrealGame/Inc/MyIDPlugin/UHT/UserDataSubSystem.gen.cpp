// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyIDPlugin/Public/UserDataSubSystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserDataSubSystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
MYIDPLUGIN_API UClass* Z_Construct_UClass_UUserDataSubSystem();
MYIDPLUGIN_API UClass* Z_Construct_UClass_UUserDataSubSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyIDPlugin();
// End Cross Module References

// Begin Class UUserDataSubSystem
void UUserDataSubSystem::StaticRegisterNativesUUserDataSubSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserDataSubSystem);
UClass* Z_Construct_UClass_UUserDataSubSystem_NoRegister()
{
	return UUserDataSubSystem::StaticClass();
}
struct Z_Construct_UClass_UUserDataSubSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UserDataSubSystem.h" },
		{ "ModuleRelativePath", "Public/UserDataSubSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[] = {
		{ "ModuleRelativePath", "Public/UserDataSubSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserDataSubSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUserDataSubSystem_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserDataSubSystem, UserName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserName_MetaData), NewProp_UserName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserDataSubSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDataSubSystem_Statics::NewProp_UserName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUserDataSubSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUserDataSubSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MyIDPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUserDataSubSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserDataSubSystem_Statics::ClassParams = {
	&UUserDataSubSystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUserDataSubSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUserDataSubSystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUserDataSubSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UUserDataSubSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUserDataSubSystem()
{
	if (!Z_Registration_Info_UClass_UUserDataSubSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserDataSubSystem.OuterSingleton, Z_Construct_UClass_UUserDataSubSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUserDataSubSystem.OuterSingleton;
}
template<> MYIDPLUGIN_API UClass* StaticClass<UUserDataSubSystem>()
{
	return UUserDataSubSystem::StaticClass();
}
UUserDataSubSystem::UUserDataSubSystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUserDataSubSystem);
UUserDataSubSystem::~UUserDataSubSystem() {}
// End Class UUserDataSubSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MyIDPlugin_Source_MyIDPlugin_Public_UserDataSubSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUserDataSubSystem, UUserDataSubSystem::StaticClass, TEXT("UUserDataSubSystem"), &Z_Registration_Info_UClass_UUserDataSubSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserDataSubSystem), 2886368779U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MyIDPlugin_Source_MyIDPlugin_Public_UserDataSubSystem_h_2504944628(TEXT("/Script/MyIDPlugin"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_MyIDPlugin_Source_MyIDPlugin_Public_UserDataSubSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MyIDPlugin_Source_MyIDPlugin_Public_UserDataSubSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
