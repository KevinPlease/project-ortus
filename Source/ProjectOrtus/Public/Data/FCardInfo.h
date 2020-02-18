#pragma once

#include "CoreMinimal.h"
#include "DataTableEditor/Private/SRowEditor.h"
#include "FCardInfo.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct PROJECTORTUS_API UFCardInfo : public FTableRowBase
{
	GENERATED_BODY()

public:
	/** Override values */
	UFCardInfo(const FText CardTitle, 
		const FText CardDescription, 
		const FText CardRow1, 
		const FText CardRow2, 
		const FText CardRow3, 
		const UTexture2D* CardImgNoText, 
		const UTexture2D* ImageTypeProduced)
		:
	CardTitle(CardTitle),
	CardDescription(CardDescription),
	CardRow1(CardRow1), CardRow2(CardRow2), CardRow3(CardRow3),
	CardImgNoText(CardImgNoText), ImageTypeProduced(ImageTypeProduced) {}
	
	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText CardTitle;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText CardDescription;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText CardRow1;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText CardRow2;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText CardRow3;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	const UTexture2D* CardImgNoText;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	const UTexture2D* ImageTypeProduced;
};
