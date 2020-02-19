

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Data/FCardInfo.h"
#include "Data/FIndustryStruct.h"
#include "Data/FSectorStruct.h"
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
	static TArray<FIndustryStruct> GetIndustriesInfoFromDataTable(UDataTable* SectorsDataTable);

	/** TODO: */
	UFUNCTION(BlueprintCallable, Category = "Data Table Helpers")
	static TArray<FSectorStruct> GetSectorsInfoFromDataTable(UDataTable* AllSectorsDataTable);

private:
	static TArray<FTableRowBase> GetRowsFromDataTable(UDataTable* CardsDataTable);
};
