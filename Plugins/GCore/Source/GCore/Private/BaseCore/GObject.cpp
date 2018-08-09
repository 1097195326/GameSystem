//
//  GObject.cpp
//  GameFrame_Index
//
//  Created by fafa on 2018/8/9.
//  Copyright © 2018年 Epic Games, Inc. All rights reserved.
//
#include "GCore.h"
#include "GObject.h"

static int _GObjectCount = 0;

GObject::GObject()
{
    m_ObjectIndex = _GObjectCount++;
    GOnInit();
}
GObject::~GObject()
{
    m_ObjectIndex = -1;
}
void GObject::GOnInit()
{
    
}
void GObject::GOnStart()
{
    
}
void GObject::GOnEnd()
{
    
}
int GObject::GetGObjectIndex()
{
    return m_ObjectIndex;
}
