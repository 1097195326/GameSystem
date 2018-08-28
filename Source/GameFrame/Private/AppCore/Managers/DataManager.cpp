#include "DataManager.h"


DataManager * DataManager::GetInstance()
{
	static DataManager m;
	return &m;
}
void DataManager::LoadXMLData()
{

}