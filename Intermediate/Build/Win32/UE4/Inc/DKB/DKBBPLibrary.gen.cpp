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
			bool Alt;
			bool Cmd;
			bool Shift;
			bool Ctrl;
		};
		static void NewProp_Ctrl_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Ctrl;
		static void NewProp_Shift_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Shift;
		static void NewProp_Cmd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Cmd;
		static void NewProp_Alt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Alt;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewKey;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::NewProp_Ctrl_SetBit(void* Obj)
	{
		((DKBBPLibrary_eventAddActionKey_Parms*)Obj)->Ctrl = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::NewProp_Ctrl = { "Ctrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DKBBPLibrary_eventAddActionKey_Parms), &Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::NewProp_Ctrl_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::NewProp_Shift_SetBit(void* Obj)
	{
		((DKBBPLibrary_eventAddActionKey_Parms*)Obj)->Shift = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::NewProp_Shift = { "Shift", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DKBBPLibrary_eventAddActionKey_Parms), &Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::NewProp_Shift_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::NewProp_Cmd_SetBit(void* Obj)
	{
		((DKBBPLibrary_eventAddActionKey_Parms*)Obj)->Cmd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::NewProp_Cmd = { "Cmd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DKBBPLibrary_eventAddActionKey_Parms), &Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::NewProp_Cmd_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::NewProp_Alt_SetBit(void* Obj)
	{
		((DKBBPLibrary_eventAddActionKey_Parms*)Obj)->Alt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::NewProp_Alt = { "Alt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DKBBPLibrary_eventAddActionKey_Parms), &Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::NewProp_Alt_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::NewProp_NewKey = { "NewKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DKBBPLibrary_eventAddActionKey_Parms, NewKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::NewProp_ActName = { "ActName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DKBBPLibrary_eventAddActionKey_Parms, ActName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::NewProp_Ctrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::NewProp_Shift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::NewProp_Cmd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_AddActionKey_Statics::NewProp_Alt,
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
			bool Alt;
			bool Cmd;
			bool Shift;
			bool Ctrl;
		};
		static void NewProp_Ctrl_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Ctrl;
		static void NewProp_Shift_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Shift;
		static void NewProp_Cmd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Cmd;
		static void NewProp_Alt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Alt;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::NewProp_Ctrl_SetBit(void* Obj)
	{
		((DKBBPLibrary_eventRemoveActionKey_Parms*)Obj)->Ctrl = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::NewProp_Ctrl = { "Ctrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DKBBPLibrary_eventRemoveActionKey_Parms), &Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::NewProp_Ctrl_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::NewProp_Shift_SetBit(void* Obj)
	{
		((DKBBPLibrary_eventRemoveActionKey_Parms*)Obj)->Shift = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::NewProp_Shift = { "Shift", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DKBBPLibrary_eventRemoveActionKey_Parms), &Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::NewProp_Shift_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::NewProp_Cmd_SetBit(void* Obj)
	{
		((DKBBPLibrary_eventRemoveActionKey_Parms*)Obj)->Cmd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::NewProp_Cmd = { "Cmd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DKBBPLibrary_eventRemoveActionKey_Parms), &Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::NewProp_Cmd_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::NewProp_Alt_SetBit(void* Obj)
	{
		((DKBBPLibrary_eventRemoveActionKey_Parms*)Obj)->Alt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::NewProp_Alt = { "Alt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DKBBPLibrary_eventRemoveActionKey_Parms), &Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::NewProp_Alt_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DKBBPLibrary_eventRemoveActionKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::NewProp_ActName = { "ActName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DKBBPLibrary_eventRemoveActionKey_Parms, ActName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::NewProp_Ctrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::NewProp_Shift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::NewProp_Cmd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey_Statics::NewProp_Alt,
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
			bool Alt;
			bool Cmd;
			bool Shift;
			bool Ctrl;
			FKey NewKey;
			bool New_Alt;
			bool New_Cmd;
			bool New_Shift;
			bool New_Ctrl;
		};
		static void NewProp_New_Ctrl_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_New_Ctrl;
		static void NewProp_New_Shift_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_New_Shift;
		static void NewProp_New_Cmd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_New_Cmd;
		static void NewProp_New_Alt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_New_Alt;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewKey;
		static void NewProp_Ctrl_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Ctrl;
		static void NewProp_Shift_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Shift;
		static void NewProp_Cmd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Cmd;
		static void NewProp_Alt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Alt;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldKey;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_New_Ctrl_SetBit(void* Obj)
	{
		((DKBBPLibrary_eventReplaceActionKey_Parms*)Obj)->New_Ctrl = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_New_Ctrl = { "New_Ctrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DKBBPLibrary_eventReplaceActionKey_Parms), &Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_New_Ctrl_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_New_Shift_SetBit(void* Obj)
	{
		((DKBBPLibrary_eventReplaceActionKey_Parms*)Obj)->New_Shift = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_New_Shift = { "New_Shift", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DKBBPLibrary_eventReplaceActionKey_Parms), &Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_New_Shift_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_New_Cmd_SetBit(void* Obj)
	{
		((DKBBPLibrary_eventReplaceActionKey_Parms*)Obj)->New_Cmd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_New_Cmd = { "New_Cmd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DKBBPLibrary_eventReplaceActionKey_Parms), &Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_New_Cmd_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_New_Alt_SetBit(void* Obj)
	{
		((DKBBPLibrary_eventReplaceActionKey_Parms*)Obj)->New_Alt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_New_Alt = { "New_Alt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DKBBPLibrary_eventReplaceActionKey_Parms), &Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_New_Alt_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_NewKey = { "NewKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DKBBPLibrary_eventReplaceActionKey_Parms, NewKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_Ctrl_SetBit(void* Obj)
	{
		((DKBBPLibrary_eventReplaceActionKey_Parms*)Obj)->Ctrl = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_Ctrl = { "Ctrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DKBBPLibrary_eventReplaceActionKey_Parms), &Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_Ctrl_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_Shift_SetBit(void* Obj)
	{
		((DKBBPLibrary_eventReplaceActionKey_Parms*)Obj)->Shift = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_Shift = { "Shift", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DKBBPLibrary_eventReplaceActionKey_Parms), &Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_Shift_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_Cmd_SetBit(void* Obj)
	{
		((DKBBPLibrary_eventReplaceActionKey_Parms*)Obj)->Cmd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_Cmd = { "Cmd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DKBBPLibrary_eventReplaceActionKey_Parms), &Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_Cmd_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_Alt_SetBit(void* Obj)
	{
		((DKBBPLibrary_eventReplaceActionKey_Parms*)Obj)->Alt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_Alt = { "Alt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DKBBPLibrary_eventReplaceActionKey_Parms), &Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_Alt_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_OldKey = { "OldKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DKBBPLibrary_eventReplaceActionKey_Parms, OldKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_ActName = { "ActName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DKBBPLibrary_eventReplaceActionKey_Parms, ActName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_New_Ctrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_New_Shift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_New_Cmd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_New_Alt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_NewKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_Ctrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_Shift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_Cmd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey_Statics::NewProp_Alt,
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
			bool Alt;
			bool Cmd;
			bool Shift;
			bool Ctrl;
		};
		static void NewProp_Ctrl_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Ctrl;
		static void NewProp_Shift_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Shift;
		static void NewProp_Cmd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Cmd;
		static void NewProp_Alt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Alt;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewKey;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::NewProp_Ctrl_SetBit(void* Obj)
	{
		((DKBBPLibrary_eventSetActionKey_Parms*)Obj)->Ctrl = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::NewProp_Ctrl = { "Ctrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DKBBPLibrary_eventSetActionKey_Parms), &Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::NewProp_Ctrl_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::NewProp_Shift_SetBit(void* Obj)
	{
		((DKBBPLibrary_eventSetActionKey_Parms*)Obj)->Shift = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::NewProp_Shift = { "Shift", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DKBBPLibrary_eventSetActionKey_Parms), &Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::NewProp_Shift_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::NewProp_Cmd_SetBit(void* Obj)
	{
		((DKBBPLibrary_eventSetActionKey_Parms*)Obj)->Cmd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::NewProp_Cmd = { "Cmd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DKBBPLibrary_eventSetActionKey_Parms), &Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::NewProp_Cmd_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::NewProp_Alt_SetBit(void* Obj)
	{
		((DKBBPLibrary_eventSetActionKey_Parms*)Obj)->Alt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::NewProp_Alt = { "Alt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DKBBPLibrary_eventSetActionKey_Parms), &Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::NewProp_Alt_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::NewProp_NewKey = { "NewKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DKBBPLibrary_eventSetActionKey_Parms, NewKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::NewProp_ActName = { "ActName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DKBBPLibrary_eventSetActionKey_Parms, ActName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::NewProp_Ctrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::NewProp_Shift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::NewProp_Cmd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDKBBPLibrary_SetActionKey_Statics::NewProp_Alt,
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
		{ &Z_Construct_UFunction_UDKBBPLibrary_AddActionKey, "AddActionKey" }, // 164601215
		{ &Z_Construct_UFunction_UDKBBPLibrary_AddAxisKey, "AddAxisKey" }, // 2111030141
		{ &Z_Construct_UFunction_UDKBBPLibrary_RemoveActionKey, "RemoveActionKey" }, // 1001232179
		{ &Z_Construct_UFunction_UDKBBPLibrary_RemoveAxisKey, "RemoveAxisKey" }, // 2553463521
		{ &Z_Construct_UFunction_UDKBBPLibrary_ReplaceActionKey, "ReplaceActionKey" }, // 1099524514
		{ &Z_Construct_UFunction_UDKBBPLibrary_ReplaceAxisKey, "ReplaceAxisKey" }, // 2247072039
		{ &Z_Construct_UFunction_UDKBBPLibrary_SetActionKey, "SetActionKey" }, // 130838944
		{ &Z_Construct_UFunction_UDKBBPLibrary_SetAxisKey, "SetAxisKey" }, // 632918660
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDKBBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DKBBPLibrary.h" },
		{ "ModuleRelativePath", "Public/DKBBPLibrary.h" },
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
	IMPLEMENT_CLASS(UDKBBPLibrary, 4218988309);
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
