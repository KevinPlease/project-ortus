#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/Texture2D.h"
#include "FIndustryStruct.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct PROJECTORTUS_API FIndustryStruct : public FTableRowBase
{
	GENERATED_BODY()

public:
	/** Default values */
	FIndustryStruct() : IndustryTitle(""), IndustryDescription(""), IndustryImg(nullptr) {}
	
	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString IndustryTitle;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString IndustryDescription;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	const UTexture2D* IndustryImg;
};
