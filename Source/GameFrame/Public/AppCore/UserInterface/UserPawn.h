//
//  UserPawn.h
//  GameFrame_Index
//
//  Created by fafa on 2018/8/14.
//  Copyright © 2018年 Epic Games, Inc. All rights reserved.
//

#pragma once

#include "GPawn.h"
#include "UserPawn.generated.h"


UCLASS()
class AUserPawn : public AGPawn
{
    GENERATED_BODY()
public:
    
    virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent);
    
};
