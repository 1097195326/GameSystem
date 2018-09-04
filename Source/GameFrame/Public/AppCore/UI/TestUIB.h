#pragma once

#include "BaseUI.h"
#include "TestUIB.generated.h"


UCLASS()
class GAMEFRAME_API  UTestUIB : public UBaseUI
{
	GENERATED_BODY()

public:
	virtual void On_Init() override;

	UButton * m_ViewButton;

	UFUNCTION()
		void OnButtonClick();
};