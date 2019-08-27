/*

	By DeepDev

*/

#pragma once

#include "Modules/ModuleManager.h"

class FDKBModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
