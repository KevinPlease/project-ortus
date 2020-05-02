

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Data/FSectorStruct.h"
#include "ArmyService.h"
#include "BasicSector.h"
#include "ArmySector.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class PROJECTORTUS_API UArmySector : public UBasicSector
{
	GENERATED_BODY()
	
public:
	/** Create new Army Sector Object */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Create Army Sector"), Category = "Sectors")
	static UArmySector* CreateArmySector(FSectorStruct Struct);

	/** TODO: */
	void SetServices(TArray<UArmyService*> Services) { ServicesList = Services; }

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "Sectors")
	TArray<UArmyService*> GetAllServices() const { return ServicesList; }

private:

	/** TODO */
	UPROPERTY()
	TArray<UArmyService*> ServicesList;
};
