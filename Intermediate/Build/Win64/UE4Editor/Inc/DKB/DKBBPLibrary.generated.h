// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
#ifdef DKB_DKBBPLibrary_generated_h
#error "DKBBPLibrary.generated.h already included, missing '#pragma once' in DKBBPLibrary.h"
#endif
#define DKB_DKBBPLibrary_generated_h

#define Users_EB_3D_Objects_DKB_HostProject_Plugins_DKB_Source_DKB_Public_DKBBPLibrary_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReplaceAxisKey) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_AxName); \
		P_GET_STRUCT(FKey,Z_Param_OldKey); \
		P_GET_STRUCT(FKey,Z_Param_NewKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDKBBPLibrary::ReplaceAxisKey(Z_Param_AxName,Z_Param_OldKey,Z_Param_NewKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAxisKey) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_AxName); \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDKBBPLibrary::RemoveAxisKey(Z_Param_AxName,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAxisKey) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_AxName); \
		P_GET_STRUCT(FKey,Z_Param_NewKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDKBBPLibrary::AddAxisKey(Z_Param_AxName,Z_Param_NewKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAxisKey) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_AxName); \
		P_GET_STRUCT(FKey,Z_Param_NewKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDKBBPLibrary::SetAxisKey(Z_Param_AxName,Z_Param_NewKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplaceActionKey) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActName); \
		P_GET_STRUCT(FKey,Z_Param_OldKey); \
		P_GET_UBOOL(Z_Param_Alt); \
		P_GET_UBOOL(Z_Param_Cmd); \
		P_GET_UBOOL(Z_Param_Shift); \
		P_GET_UBOOL(Z_Param_Ctrl); \
		P_GET_STRUCT(FKey,Z_Param_NewKey); \
		P_GET_UBOOL(Z_Param_New_Alt); \
		P_GET_UBOOL(Z_Param_New_Cmd); \
		P_GET_UBOOL(Z_Param_New_Shift); \
		P_GET_UBOOL(Z_Param_New_Ctrl); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDKBBPLibrary::ReplaceActionKey(Z_Param_ActName,Z_Param_OldKey,Z_Param_Alt,Z_Param_Cmd,Z_Param_Shift,Z_Param_Ctrl,Z_Param_NewKey,Z_Param_New_Alt,Z_Param_New_Cmd,Z_Param_New_Shift,Z_Param_New_Ctrl); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveActionKey) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActName); \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_GET_UBOOL(Z_Param_Alt); \
		P_GET_UBOOL(Z_Param_Cmd); \
		P_GET_UBOOL(Z_Param_Shift); \
		P_GET_UBOOL(Z_Param_Ctrl); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDKBBPLibrary::RemoveActionKey(Z_Param_ActName,Z_Param_Key,Z_Param_Alt,Z_Param_Cmd,Z_Param_Shift,Z_Param_Ctrl); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddActionKey) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActName); \
		P_GET_STRUCT(FKey,Z_Param_NewKey); \
		P_GET_UBOOL(Z_Param_Alt); \
		P_GET_UBOOL(Z_Param_Cmd); \
		P_GET_UBOOL(Z_Param_Shift); \
		P_GET_UBOOL(Z_Param_Ctrl); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDKBBPLibrary::AddActionKey(Z_Param_ActName,Z_Param_NewKey,Z_Param_Alt,Z_Param_Cmd,Z_Param_Shift,Z_Param_Ctrl); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActionKey) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActName); \
		P_GET_STRUCT(FKey,Z_Param_NewKey); \
		P_GET_UBOOL(Z_Param_Alt); \
		P_GET_UBOOL(Z_Param_Cmd); \
		P_GET_UBOOL(Z_Param_Shift); \
		P_GET_UBOOL(Z_Param_Ctrl); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDKBBPLibrary::SetActionKey(Z_Param_ActName,Z_Param_NewKey,Z_Param_Alt,Z_Param_Cmd,Z_Param_Shift,Z_Param_Ctrl); \
		P_NATIVE_END; \
	}


#define Users_EB_3D_Objects_DKB_HostProject_Plugins_DKB_Source_DKB_Public_DKBBPLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReplaceAxisKey) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_AxName); \
		P_GET_STRUCT(FKey,Z_Param_OldKey); \
		P_GET_STRUCT(FKey,Z_Param_NewKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDKBBPLibrary::ReplaceAxisKey(Z_Param_AxName,Z_Param_OldKey,Z_Param_NewKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAxisKey) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_AxName); \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDKBBPLibrary::RemoveAxisKey(Z_Param_AxName,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAxisKey) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_AxName); \
		P_GET_STRUCT(FKey,Z_Param_NewKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDKBBPLibrary::AddAxisKey(Z_Param_AxName,Z_Param_NewKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAxisKey) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_AxName); \
		P_GET_STRUCT(FKey,Z_Param_NewKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDKBBPLibrary::SetAxisKey(Z_Param_AxName,Z_Param_NewKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplaceActionKey) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActName); \
		P_GET_STRUCT(FKey,Z_Param_OldKey); \
		P_GET_UBOOL(Z_Param_Alt); \
		P_GET_UBOOL(Z_Param_Cmd); \
		P_GET_UBOOL(Z_Param_Shift); \
		P_GET_UBOOL(Z_Param_Ctrl); \
		P_GET_STRUCT(FKey,Z_Param_NewKey); \
		P_GET_UBOOL(Z_Param_New_Alt); \
		P_GET_UBOOL(Z_Param_New_Cmd); \
		P_GET_UBOOL(Z_Param_New_Shift); \
		P_GET_UBOOL(Z_Param_New_Ctrl); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDKBBPLibrary::ReplaceActionKey(Z_Param_ActName,Z_Param_OldKey,Z_Param_Alt,Z_Param_Cmd,Z_Param_Shift,Z_Param_Ctrl,Z_Param_NewKey,Z_Param_New_Alt,Z_Param_New_Cmd,Z_Param_New_Shift,Z_Param_New_Ctrl); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveActionKey) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActName); \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_GET_UBOOL(Z_Param_Alt); \
		P_GET_UBOOL(Z_Param_Cmd); \
		P_GET_UBOOL(Z_Param_Shift); \
		P_GET_UBOOL(Z_Param_Ctrl); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDKBBPLibrary::RemoveActionKey(Z_Param_ActName,Z_Param_Key,Z_Param_Alt,Z_Param_Cmd,Z_Param_Shift,Z_Param_Ctrl); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddActionKey) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActName); \
		P_GET_STRUCT(FKey,Z_Param_NewKey); \
		P_GET_UBOOL(Z_Param_Alt); \
		P_GET_UBOOL(Z_Param_Cmd); \
		P_GET_UBOOL(Z_Param_Shift); \
		P_GET_UBOOL(Z_Param_Ctrl); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDKBBPLibrary::AddActionKey(Z_Param_ActName,Z_Param_NewKey,Z_Param_Alt,Z_Param_Cmd,Z_Param_Shift,Z_Param_Ctrl); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActionKey) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActName); \
		P_GET_STRUCT(FKey,Z_Param_NewKey); \
		P_GET_UBOOL(Z_Param_Alt); \
		P_GET_UBOOL(Z_Param_Cmd); \
		P_GET_UBOOL(Z_Param_Shift); \
		P_GET_UBOOL(Z_Param_Ctrl); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDKBBPLibrary::SetActionKey(Z_Param_ActName,Z_Param_NewKey,Z_Param_Alt,Z_Param_Cmd,Z_Param_Shift,Z_Param_Ctrl); \
		P_NATIVE_END; \
	}


#define Users_EB_3D_Objects_DKB_HostProject_Plugins_DKB_Source_DKB_Public_DKBBPLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDKBBPLibrary(); \
	friend struct Z_Construct_UClass_UDKBBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UDKBBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DKB"), NO_API) \
	DECLARE_SERIALIZER(UDKBBPLibrary)


#define Users_EB_3D_Objects_DKB_HostProject_Plugins_DKB_Source_DKB_Public_DKBBPLibrary_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUDKBBPLibrary(); \
	friend struct Z_Construct_UClass_UDKBBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UDKBBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DKB"), NO_API) \
	DECLARE_SERIALIZER(UDKBBPLibrary)


#define Users_EB_3D_Objects_DKB_HostProject_Plugins_DKB_Source_DKB_Public_DKBBPLibrary_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDKBBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDKBBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDKBBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDKBBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDKBBPLibrary(UDKBBPLibrary&&); \
	NO_API UDKBBPLibrary(const UDKBBPLibrary&); \
public:


#define Users_EB_3D_Objects_DKB_HostProject_Plugins_DKB_Source_DKB_Public_DKBBPLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDKBBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDKBBPLibrary(UDKBBPLibrary&&); \
	NO_API UDKBBPLibrary(const UDKBBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDKBBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDKBBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDKBBPLibrary)


#define Users_EB_3D_Objects_DKB_HostProject_Plugins_DKB_Source_DKB_Public_DKBBPLibrary_h_12_PRIVATE_PROPERTY_OFFSET
#define Users_EB_3D_Objects_DKB_HostProject_Plugins_DKB_Source_DKB_Public_DKBBPLibrary_h_9_PROLOG
#define Users_EB_3D_Objects_DKB_HostProject_Plugins_DKB_Source_DKB_Public_DKBBPLibrary_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Users_EB_3D_Objects_DKB_HostProject_Plugins_DKB_Source_DKB_Public_DKBBPLibrary_h_12_PRIVATE_PROPERTY_OFFSET \
	Users_EB_3D_Objects_DKB_HostProject_Plugins_DKB_Source_DKB_Public_DKBBPLibrary_h_12_RPC_WRAPPERS \
	Users_EB_3D_Objects_DKB_HostProject_Plugins_DKB_Source_DKB_Public_DKBBPLibrary_h_12_INCLASS \
	Users_EB_3D_Objects_DKB_HostProject_Plugins_DKB_Source_DKB_Public_DKBBPLibrary_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Users_EB_3D_Objects_DKB_HostProject_Plugins_DKB_Source_DKB_Public_DKBBPLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Users_EB_3D_Objects_DKB_HostProject_Plugins_DKB_Source_DKB_Public_DKBBPLibrary_h_12_PRIVATE_PROPERTY_OFFSET \
	Users_EB_3D_Objects_DKB_HostProject_Plugins_DKB_Source_DKB_Public_DKBBPLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Users_EB_3D_Objects_DKB_HostProject_Plugins_DKB_Source_DKB_Public_DKBBPLibrary_h_12_INCLASS_NO_PURE_DECLS \
	Users_EB_3D_Objects_DKB_HostProject_Plugins_DKB_Source_DKB_Public_DKBBPLibrary_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DKBBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DKB_API UClass* StaticClass<class UDKBBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Users_EB_3D_Objects_DKB_HostProject_Plugins_DKB_Source_DKB_Public_DKBBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
