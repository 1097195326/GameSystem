#pragma once

#include "GObject.h"

class GAMEFRAME_API UIManager : public GObject
{
private:
	// single instance
	
public:
	static UIManager * GetInstance();

};