


#include "Objects/ArmyService.h"

UArmyService* UArmyService::CreateArmyService(const FServiceStruct Struct)
{
	UArmyService* ServicePtr = NewObject<UArmyService>();
	ServicePtr->SetServiceStruct(Struct);
	return ServicePtr;
}

float UArmyService::GetAllMaintenanceCosts()
{
	float Costs = 0.0f;
	for (USubServiceCard* Card : SubServiceCardsList)
	{
		if (Card->GetTotalBuilt() > 0) Costs += Card->GetMaintenanceCost() * Card->GetTotalBuilt();
	}
	return Costs;
}
