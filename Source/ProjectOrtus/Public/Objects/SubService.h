

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
	static USubService* CreateService(FServiceStruct Struct);

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "SubServices")
	FString GetTitle() const;

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "SubServices")
	FString GetDescription() const;

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "SubServices")
	UTexture2D* GetImage() const;

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "SubServices")
	TArray<USubServiceCard*> GetAllCards() const { return CardsList; }
	
	/** TODO: */
	void SetSubServiceStruct(FServiceStruct Struct) { SubServiceStruct = Struct; }

	/** TODO: */
	void SetCards(TArray<USubServiceCard*> Cards) { CardsList = Cards; }

private:
	/** TODO */
	UPROPERTY()
	FServiceStruct SubServiceStruct;

	/** TODO */
	UPROPERTY()
	TArray<USubServiceCard*> CardsList;

};
