// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "DDOO.h"
#include "DDPlayerState.generated.h"


/**
 * 
 */
UCLASS()
class DATADRIVEN_API ADDPlayerState : public APlayerState, public IDDOO
{
	GENERATED_BODY()
	
public:

	ADDPlayerState();

	//PlayerState不允许销毁,不允许重写销毁周期函数
	//virtual void DDRelease() override;

public:

	//模组名字,如果为空,说明要手动指定,不为空就是自动指定
	UPROPERTY(EditAnywhere, Category = "DataDriven")
		FName ModuleName;
	//对象名字,如果为空,说明要手动指定,不为空就是自动指定
	UPROPERTY(EditAnywhere, Category = "DataDriven")
		FName ObjectName;
	//类名字,如果为空,说明要手动指定,不为空就是自动指定
	UPROPERTY(EditAnywhere, Category = "DataDriven")
		FName ClassName;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	
};
