#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/Texture2D.h"
#include "ServiceData.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct PROJECTORTUS_API FServiceData : public FTableRowBase
{
	GENERATED_BODY()

public:
	/** Default values */
	FServiceData() : ServiceTitle(""), ServiceDescription(""), ServiceImg(nullptr) {}

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString ServiceTitle;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString ServiceDescription;

	/** TODO */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	const UTexture2D* ServiceImg;
};
