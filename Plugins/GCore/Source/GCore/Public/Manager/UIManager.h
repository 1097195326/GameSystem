#pragma once

#include "GObject.h"
#include "ButtonScript.h"
#include <list>

class GCORE_API UIManager : public GObject
{
private:
	// single instance
	std::list<UButtonScript*>		m_ButtonList;

public:
	static UIManager * GetInstance();



	template<typename T>
	void RegisterButton(int _bid, UButton * _btn, T * _obj, void(T::*_func)(int))
	{
		UButtonScript * bs = UButtonScript::Create();
		bs->BindFunctionCall(_bid, _btn, _obj, _func);
		m_ButtonList.push_back(bs);
	}
	void UnRegisterButton(UButtonScript * _btn);
};