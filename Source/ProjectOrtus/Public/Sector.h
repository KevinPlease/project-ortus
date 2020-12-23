

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Data/FSectorStruct.h"
#include "Objects/BasicSector.h"
#include "Objects/Service.h"
#include "Sector.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class PROJECTORTUS_API USector : public UBasicSector
{
	GENERATED_BODY()

public:
	/** Create new Sector Object */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Create Sector"), Category = "Sectors")
	static USector* CreateSector(FSectorStruct Struct);

	/** TODO: */
	void SetServices(TArray<UService*> Services) { ServicesList = Services; }

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "Sectors")
	TArray<UService*> GetAllServices() const { return ServicesList;	}

	/** TODO: */
	float GetAllMaintenanceCosts() override;
	
private:
	/** TODO */
	UPROPERTY()
	TArray<UService*> ServicesList;
};
