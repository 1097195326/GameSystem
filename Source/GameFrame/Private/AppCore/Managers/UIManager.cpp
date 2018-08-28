#include "UIManager.h"


UIManager * UIManager::GetInstance()
{
	static UIManager m;

	return &m;
}