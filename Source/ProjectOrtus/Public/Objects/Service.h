

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SubService.h"
#include "Data/FServiceStruct.h"
#include "Service.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class PROJECTORTUS_API UService : public UObject
{
	GENERATED_BODY()

public:
	/** Create new Sector Object */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Create Service"), Category = "Services")
	static UService* CreateService(FServiceStruct ServiceStruct);

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "Services")
	FString GetTitle() const;

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "Services")
	FString GetDescription() const;

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "Services")
	UTexture2D* GetImage() const;

	void SetServiceStruct(FServiceStruct Struct) { ServiceStruct = Struct; }
	
	/** TODO: */
	void SetSubServices(TArray<USubService*> SubServices);

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "Services")
	TArray<USubService*> GetAllSubServices() const { return SubServicesList; }
	
private:
	/** TODO */
	FServiceStruct ServiceStruct;

	/** TODO */
	UPROPERTY(EditDefaultsOnly)
	TArray<USubService*> SubServicesList;

};
