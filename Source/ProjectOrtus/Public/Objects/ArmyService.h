

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Data/FServiceStruct.h"
#include "SubServiceCard.h"
#include "BasicService.h"
#include "ArmyService.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class PROJECTORTUS_API UArmyService : public UBasicService
{
	GENERATED_BODY()
	
public:
	/** Create new Service Object */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Create Army Service"), Category = "Services")
	static UArmyService* CreateArmyService(FServiceStruct Struct);

	/** TODO: */
	void SetSubServiceCards(TArray<USubServiceCard*> SubServiceCards) { SubServiceCardsList = SubServiceCards; }

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "Services")
	TArray<USubServiceCard*> GetAllSubServiceCards() const { return SubServiceCardsList; }

private:

	/** TODO */
	UPROPERTY()
	TArray<USubServiceCard*> SubServiceCardsList;

};