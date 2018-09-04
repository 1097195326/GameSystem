#pragma once

#include "GData.h"
#include <map>

using namespace std;

class GAMEFRAME_API DataManager : public GObject
{
private:
	map<int32, GData*>		m_DataMap;

private:
	bool LoadXMLFile(const FString & _xmlPath);

public:
	static DataManager * GetInstance();

	void LoadAllXMLData();
	
};