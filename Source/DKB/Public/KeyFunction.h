/*

	By DeepDev

*/

#pragma once

#include "CoreMinimal.h"
#include "Runtime\Engine\Classes\GameFramework\InputSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/Object.h"

/**
 * 
 */

class DKB_API KeyFunction
{
public:
	KeyFunction();

	void SetActionKey(FName ActName, FKey NewKey)
	{
		UInputSettings *Settings = const_cast<UInputSettings*>(GetDefault<UInputSettings>());
		if (!Settings) { return; }

		TArray<FInputActionKeyMapping> OutMappings ;
		Settings->GetActionMappingByName(ActName, OutMappings);
		
	for(int ActionIndex = OutMappings.Num() - 1; ActionIndex >= 0; --ActionIndex)
		{
			Settings->RemoveActionMapping(OutMappings[ActionIndex]);
		}
			
		Settings->AddActionMapping(FInputActionKeyMapping(ActName, NewKey));
		Settings->SaveKeyMappings();

	}

	void AddActionKey(FName ActName, FKey NewKey)
	{
		UInputSettings *Settings = const_cast<UInputSettings*>(GetDefault<UInputSettings>());
		if (!Settings) { return; }

		Settings->AddActionMapping(FInputActionKeyMapping(ActName, NewKey));
		Settings->SaveKeyMappings();
	}



	void RemoveActionKey(FName ActName, FKey Key)
	{
		UInputSettings *Settings = const_cast<UInputSettings*>(GetDefault<UInputSettings>());
		if (!Settings) { return; }

		Settings->RemoveActionMapping(FInputActionKeyMapping(ActName, Key));
		Settings->SaveKeyMappings();
	}

	void ReplaceActionKey(FName ActName, FKey OldKey, FKey NewKey)
	{
		UInputSettings *Settings = const_cast<UInputSettings*>(GetDefault<UInputSettings>());
		if (!Settings) { return; }

		Settings->RemoveActionMapping(FInputActionKeyMapping(ActName, OldKey));
		Settings->AddActionMapping(FInputActionKeyMapping(ActName, NewKey));
		Settings->SaveKeyMappings();
	}

	void SetAxisKey(FName AxName, FKey NewKey)
	{
		UInputSettings *Settings = const_cast<UInputSettings*>(GetDefault<UInputSettings>());
		if (!Settings) { return; }

		TArray<FInputAxisKeyMapping> OutMappings;
		Settings->GetAxisMappingByName(AxName, OutMappings);

		for (int AxisIndex = OutMappings.Num() - 1; AxisIndex >= 0; --AxisIndex)
		{
			Settings->RemoveAxisMapping(OutMappings[AxisIndex]);
		}

		Settings->AddAxisMapping(FInputAxisKeyMapping(AxName, NewKey));
		Settings->SaveKeyMappings();

	}

	void AddAxisKey(FName AxName, FKey NewKey)
	{
		UInputSettings *Settings = const_cast<UInputSettings*>(GetDefault<UInputSettings>());
		if (!Settings) { return; }

		Settings->AddAxisMapping(FInputAxisKeyMapping(AxName, NewKey));
		Settings->SaveKeyMappings();
	}



	void RemoveAxisKey(FName AxName, FKey Key)
	{
		UInputSettings *Settings = const_cast<UInputSettings*>(GetDefault<UInputSettings>());
		if (!Settings) { return; }

		Settings->RemoveAxisMapping(FInputAxisKeyMapping(AxName, Key));
		Settings->SaveKeyMappings();
	}

	void ReplaceAxisKey(FName AxName, FKey OldKey, FKey NewKey)
	{
		UInputSettings *Settings = const_cast<UInputSettings*>(GetDefault<UInputSettings>());
		if (!Settings) { return; }

		Settings->RemoveAxisMapping(FInputAxisKeyMapping(AxName, OldKey));
		Settings->AddAxisMapping(FInputAxisKeyMapping(AxName, NewKey));
		Settings->SaveKeyMappings();
	}

	~KeyFunction();



};
