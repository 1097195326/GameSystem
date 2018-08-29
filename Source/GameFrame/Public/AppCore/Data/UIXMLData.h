#pragma once

#include "DataT.h"

class GAMEFRAME_API UIXMLData : public DataT
{
private:

public:
	virtual void InitWithXML(TiXmlElement * elem) override;

};