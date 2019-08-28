/*

	By DeepDev

*/

#pragma once

#include "CoreMinimal.h"
#include "Runtime\Engine\Classes\GameFramework\InputSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/Object.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "DKBBPLibrary.h"

/**
 * 
 */

class DKB_API KeyFunction
{
public:
	KeyFunction();

	void SetActionKey(FName ActName, FKey NewKey, bool Shift, bool Ctrl, bool Alt, bool Cmd)
	{
		UInputSettings *Settings = const_cast<UInputSettings*>(GetDefault<UInputSettings>());
		if (!Settings) { return; }

		TArray<FInputActionKeyMapping> OutMappings ;
		Settings->GetActionMappingByName(ActName, OutMappings);
		
	for(int ActionIndex = OutMappings.Num() - 1; ActionIndex >= 0; --ActionIndex)
		{
			Settings->RemoveActionMapping(OutMappings[ActionIndex]);
		}
			
		Settings->AddActionMapping(FInputActionKeyMapping(ActName, NewKey, Shift ,Ctrl ,Alt ,Cmd));
		Settings->SaveKeyMappings();

	}

	void AddActionKey(FName ActName, FKey NewKey, bool Shift, bool Ctrl, bool Alt, bool Cmd)
	{
		UInputSettings *Settings = const_cast<UInputSettings*>(GetDefault<UInputSettings>());
		if (!Settings) { return; }

		Settings->AddActionMapping(FInputActionKeyMapping(ActName, NewKey, Shift, Ctrl, Alt, Cmd));
		Settings->SaveKeyMappings();
	}



	void RemoveActionKey(FName ActName, FKey Key, bool Shift, bool Ctrl, bool Alt, bool Cmd)
	{
		UInputSettings *Settings = const_cast<UInputSettings*>(GetDefault<UInputSettings>());
		if (!Settings) { return; }

		Settings->RemoveActionMapping(FInputActionKeyMapping(ActName, Key, Shift, Ctrl, Alt, Cmd));
		Settings->SaveKeyMappings();
	}

	void ReplaceActionKey(FName ActName, FKey OldKey,bool Shift,bool Ctrl , bool Alt , bool Cmd, FKey NewKey, bool New_Shift, bool New_Ctrl, bool New_Alt, bool New_Cmd)
	{
		UInputSettings *Settings = const_cast<UInputSettings*>(GetDefault<UInputSettings>());
		if (!Settings) { return; }

		Settings->RemoveActionMapping(FInputActionKeyMapping(ActName, OldKey,Shift, Ctrl, Alt, Cmd));
		Settings->AddActionMapping(FInputActionKeyMapping(ActName, NewKey, New_Shift, New_Ctrl, New_Alt, New_Cmd));
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
