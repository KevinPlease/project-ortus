

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Data/FCardInfo.h"
#include "SubServiceCard.generated.h"

/** */
UCLASS(BlueprintType)
class PROJECTORTUS_API USubServiceCard : public UObject
{
	GENERATED_BODY()

public:
	/** Create new Card Object */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Create SubService Card"), Category = "SubServices")
	static USubServiceCard* CreateSubServiceCard(FCardInfo CardStruct);

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "SubService Card")
	FString GetTitle() const { return CardStruct.CardTitle; }

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "SubService Card")
	FString GetDescription() const { return CardStruct.CardDescription; }

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "SubService Card")
	int32 GetTotalBuilt() const { return CardStruct.TotalBuilt; }

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "SubService Card")
	float GetConstructionCost() const { return CardStruct.ConstructionCost; }

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "SubService Card")
	float GetMaintenanceCost() const { return CardStruct.MaintenanceCost; }

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "SubService Card")
	UTexture2D* GetMainImg() const { return CardStruct.CardMainImg; }

	void SetCardStruct(const FCardInfo Struct) { CardStruct = Struct; }
	
private:
	FCardInfo CardStruct;
};
