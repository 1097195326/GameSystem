//
//  UserPawn.c
//  GameFrame_Index
//
//  Created by fafa on 2018/8/14.
//  Copyright © 2018年 Epic Games, Inc. All rights reserved.
//


#include "UserPawn.h"
#include "UserPawnController.h"
#include "Engine/World.h"
#include "BehaviorTreeGameMode.h"
#include "Components/InputComponent.h"

AUserPawn::AUserPawn()
{
    
}
void AUserPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
    
#if PLATFORM_IOS
    PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AUserPawn::OnFingerTouch);
#else
    PlayerInputComponent->BindAction("OneFingerTouch", EInputEvent::IE_Pressed, this, &AUserPawn::OneFingerPress);
#endif
    
}
void AUserPawn::OnFingerTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
    UE_LOG(LogTemp, Log, TEXT("zhx :: AUserPawn::OnFingerTouch"));
    
    FHitResult HitResult;
    ((AUserPawnController*)Controller)->GetHitResultUnderFinger(FingerIndex, ECC_Visibility, true, HitResult);
    
    ABehaviorTreeGameMode * GameMode = GetWorld()->GetAuthGameMode<ABehaviorTreeGameMode>();
    GameMode->SetTargetLocation(HitResult.Location);
    
    UE_LOG(LogTemp,Log,TEXT("zhx : hit location %f,%f"),Location.X,Location.Y);
//    UE_LOG(LogTemp,Log,TEXT("zhx : hit location %f,%f"),HitResult.Location.X,HitResult.Location.Y);
    
    
    
}
void AUserPawn::OneFingerPress()
{
    UE_LOG(LogTemp, Log, TEXT("zhx :: AUserPawn::OneFingerPress"));

    FHitResult HitResult;
    ((AUserPawnController*)Controller)->
    GetHitResultUnderCursorByChannel(UEngineTypes::ConvertToTraceType(ECC_Visibility), true, HitResult);
    
    
    
}
