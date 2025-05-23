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
	TotalBuilt(0),
	ConstructionCost(0.0f),
	MaintenanceCost(0.0f),
	CardMainImg(nullptr) {}
	
	/** Override values */
	FCardInfo(const FString CardTitle, const FString CardDescription,
	    const int32 CardRow1, const float CardRow2, const float CardRow3,
		UTexture2D* NewCardMainImg)
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
	mutable int32 TotalBuilt;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	mutable float ConstructionCost;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	mutable float MaintenanceCost;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* CardMainImg;
};
