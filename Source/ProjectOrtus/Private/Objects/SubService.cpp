#include "Objects/SubService.h"

USubService* USubService::CreateService(const FServiceStruct Struct)
{
	USubService* SubServicePtr = NewObject<USubService>();
	SubServicePtr->SetSubServiceStruct(Struct);
	return SubServicePtr;
}

// TODO: Move simple getters in .h file.
FString USubService::GetTitle() const
{
	return SubServiceStruct.ServiceTitle;
}

FString USubService::GetDescription() const
{
	return SubServiceStruct.ServiceDescription;
}

UTexture2D* USubService::GetImage() const
{
	return SubServiceStruct.ServiceImg;
}

float USubService::GetAllMaintenanceCosts()
{
	float Costs = 0.0f;
	for (USubServiceCard* Card : CardsList)
	{
		if (Card->GetTotalBuilt() > 0) Costs += Card->GetMaintenanceCost() * Card->GetTotalBuilt();
	}
	return Costs;
}
