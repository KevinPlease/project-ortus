

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Data/FCardInfo.h"
#include "Data/FServiceStruct.h"
#include "Data/FSectorStruct.h"
#include "Data/FCountryStruct.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DataTableHelper.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTORTUS_API UDataTableHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/** TODO: */
	UFUNCTION(BlueprintCallable, Category = "Data Table Helpers")
	static TArray<FCardInfo> GetCardsInfoFromDataTable(UDataTable* CardsDataTable);

	/** TODO: */
	UFUNCTION(BlueprintCallable, Category = "Data Table Helpers")
	static TArray<FServiceStruct> GetServicesInfoFromDataTable(UDataTable* SectorsDataTable);

	/** TODO: */
	UFUNCTION(BlueprintCallable, Category = "Data Table Helpers")
	static TArray<FSectorStruct> GetSectorsInfoFromDataTable(UDataTable* AllSectorsDataTable);

	/** TODO: */
	UFUNCTION(BlueprintCallable, Category = "Data Table Helpers")
	static TArray<FCountryStruct> GetCountriesInfoFromDataTable(UDataTable* CountriesStatsDataTable);

	/** TODO: */
	UFUNCTION(BlueprintCallable, Category = "Data Table Helpers")
	static TArray<FServiceStruct> GetSubServicesInfoForService(FString ServiceTitle);
	
private:
	static TArray<FTableRowBase> GetRowsFromDataTable(UDataTable* CardsDataTable);
};
