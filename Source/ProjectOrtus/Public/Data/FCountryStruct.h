#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/Texture2D.h"
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
	FCountryStruct() : Name(""), Population(0), Budget(0.0f), Income(0.0f), Rating(0.0f), Happiness(0.0f), CountryIcon(nullptr) {}

	/** Override values */
	FCountryStruct(const FString NewName, const int32 NewPopulation, const float NewBudget, const float NewIncome, const float NewRating, const float NewHappiness, UTexture2D* NewCountryIcon)
	:
	Name(NewName),
	Population(NewPopulation),
	Budget(NewBudget),
	Income(NewIncome),
	Rating(NewRating),
	Happiness(NewHappiness),
	CountryIcon(NewCountryIcon) {}

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;
	
	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Population;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Budget;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Income;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Rating;
	
	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Happiness;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* CountryIcon;
};
