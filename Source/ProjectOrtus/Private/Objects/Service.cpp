#include "Objects/Service.h"

UService* UService::CreateService(const FServiceStruct ServiceStruct)
{
	UService* Service = NewObject<UService>();
	Service->SetServiceStruct(ServiceStruct);
	return Service;
}

void UService::UpdateSubService(USubService* SubService)
{
	FString Title = SubService->GetTitle();
	const int32 Index = SubServicesList.IndexOfByPredicate([Title](const USubService* SubServiceElement)
		{
			return Title == SubServiceElement->GetTitle();
		});
	delete SubServicesList[Index];
	SubServicesList[Index] = SubService;
}
