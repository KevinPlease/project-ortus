

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Data/FSectorStruct.h"
#include "BasicSector.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class PROJECTORTUS_API UBasicSector : public UObject
{
	GENERATED_BODY()
	
public:
	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "Sectors")
	FString GetTitle() const { return SectorStruct.SectorTitle; }

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "Sectors")
	FString GetDescription() const { return SectorStruct.SectorDescription; }

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "Sectors")
	UTexture2D* GetImage() const { return SectorStruct.SectorImg; }

	/** TODO: */
	void SetSectorStruct(FSectorStruct Struct) { SectorStruct = Struct; }
	
private:
	/** TODO */
	UPROPERTY()
	FSectorStruct SectorStruct;
};
