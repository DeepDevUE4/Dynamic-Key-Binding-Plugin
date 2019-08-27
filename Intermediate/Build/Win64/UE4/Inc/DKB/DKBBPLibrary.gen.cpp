// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DKB/Public/DKBBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDKBBPLibrary() {}
// Cross Module References
	DKB_API UClass* Z_Construct_UClass_UDKBBPLibrary_NoRegister();
	DKB_API UClass* Z_Construct_UClass_UDKBBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DKB();
	DKB_API UFunction* Z_Construct_UFunction_UDKBBPLibrary_AddActionKey();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	DKB_API UFunction* Z_Construct_UFunction_UDKBBPLibrary_AddAxisKey();
	DKB_API UFunction* Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey();
	DKB_API UFunction* Z_Construct_UFunction_UDKBBPLibrary_RemoveAxisKey();
	DKB_API UFunction* Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey();
	DKB_API UFunction* Z_Construct_UFunction_UDKBBPLibrary_ReplaceAxisKey();
	DKB_API UFunction* Z_Construct_UFunction_UDKBBPLibrary_SetActionKey();
	DKB_API UFunction* Z_Construct_UFunction_UDKBBPLibrary_SetAxisKey();
// End Cross Module References
	void UDKBBPLibrary::StaticRegisterNativesUDKBBPLibrary()
	{
		UClass* Class = UDKBBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActionKey", &UDKBBPLibrary::execAddActionKey },
			{ "AddAxisKey", &UDKBBPLibrary::execAddAxisKey },
			{ "RemoveActionKey", &UDKBBPLibrary::execRemoveActionKey },
			{ "RemoveAxisKey", &UDKBBPLibrary::execRemoveAxisKey },
			{ "ReplaceActionKey", &UDKBBPLibrary::execReplaceActionKey },
			{ "ReplaceAxisKey", &UDKBBPLibrary::execReplaceAxisKey },
			{ "SetActionKey", &UDKBBPLibrary::execSetActionKey },
			{ "SetAxisKey", &UDKBBPLibrary::execSetAxisKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics
	{
		struct DKBBPLibrary_eventAddActionKey_Parms
		{
			FName ActName;
			FKey NewKey;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewKey;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::NewProp_NewKey = { "NewKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DKBBPLibrary_eventAddActionKey_Parms, NewKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::NewProp_ActName = { "ActName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DKBBPLibrary_eventAddActionKey_Parms, ActName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::NewProp_NewKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::NewProp_ActName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Key Binding" },
		{ "DisplayName", "Add Action Key" },
		{ "Keywords", "Add Action Key" },
		{ "ModuleRelativePath", "Public/DKBBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDKBBPLibrary, nullptr, "AddActionKey", sizeof(DKBBPLibrary_eventAddActionKey_Parms), Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDKBBPLibrary_AddActionKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDKBBPLibrary_AddAxisKey_Statics
	{
		struct DKBBPLibrary_eventAddAxisKey_Parms
		{
			FName AxName;
			FKey NewKey;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewKey;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDKBBPLibrary_AddAxisKey_Statics::NewProp_NewKey = { "NewKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DKBBPLibrary_eventAddAxisKey_Parms, NewKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDKBBPLibrary_AddAxisKey_Statics::NewProp_AxName = { "AxName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DKBBPLibrary_eventAddAxisKey_Parms, AxName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDKBBPLibrary_AddAxisKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_AddAxisKey_Statics::NewProp_NewKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_AddAxisKey_Statics::NewProp_AxName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDKBBPLibrary_AddAxisKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Key Binding" },
		{ "DisplayName", "Add Axis Key" },
		{ "Keywords", "Add Axis Key" },
		{ "ModuleRelativePath", "Public/DKBBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDKBBPLibrary_AddAxisKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDKBBPLibrary, nullptr, "AddAxisKey", sizeof(DKBBPLibrary_eventAddAxisKey_Parms), Z_Construct_UFunction_UDKBBPLibrary_AddAxisKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDKBBPLibrary_AddAxisKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDKBBPLibrary_AddAxisKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDKBBPLibrary_AddAxisKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDKBBPLibrary_AddAxisKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDKBBPLibrary_AddAxisKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics
	{
		struct DKBBPLibrary_eventRemoveActionKey_Parms
		{
			FName ActName;
			FKey Key;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DKBBPLibrary_eventRemoveActionKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::NewProp_ActName = { "ActName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DKBBPLibrary_eventRemoveActionKey_Parms, ActName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::NewProp_ActName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Key Binding" },
		{ "DisplayName", "Remove Action Key" },
		{ "Keywords", "Remove Action Key" },
		{ "ModuleRelativePath", "Public/DKBBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDKBBPLibrary, nullptr, "RemoveActionKey", sizeof(DKBBPLibrary_eventRemoveActionKey_Parms), Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDKBBPLibrary_RemoveAxisKey_Statics
	{
		struct DKBBPLibrary_eventRemoveAxisKey_Parms
		{
			FName AxName;
			FKey Key;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDKBBPLibrary_RemoveAxisKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DKBBPLibrary_eventRemoveAxisKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDKBBPLibrary_RemoveAxisKey_Statics::NewProp_AxName = { "AxName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DKBBPLibrary_eventRemoveAxisKey_Parms, AxName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDKBBPLibrary_RemoveAxisKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_RemoveAxisKey_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_RemoveAxisKey_Statics::NewProp_AxName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDKBBPLibrary_RemoveAxisKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Key Binding" },
		{ "DisplayName", "Remove Axis Key" },
		{ "Keywords", "Remove Axis Key" },
		{ "ModuleRelativePath", "Public/DKBBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDKBBPLibrary_RemoveAxisKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDKBBPLibrary, nullptr, "RemoveAxisKey", sizeof(DKBBPLibrary_eventRemoveAxisKey_Parms), Z_Construct_UFunction_UDKBBPLibrary_RemoveAxisKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDKBBPLibrary_RemoveAxisKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDKBBPLibrary_RemoveAxisKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDKBBPLibrary_RemoveAxisKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDKBBPLibrary_RemoveAxisKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDKBBPLibrary_RemoveAxisKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics
	{
		struct DKBBPLibrary_eventReplaceActionKey_Parms
		{
			FName ActName;
			FKey OldKey;
			FKey NewKey;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewKey;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldKey;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_NewKey = { "NewKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DKBBPLibrary_eventReplaceActionKey_Parms, NewKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_OldKey = { "OldKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DKBBPLibrary_eventReplaceActionKey_Parms, OldKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_ActName = { "ActName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DKBBPLibrary_eventReplaceActionKey_Parms, ActName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_NewKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_OldKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_ActName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Key Binding" },
		{ "DisplayName", "Replace Action Key" },
		{ "Keywords", "Replace Action Key" },
		{ "ModuleRelativePath", "Public/DKBBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDKBBPLibrary, nullptr, "ReplaceActionKey", sizeof(DKBBPLibrary_eventReplaceActionKey_Parms), Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDKBBPLibrary_ReplaceAxisKey_Statics
	{
		struct DKBBPLibrary_eventReplaceAxisKey_Parms
		{
			FName AxName;
			FKey OldKey;
			FKey NewKey;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewKey;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldKey;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDKBBPLibrary_ReplaceAxisKey_Statics::NewProp_NewKey = { "NewKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DKBBPLibrary_eventReplaceAxisKey_Parms, NewKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDKBBPLibrary_ReplaceAxisKey_Statics::NewProp_OldKey = { "OldKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DKBBPLibrary_eventReplaceAxisKey_Parms, OldKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDKBBPLibrary_ReplaceAxisKey_Statics::NewProp_AxName = { "AxName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DKBBPLibrary_eventReplaceAxisKey_Parms, AxName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDKBBPLibrary_ReplaceAxisKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_ReplaceAxisKey_Statics::NewProp_NewKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_ReplaceAxisKey_Statics::NewProp_OldKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_ReplaceAxisKey_Statics::NewProp_AxName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDKBBPLibrary_ReplaceAxisKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Key Binding" },
		{ "DisplayName", "Replace Axis Key" },
		{ "Keywords", "Replace Axis Key" },
		{ "ModuleRelativePath", "Public/DKBBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDKBBPLibrary_ReplaceAxisKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDKBBPLibrary, nullptr, "ReplaceAxisKey", sizeof(DKBBPLibrary_eventReplaceAxisKey_Parms), Z_Construct_UFunction_UDKBBPLibrary_ReplaceAxisKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDKBBPLibrary_ReplaceAxisKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDKBBPLibrary_ReplaceAxisKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDKBBPLibrary_ReplaceAxisKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDKBBPLibrary_ReplaceAxisKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDKBBPLibrary_ReplaceAxisKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics
	{
		struct DKBBPLibrary_eventSetActionKey_Parms
		{
			FName ActName;
			FKey NewKey;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewKey;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::NewProp_NewKey = { "NewKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DKBBPLibrary_eventSetActionKey_Parms, NewKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::NewProp_ActName = { "ActName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DKBBPLibrary_eventSetActionKey_Parms, ActName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::NewProp_NewKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::NewProp_ActName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Key Binding" },
		{ "DisplayName", "Set Action Key" },
		{ "Keywords", "Set Action Key" },
		{ "ModuleRelativePath", "Public/DKBBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDKBBPLibrary, nullptr, "SetActionKey", sizeof(DKBBPLibrary_eventSetActionKey_Parms), Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDKBBPLibrary_SetActionKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDKBBPLibrary_SetAxisKey_Statics
	{
		struct DKBBPLibrary_eventSetAxisKey_Parms
		{
			FName AxName;
			FKey NewKey;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewKey;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDKBBPLibrary_SetAxisKey_Statics::NewProp_NewKey = { "NewKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DKBBPLibrary_eventSetAxisKey_Parms, NewKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDKBBPLibrary_SetAxisKey_Statics::NewProp_AxName = { "AxName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DKBBPLibrary_eventSetAxisKey_Parms, AxName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDKBBPLibrary_SetAxisKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_SetAxisKey_Statics::NewProp_NewKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_SetAxisKey_Statics::NewProp_AxName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDKBBPLibrary_SetAxisKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Key Binding" },
		{ "DisplayName", "Set Axis Key" },
		{ "Keywords", "Set Axis Key" },
		{ "ModuleRelativePath", "Public/DKBBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDKBBPLibrary_SetAxisKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDKBBPLibrary, nullptr, "SetAxisKey", sizeof(DKBBPLibrary_eventSetAxisKey_Parms), Z_Construct_UFunction_UDKBBPLibrary_SetAxisKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDKBBPLibrary_SetAxisKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDKBBPLibrary_SetAxisKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDKBBPLibrary_SetAxisKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDKBBPLibrary_SetAxisKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDKBBPLibrary_SetAxisKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDKBBPLibrary_NoRegister()
	{
		return UDKBBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDKBBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDKBBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DKB,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDKBBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDKBBPLibrary_AddActionKey, "AddActionKey" }, // 1488866970
		{ &Z_Construct_UFunction_UDKBBPLibrary_AddAxisKey, "AddAxisKey" }, // 2111030141
		{ &Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey, "RemoveActionKey" }, // 1306544159
		{ &Z_Construct_UFunction_UDKBBPLibrary_RemoveAxisKey, "RemoveAxisKey" }, // 2553463521
		{ &Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey, "ReplaceActionKey" }, // 4094678762
		{ &Z_Construct_UFunction_UDKBBPLibrary_ReplaceAxisKey, "ReplaceAxisKey" }, // 2247072039
		{ &Z_Construct_UFunction_UDKBBPLibrary_SetActionKey, "SetActionKey" }, // 3003256963
		{ &Z_Construct_UFunction_UDKBBPLibrary_SetAxisKey, "SetAxisKey" }, // 632918660
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDKBBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DKBBPLibrary.h" },
		{ "ModuleRelativePath", "Public/DKBBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDKBBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDKBBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDKBBPLibrary_Statics::ClassParams = {
		&UDKBBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDKBBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDKBBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDKBBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDKBBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDKBBPLibrary, 3144695201);
	template<> DKB_API UClass* StaticClass<UDKBBPLibrary>()
	{
		return UDKBBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDKBBPLibrary(Z_Construct_UClass_UDKBBPLibrary, &UDKBBPLibrary::StaticClass, TEXT("/Script/DKB"), TEXT("UDKBBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDKBBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
