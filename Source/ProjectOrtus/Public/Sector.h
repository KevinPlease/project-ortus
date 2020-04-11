

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Data/FSectorStruct.h"
#include "Objects/Service.h"
#include "Sector.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class PROJECTORTUS_API USector : public UObject
{
	GENERATED_BODY()

public:
	/** Create new Sector Object */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Create Sector"), Category = "Sectors")
	static USector* CreateSector(FSectorStruct SectorStruct);

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "Sectors")
	FString GetTitle() const;

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "Sectors")
	FString GetDescription() const;

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "Sectors")
	UTexture2D* GetImage() const;

	/** TODO: */
	void SetSectorStruct(FSectorStruct Struct) { SectorStruct = Struct; }
	
	/** TODO: */
	void SetServices(TArray<UService*> Services);

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "Sectors")
	TArray<UService*> GetAllServices() const { return ServicesList; }
	
private:
	/** TODO */
	FSectorStruct SectorStruct;

	/** TODO */
	UPROPERTY()
	TArray<UService*> ServicesList;
};
