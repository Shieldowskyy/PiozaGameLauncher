#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BuildDate.generated.h"

UCLASS()
class PIOZAGAMELAUNCHER_API UBuildDate : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Build Info")
    static FString GetBuildDate();
};
