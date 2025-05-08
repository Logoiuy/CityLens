// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"
#include <AndroidNativeUtils.h>
#include "Android/AndroidApplication.h"
#include "Android/AndroidJavaEnv.h"


FString UMyBlueprintFunctionLibrary::GetAndroidIntentData()
{
    extern jobject GGameActivity;
    AndroidNativeUtils::CallJavaStaticMethod<void>("com/mypackage/MyIntentUtils", "SetGameActivity", GGameActivity);

    FString Action = AndroidNativeUtils::CallJavaStaticMethod<FString>("com/mypackage/MyIntentUtils", "GetIntentAction");
    //UE_LOG(LogTemp, Log, TEXT("Intent Action: %s"), *Action);

    return Action;
}