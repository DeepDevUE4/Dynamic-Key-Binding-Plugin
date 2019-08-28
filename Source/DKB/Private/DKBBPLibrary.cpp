/*

	By DeepDev

*/

#include "DKBBPLibrary.h"
#include "DKB.h"
#include "KeyFunction.h"

UDKBBPLibrary::UDKBBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void UDKBBPLibrary::SetActionKey(FName ActName, FKey NewKey, bool Alt, bool Cmd, bool Shift, bool Ctrl)
{

	KeyFunction KeyObject;
	KeyObject.SetActionKey(ActName, NewKey, Shift, Ctrl, Alt, Cmd);

}

void UDKBBPLibrary::AddActionKey(FName ActName, FKey NewKey, bool Alt, bool Cmd, bool Shift, bool Ctrl)
{

	KeyFunction KeyObject;
	KeyObject.AddActionKey(ActName, NewKey, Shift, Ctrl, Alt, Cmd);

}

void UDKBBPLibrary::RemoveActionKey(FName ActName, FKey Key, bool Alt, bool Cmd, bool Shift, bool Ctrl)
{

	KeyFunction KeyObject;
	KeyObject.RemoveActionKey(ActName, Key, Shift, Ctrl, Alt, Cmd);

}

void UDKBBPLibrary::ReplaceActionKey(FName ActName, FKey OldKey, bool Alt, bool Cmd, bool Shift, bool Ctrl, FKey NewKey, bool New_Alt, bool New_Cmd, bool New_Shift, bool New_Ctrl)
{

	KeyFunction KeyObject;
	KeyObject.ReplaceActionKey(ActName, OldKey, Shift, Ctrl, Alt, Cmd, NewKey, New_Shift, New_Ctrl, New_Alt, New_Cmd);

}

void UDKBBPLibrary::SetAxisKey(FName AxName, FKey NewKey)
{

	KeyFunction KeyObject;
	KeyObject.SetAxisKey(AxName, NewKey);

}

void UDKBBPLibrary::AddAxisKey(FName AxName, FKey NewKey)
{

	KeyFunction KeyObject;
	KeyObject.AddAxisKey(AxName, NewKey);

}

void UDKBBPLibrary::RemoveAxisKey(FName AxName, FKey Key)
{

	KeyFunction KeyObject;
	KeyObject.RemoveAxisKey(AxName, Key);

}

void UDKBBPLibrary::ReplaceAxisKey(FName AxName, FKey OldKey,FKey NewKey)
{	KeyFunction KeyObject;
	KeyObject.ReplaceAxisKey(AxName, OldKey, NewKey);

}


