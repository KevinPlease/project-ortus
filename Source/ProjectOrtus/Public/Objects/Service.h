

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SubService.h"
#include "Data/FServiceStruct.h"
#include "BasicService.h"
#include "Service.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class PROJECTORTUS_API UService : public UBasicService
{
	GENERATED_BODY()

public:
	/** Create new Service Object */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Create Service"), Category = "Services")
	static UService* CreateService(FServiceStruct Struct);
	
	/** TODO: */
	void SetSubServices(TArray<USubService*> SubServices) { SubServicesList = SubServices; }

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "Services")
	TArray<USubService*> GetAllSubServices() const { return SubServicesList; }

private:
	/** TODO */
	UPROPERTY()
	TArray<USubService*> SubServicesList;

};
