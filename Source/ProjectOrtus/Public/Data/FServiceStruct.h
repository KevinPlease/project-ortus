#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/Texture2D.h"
#include "FServiceStruct.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct PROJECTORTUS_API FServiceStruct : public FTableRowBase
{
	GENERATED_BODY()

public:
	/** Default values */
	FServiceStruct() : ServiceTitle(""), ServiceDescription(""), ServiceImg(nullptr) {}
	
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
