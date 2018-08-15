//
//  GLoad.hpp
//  GameFrame_Index
//
//  Created by fafa on 2018/8/9.
//  Copyright © 2018年 Epic Games, Inc. All rights reserved.
//

#pragma once

class GCORE_API GLoad
{
public:
    GLoad(){}
    virtual ~GLoad(){}
    
    virtual void GOnInit(){}
    virtual void GOnStart(){}
    virtual void GOnEnd(){}
};


