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

void UDKBBPLibrary::SetActionKey(FName ActName, FKey NewKey)
{

	KeyFunction KeyObject;
	KeyObject.SetActionKey(ActName, NewKey);

}

void UDKBBPLibrary::AddActionKey(FName ActName, FKey NewKey)
{

	KeyFunction KeyObject;
	KeyObject.AddActionKey(ActName, NewKey);

}

void UDKBBPLibrary::RemoveActionKey(FName ActName, FKey Key)
{

	KeyFunction KeyObject;
	KeyObject.RemoveActionKey(ActName, Key);

}

void UDKBBPLibrary::ReplaceActionKey(FName ActName, FKey OldKey, FKey NewKey)
{

	KeyFunction KeyObject;
	KeyObject.ReplaceActionKey(ActName, OldKey, NewKey);

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

void UDKBBPLibrary::ReplaceAxisKey(FName AxName, FKey OldKey, FKey NewKey)
{

	KeyFunction KeyObject;
	KeyObject.ReplaceAxisKey(AxName, OldKey, NewKey);

}

