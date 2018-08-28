#pragma once

#include "GObject.h"

class GAMEFRAME_API DataManager : public GObject
{
private:

public:
	static DataManager * GetInstance();

	void LoadXMLData();
};