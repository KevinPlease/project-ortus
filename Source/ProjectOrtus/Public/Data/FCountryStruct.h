#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FCountryStruct.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct PROJECTORTUS_API FCountryStruct : public FTableRowBase
{
	GENERATED_BODY()
	
public:
	/** Default values */
	FCountryStruct() : Name(""), Population(0), Budget(0.0f), Income(0.0f), Happiness(0.0f) {}

	/** Override values */
	FCountryStruct(const FString NewName, const int64 NewPopulation, const float NewBudget, const float NewIncome, const float NewHappiness)
	:
	Name(NewName),
	Population(NewPopulation),
	Budget(NewBudget),
	Income(NewIncome),
	Happiness(NewHappiness) {}

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;
	
	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 Population;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Budget;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Income;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Happiness;
};
