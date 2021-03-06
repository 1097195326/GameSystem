#include "DataManager.h"
#include "FileHelper.h"
#include "Base64.h"
#include "EncryptDecryptTool.h"

DataManager * DataManager::GetInstance()
{
	static DataManager m;
	return &m;
}
void DataManager::LoadAllXMLData()
{
	//
	FString mContentDir = FPaths::ConvertRelativePathToFull(FPaths::ProjectContentDir());
	FString mLocalConfigPath = FString::Printf(TEXT("%s%s"), *mContentDir, TEXT("Configs/"));

	if (!LoadXMLFile(FString::Printf(TEXT("%s%s"), *mLocalConfigPath, TEXT("UIXMLData.xml"))))
	{
		return;
	}

}
bool DataManager::LoadXMLFile(const FString & _xmlPath)
{
	TiXmlDocument doc;
	FString mStrContent;

	if (!FFileHelper::LoadFileToString(mStrContent, *_xmlPath))
	{
		return false;
	}
	// ����.
	/*if (!_xmlPath.Contains(TEXT("ChinesePrototype.xml")) && !_xmlPath.Contains(TEXT("EnglishPrototype.xml")))
	{
		FString mEncryptStr = EncryptAndDecryptTool::Decrypt(mStrContent, EncryptKey);
		FBase64::Decode(mEncryptStr, mStrContent);
	}*/
	FString mContent = mStrContent;
	std::string stdContent = TCHAR_TO_UTF8(*mContent);
	const char * xmlContent = stdContent.c_str();
	doc.Parse(xmlContent);

	TiXmlElement* root = doc.FirstChildElement();
	if (root == NULL)
	{
		doc.Clear();
		return false;
	}
	const char * nodeType = root->Attribute("type");
	for (TiXmlElement* elem = root->FirstChildElement(); elem != NULL; elem = elem->NextSiblingElement())
	{
		GData * mData;
		const char * pid = elem->Attribute("pid");
		std::map<int32, GData*>::iterator it = m_DataMap.find(atoi(pid));
		if (it != m_DataMap.end())
		{
			mData = it->second;
			mData->InitWithXML(elem);
		}
		else
		{
			mData = (GData*)(ReflectManager::Get()->GetClassByName(nodeType));
			mData->InitWithXML(elem);
			m_DataMap.insert(std::make_pair(atoi(pid), mData));
		}
	}
	doc.Clear();
	return true;
}
UIXMLData * DataManager::GetUIXMLData()
{
	return (UIXMLData*)m_DataMap[E_UIXMLData];
}