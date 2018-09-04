#include "GCore.h"
#include "UIManager.h"


UIManager * UIManager::GetInstance()
{
	static UIManager m;

	return &m;
}
void UIManager::UnRegisterButton(UButtonScript * _btn)
{
	m_ButtonList.remove(_btn);
	_btn->On_Delete();

}