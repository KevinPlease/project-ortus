

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Data/FServiceStruct.h"
#include "SubServiceCard.h"
#include "SubService.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class PROJECTORTUS_API USubService : public UObject
{
	GENERATED_BODY()

public:
	/** Create new Sector Object */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Create SubService"), Category = "SubServices")
	static USubService* CreateService(FServiceStruct ServiceStruct);

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "SubServices")
	FString GetTitle() const;

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "SubServices")
	FString GetDescription() const;

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "SubServices")
	UTexture2D* GetImage() const;

	TArray<USubServiceCard*> GetAllCards() const { return CardsList; }
	
	/** TODO: */
	void SetSubServiceStruct(FServiceStruct Struct) { SubServiceStruct = Struct; }

	/** TODO: */
	void SetCards(TArray<USubServiceCard*> Cards) { CardsList = Cards; }

private:
	/** TODO */
	FServiceStruct SubServiceStruct;

	/** TODO */
	UPROPERTY()
	TArray<USubServiceCard*> CardsList;

};
