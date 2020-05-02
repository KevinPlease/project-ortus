

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Data/FServiceStruct.h"
#include "BasicService.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class PROJECTORTUS_API UBasicService : public UObject
{
	GENERATED_BODY()

public:
	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "Services")
	FString GetTitle() const { return ServiceStruct.ServiceTitle; }

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "Services")
	FString GetDescription() const { return ServiceStruct.ServiceDescription; }

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "Services")
	UTexture2D* GetImage() const { return ServiceStruct.ServiceImg; }

	void SetServiceStruct(FServiceStruct Struct) { ServiceStruct = Struct; }

private:
	/** TODO */
	UPROPERTY()
	FServiceStruct ServiceStruct;
	
};
