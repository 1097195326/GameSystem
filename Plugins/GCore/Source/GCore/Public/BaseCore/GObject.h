//
//  GObject.hpp
//  GameFrame_Index
//
//  Created by fafa on 2018/8/9.
//  Copyright © 2018年 Epic Games, Inc. All rights reserved.
//

#ifndef GObject_hpp
#define GObject_hpp

#include "GLoad.h"

class GObject : public GLoad
{
private:
    int     m_ObjectIndex;
public:
    GObject();
    ~GObject();
    
    virtual void GOnInit() override;
    virtual void GOnStart() override;
    virtual void GOnEnd() override;
    
    int GetGObjectIndex();
    
};

#endif /* GObject_hpp */
