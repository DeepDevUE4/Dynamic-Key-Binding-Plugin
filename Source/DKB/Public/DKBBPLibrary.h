/*

	By DeepDev

*/

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "DKBBPLibrary.generated.h"

UCLASS()
class UDKBBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Action Key", Keywords = "Set Action Key"), Category = "Dynamic Key Binding")
		static void SetActionKey(FName ActName, FKey NewKey);


		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Action Key", Keywords = "Add Action Key"), Category = "Dynamic Key Binding")
		static void AddActionKey(FName ActName, FKey NewKey);


		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Remove Action Key", Keywords = "Remove Action Key"), Category = "Dynamic Key Binding")
		static void RemoveActionKey(FName ActName, FKey Key);


		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Replace Action Key", Keywords = "Replace Action Key"), Category = "Dynamic Key Binding")
		static void ReplaceActionKey(FName ActName, FKey OldKey, FKey NewKey);

		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Axis Key", Keywords = "Set Axis Key"), Category = "Dynamic Key Binding")
			static void SetAxisKey(FName AxName, FKey NewKey);


		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Axis Key", Keywords = "Add Axis Key"), Category = "Dynamic Key Binding")
			static void AddAxisKey(FName AxName, FKey NewKey);


		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Remove Axis Key", Keywords = "Remove Axis Key"), Category = "Dynamic Key Binding")
			static void RemoveAxisKey(FName AxName, FKey Key);


		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Replace Axis Key", Keywords = "Replace Axis Key"), Category = "Dynamic Key Binding")
			static void ReplaceAxisKey(FName AxName, FKey OldKey, FKey NewKey);

};
