

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Data/FCardInfo.h"
#include "Data/FServiceStruct.h"
#include "Data/FCountryStruct.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Objects/Service.h"
#include "Sector.h"
#include "Objects/ArmyService.h"
#include "Objects/ArmySector.h"
#include "Objects/SubService.h"
#include "Objects/Country.h"
#include "DataTableHelper.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTORTUS_API UDataTableHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/** Creates Country objects -- returns all countries information. */
	UFUNCTION(BlueprintCallable, Category = "Countries")
	static TArray<UCountry*> CreateCountries(UDataTable* CountriesDataTable);
	
	/** Creates Sector objects -- returns all Services, SubServices and Cards for each sector. */
	UFUNCTION(BlueprintCallable, Category = "Sectors")
	static TArray<UBasicSector*> CreateSectors(UDataTable* SectorsDataTable);
	
	/** TODO: */
	UFUNCTION(BlueprintCallable, Category = "SubService Cards")
	static TArray<FCardInfo> GetCardsInfoFromDataTable(UDataTable* CardsDataTable);

	/** TODO: */
	UFUNCTION(BlueprintCallable, Category = "Sectors")
	static TArray<FSectorStruct> GetSectorsInfoFromDataTable(UDataTable* SectorsDataTable);
	
	/** TODO: */
	UFUNCTION(BlueprintCallable, Category = "Services")
	static TArray<FServiceStruct> GetServicesInfoFromDataTable(UDataTable* ServicesDataTable);

	/** TODO: */
	UFUNCTION(BlueprintCallable, Category = "Countries")
	static TArray<FCountryStruct> GetCountriesInfoFromDataTable(UDataTable* CountriesStatsDataTable);

	/** TODO: */
	UFUNCTION(BlueprintCallable, Category = "Services")
	static TArray<FServiceStruct> GetServicesInfoForSector(FString SectorTitle);
	
	/** TODO: */
	UFUNCTION(BlueprintCallable, Category = "SubServices")
	static TArray<FServiceStruct> GetSubServicesInfoForService(FString SectorTitle, FString ServiceTitle);

	/** TODO: */
	UFUNCTION(BlueprintCallable, Category = "SubService Cards")
	static TArray<FCardInfo> GetCardsInfo(FString SectorTitle, FString ServiceTitle, FString SubServiceTitle);
	
private:
	/** TODO: */
	static TArray<FTableRowBase> GetRowsFromDataTable(UDataTable* CardsDataTable);
	
	/** TODO: */
	static TArray<UService*> CreateServices(FString SectorTitle);

	/** Special case of Service with no SUbServices */
	static TArray<UArmyService*> CreateArmyServices(FString SectorTitle);

	/** TODO: */
	static TArray<USubService*> CreateSubServices(FString SectorTitle, FString ServiceTitle);

	/** TODO: */
	static TArray<USubServiceCard*> CreateSubServiceCards(FString SectorTitle, FString ServiceTitle, FString SubServiceTitle);
};
