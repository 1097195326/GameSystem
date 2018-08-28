#include "GCore.h"
#include "BaseUI.h"



bool UBaseUI::Initialize()
{
	if (Super::Initialize())
	{
		On_Init();
		return true;
	}
	return false;
}
void UBaseUI::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	On_Tick(InDeltaTime);
}
void UBaseUI::NativeDestruct()
{
	Super::NativeDestruct();
	On_Delete();
}
void UBaseUI::On_Init()
{

}
void UBaseUI::On_Tick(float delta)
{

}
void UBaseUI::On_Delete()
{

}