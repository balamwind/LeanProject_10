// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyIDPlugin/Public/MyIDPluginBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyIDPluginBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MYIDPLUGIN_API UClass* Z_Construct_UClass_UMyIDPluginBPLibrary();
MYIDPLUGIN_API UClass* Z_Construct_UClass_UMyIDPluginBPLibrary_NoRegister();
MYIDPLUGIN_API UClass* Z_Construct_UClass_UUserDataSubSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyIDPlugin();
// End Cross Module References

// Begin Class UMyIDPluginBPLibrary Function GetUserName
struct Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserName_Statics
{
	struct MyIDPluginBPLibrary_eventGetUserName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MyIDPlugin" },
		{ "ModuleRelativePath", "Public/MyIDPluginBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyIDPluginBPLibrary_eventGetUserName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyIDPluginBPLibrary, nullptr, "GetUserName", nullptr, nullptr, Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserName_Statics::MyIDPluginBPLibrary_eventGetUserName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserName_Statics::MyIDPluginBPLibrary_eventGetUserName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyIDPluginBPLibrary::execGetUserName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UMyIDPluginBPLibrary::GetUserName();
	P_NATIVE_END;
}
// End Class UMyIDPluginBPLibrary Function GetUserName

// Begin Class UMyIDPluginBPLibrary Function GetUserNameWithSubSystem
struct Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserNameWithSubSystem_Statics
{
	struct MyIDPluginBPLibrary_eventGetUserNameWithSubSystem_Parms
	{
		UUserDataSubSystem* UserDataSubSystem;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MyIDPlugin" },
		{ "ModuleRelativePath", "Public/MyIDPluginBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserDataSubSystem;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserNameWithSubSystem_Statics::NewProp_UserDataSubSystem = { "UserDataSubSystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyIDPluginBPLibrary_eventGetUserNameWithSubSystem_Parms, UserDataSubSystem), Z_Construct_UClass_UUserDataSubSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserNameWithSubSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyIDPluginBPLibrary_eventGetUserNameWithSubSystem_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserNameWithSubSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserNameWithSubSystem_Statics::NewProp_UserDataSubSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserNameWithSubSystem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserNameWithSubSystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserNameWithSubSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyIDPluginBPLibrary, nullptr, "GetUserNameWithSubSystem", nullptr, nullptr, Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserNameWithSubSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserNameWithSubSystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserNameWithSubSystem_Statics::MyIDPluginBPLibrary_eventGetUserNameWithSubSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserNameWithSubSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserNameWithSubSystem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserNameWithSubSystem_Statics::MyIDPluginBPLibrary_eventGetUserNameWithSubSystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserNameWithSubSystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserNameWithSubSystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyIDPluginBPLibrary::execGetUserNameWithSubSystem)
{
	P_GET_OBJECT(UUserDataSubSystem,Z_Param_UserDataSubSystem);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UMyIDPluginBPLibrary::GetUserNameWithSubSystem(Z_Param_UserDataSubSystem);
	P_NATIVE_END;
}
// End Class UMyIDPluginBPLibrary Function GetUserNameWithSubSystem

// Begin Class UMyIDPluginBPLibrary Function SetUserName
struct Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserName_Statics
{
	struct MyIDPluginBPLibrary_eventSetUserName_Parms
	{
		FString NewName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MyIDPlugin" },
		{ "ModuleRelativePath", "Public/MyIDPluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserName_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyIDPluginBPLibrary_eventSetUserName_Parms, NewName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewName_MetaData), NewProp_NewName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserName_Statics::NewProp_NewName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyIDPluginBPLibrary, nullptr, "SetUserName", nullptr, nullptr, Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserName_Statics::MyIDPluginBPLibrary_eventSetUserName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserName_Statics::MyIDPluginBPLibrary_eventSetUserName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyIDPluginBPLibrary::execSetUserName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NewName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMyIDPluginBPLibrary::SetUserName(Z_Param_NewName);
	P_NATIVE_END;
}
// End Class UMyIDPluginBPLibrary Function SetUserName

// Begin Class UMyIDPluginBPLibrary Function SetUserNameWithSubSystem
struct Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserNameWithSubSystem_Statics
{
	struct MyIDPluginBPLibrary_eventSetUserNameWithSubSystem_Parms
	{
		UUserDataSubSystem* UserDataSubSystem;
		FString NewName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MyIDPlugin" },
		{ "ModuleRelativePath", "Public/MyIDPluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserDataSubSystem;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserNameWithSubSystem_Statics::NewProp_UserDataSubSystem = { "UserDataSubSystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyIDPluginBPLibrary_eventSetUserNameWithSubSystem_Parms, UserDataSubSystem), Z_Construct_UClass_UUserDataSubSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserNameWithSubSystem_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyIDPluginBPLibrary_eventSetUserNameWithSubSystem_Parms, NewName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewName_MetaData), NewProp_NewName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserNameWithSubSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserNameWithSubSystem_Statics::NewProp_UserDataSubSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserNameWithSubSystem_Statics::NewProp_NewName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserNameWithSubSystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserNameWithSubSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyIDPluginBPLibrary, nullptr, "SetUserNameWithSubSystem", nullptr, nullptr, Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserNameWithSubSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserNameWithSubSystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserNameWithSubSystem_Statics::MyIDPluginBPLibrary_eventSetUserNameWithSubSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserNameWithSubSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserNameWithSubSystem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserNameWithSubSystem_Statics::MyIDPluginBPLibrary_eventSetUserNameWithSubSystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserNameWithSubSystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserNameWithSubSystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyIDPluginBPLibrary::execSetUserNameWithSubSystem)
{
	P_GET_OBJECT(UUserDataSubSystem,Z_Param_UserDataSubSystem);
	P_GET_PROPERTY(FStrProperty,Z_Param_NewName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMyIDPluginBPLibrary::SetUserNameWithSubSystem(Z_Param_UserDataSubSystem,Z_Param_NewName);
	P_NATIVE_END;
}
// End Class UMyIDPluginBPLibrary Function SetUserNameWithSubSystem

// Begin Class UMyIDPluginBPLibrary
void UMyIDPluginBPLibrary::StaticRegisterNativesUMyIDPluginBPLibrary()
{
	UClass* Class = UMyIDPluginBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetUserName", &UMyIDPluginBPLibrary::execGetUserName },
		{ "GetUserNameWithSubSystem", &UMyIDPluginBPLibrary::execGetUserNameWithSubSystem },
		{ "SetUserName", &UMyIDPluginBPLibrary::execSetUserName },
		{ "SetUserNameWithSubSystem", &UMyIDPluginBPLibrary::execSetUserNameWithSubSystem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyIDPluginBPLibrary);
UClass* Z_Construct_UClass_UMyIDPluginBPLibrary_NoRegister()
{
	return UMyIDPluginBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UMyIDPluginBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "MyIDPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/MyIDPluginBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserName, "GetUserName" }, // 2591765893
		{ &Z_Construct_UFunction_UMyIDPluginBPLibrary_GetUserNameWithSubSystem, "GetUserNameWithSubSystem" }, // 4172457611
		{ &Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserName, "SetUserName" }, // 3755400937
		{ &Z_Construct_UFunction_UMyIDPluginBPLibrary_SetUserNameWithSubSystem, "SetUserNameWithSubSystem" }, // 3406438800
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyIDPluginBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyIDPluginBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MyIDPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyIDPluginBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyIDPluginBPLibrary_Statics::ClassParams = {
	&UMyIDPluginBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyIDPluginBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyIDPluginBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyIDPluginBPLibrary()
{
	if (!Z_Registration_Info_UClass_UMyIDPluginBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyIDPluginBPLibrary.OuterSingleton, Z_Construct_UClass_UMyIDPluginBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyIDPluginBPLibrary.OuterSingleton;
}
template<> MYIDPLUGIN_API UClass* StaticClass<UMyIDPluginBPLibrary>()
{
	return UMyIDPluginBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyIDPluginBPLibrary);
UMyIDPluginBPLibrary::~UMyIDPluginBPLibrary() {}
// End Class UMyIDPluginBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MyIDPlugin_Source_MyIDPlugin_Public_MyIDPluginBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyIDPluginBPLibrary, UMyIDPluginBPLibrary::StaticClass, TEXT("UMyIDPluginBPLibrary"), &Z_Registration_Info_UClass_UMyIDPluginBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyIDPluginBPLibrary), 3318225957U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MyIDPlugin_Source_MyIDPlugin_Public_MyIDPluginBPLibrary_h_3098233035(TEXT("/Script/MyIDPlugin"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_MyIDPlugin_Source_MyIDPlugin_Public_MyIDPluginBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MyIDPlugin_Source_MyIDPlugin_Public_MyIDPluginBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
