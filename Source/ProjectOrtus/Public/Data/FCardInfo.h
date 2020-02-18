#pragma once

#include "CoreMinimal.h"
#include "DataTableEditor/Private/SRowEditor.h"
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
	CardRow1(""),
	CardRow2(""),
	CardRow3(""),
	CardImgNoText(nullptr),
	ImageTypeProduced(nullptr) {}
	
	/** Override values */
	FCardInfo(const FString CardTitle, const FString CardDescription, 
		const FString CardRow1, const FString CardRow2, const FString CardRow3, 
		const UTexture2D* CardImgNoText, const UTexture2D* ImageTypeProduced)
		:
	CardTitle(CardTitle),
	CardDescription(CardDescription),
	CardRow1(CardRow1),
	CardRow2(CardRow2),
	CardRow3(CardRow3),
	CardImgNoText(CardImgNoText),
	ImageTypeProduced(ImageTypeProduced) {}
	
	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString CardTitle;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString CardDescription;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString CardRow1;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString CardRow2;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString CardRow3;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	const UTexture2D* CardImgNoText;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	const UTexture2D* ImageTypeProduced;
};
