#pragma once

#include "GObject.h"
#include "Blueprint/UserWidget.h"
#include "BaseUI.generated.h"

UCLASS()
class GCORE_API UBaseUI : public UUserWidget, public GObject
{
	GENERATED_BODY()
public:
	virtual bool Initialize();
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	virtual void NativeDestruct() override;

public:
	virtual void On_Init() override;
	virtual void On_Tick(float delta) override;
	virtual void On_Delete() override;


};