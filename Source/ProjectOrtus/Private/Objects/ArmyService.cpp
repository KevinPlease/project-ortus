


#include "Objects/ArmyService.h"

UArmyService* UArmyService::CreateArmyService(const FServiceStruct ServiceStruct)
{
	UArmyService* ArmyService = NewObject<UArmyService>();
	ArmyService->SetServiceStruct(ServiceStruct);
	return ArmyService;
}

void UArmyService::UpdateSubServiceCard(USubServiceCard* SubServiceCard)
{
	FString Title = SubServiceCard->GetTitle();
	const int32 Index = SubServiceCardsList.IndexOfByPredicate([Title](const USubServiceCard* Card)
		{
			return Title == Card->GetTitle();
		});
	delete SubServiceCardsList[Index];
	SubServiceCardsList[Index] = SubServiceCard;
}
