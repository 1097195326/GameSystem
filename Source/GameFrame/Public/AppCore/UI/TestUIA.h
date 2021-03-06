#pragma once

#include "BaseUI.h"
#include "TestUIA.generated.h"


UCLASS()
class GAMEFRAME_API  UTestUIA : public UBaseUI
{
	GENERATED_BODY()

public:

	virtual void On_Init() override;

	UButton * m_ViewButton;

	UFUNCTION()
	void OnButtonClick();
};