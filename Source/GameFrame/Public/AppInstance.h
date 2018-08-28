#pragma once

#include "GAppInstance.h"
#include "AppCore/Managers/ManagerHeader.h"
#include "AppInstance.generated.h"

UCLASS()
class GAMEFRAME_API UAppInstance : public UGAppInstance
{
	GENERATED_BODY()
private:

public:
	virtual void On_Init() override;

};