#pragma once

#include "CoreMinimal.h"
#include "DataTableEditor/Private/SRowEditor.h"
#include "FSectorStruct.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct PROJECTORTUS_API FSectorStruct : public FTableRowBase
{
	GENERATED_BODY()

public:
	/** Default values */
	FSectorStruct() : SectorTitle(""), SectorDescription(""), SectorImg(nullptr) {}

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString SectorTitle;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString SectorDescription;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	const UTexture2D* SectorImg;
};