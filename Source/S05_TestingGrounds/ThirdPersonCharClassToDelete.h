// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TP_ThirdPerson/TP_ThirdPersonCharacter.h"
#include "ThirdPersonCharClassToDelete.generated.h"

/**
 * 
 */
UCLASS()
class S05_TESTINGGROUNDS_API AThirdPersonCharClassToDelete : public ATP_ThirdPersonCharacter
{
	GENERATED_BODY()
	
public:

protected:

	UPROPERTY(EditInstanceOnly, Category = "Patrol Route")
	TArray<AActor*> PatrolPointsCPP;


private:

	
	
	
};
