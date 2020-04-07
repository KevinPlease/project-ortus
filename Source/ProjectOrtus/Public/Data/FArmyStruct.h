

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/Texture2D.h"
#include "FArmyStruct.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct PROJECTORTUS_API FArmyStruct : public FTableRowBase
{
	GENERATED_BODY()

public:
	/** Default values */
	FArmyStruct()
		:
		Rank(""),
		RankDescription(""),
		Victories(0),
		Losses(0),
		Draws(0),
		RankImg(nullptr) {}

	/** Override values */
	FArmyStruct(const FString NewRank, const FString NewDescription,
		const int32 NewVictories, const int32 NewLosses, const int32 NewDraws,
		const UTexture2D* NewRankImg)
		:
		Rank(NewRank),
		RankDescription(NewDescription),
		Victories(NewVictories),
		Losses(NewLosses),
		Draws(NewDraws),
		RankImg(NewRankImg) {}

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Rank;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RankDescription;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Victories;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Losses;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Draws;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	const UTexture2D* RankImg;
	
};
