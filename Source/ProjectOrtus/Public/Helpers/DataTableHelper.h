

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Data/FCardInfo.h"
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
	static const TArray<UFCardInfo> GetCardInfosFromDataTable(UDataTable* DataTable);
};
