#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/Texture2D.h"
#include "FCardInfo.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct PROJECTORTUS_API FCardInfo : public FTableRowBase
{
	GENERATED_BODY()

public:
	/** Default values */
	FCardInfo()
		:
	CardTitle(""),
	CardDescription(""),
	TotalBuilt(""),
	ConstructionCost(""),
	MaintenanceCost(""),
	CardMainImg(nullptr) {}
	
	/** Override values */
	FCardInfo(const FString CardTitle, const FString CardDescription, 
		const FString CardRow1, const FString CardRow2, const FString CardRow3, 
		const UTexture2D* NewCardMainImg)
		:
	CardTitle(CardTitle),
	CardDescription(CardDescription),
	TotalBuilt(CardRow1),
	ConstructionCost(CardRow2),
	MaintenanceCost(CardRow3),
	CardMainImg(NewCardMainImg) {}
	
	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CardTitle;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CardDescription;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TotalBuilt;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ConstructionCost;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MaintenanceCost;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	const UTexture2D* CardMainImg;
};
