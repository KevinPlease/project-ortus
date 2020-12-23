#include "Objects/Service.h"

UService* UService::CreateService(const FServiceStruct Struct)
{
	UService* ServicePtr = NewObject<UService>();
	ServicePtr->SetServiceStruct(Struct);
	return ServicePtr;
}

float UService::GetAllMaintenanceCosts()
{
	float Costs = 0.0f;
	for (USubService* SubService : SubServicesList)
	{
		Costs += SubService->GetAllMaintenanceCosts();
	}
	return Costs;
}
