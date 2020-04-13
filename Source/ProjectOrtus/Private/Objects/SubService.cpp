#include "Objects/SubService.h"

USubService* USubService::CreateService(const FServiceStruct ServiceStruct)
{
	USubService* SubService = NewObject<USubService>();
	SubService->SetSubServiceStruct(ServiceStruct);
	return SubService;
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

void USubService::UpdateCard(USubServiceCard* SubServiceCard)
{
	FString Title = SubServiceCard->GetTitle();
	const int32 Index = CardsList.IndexOfByPredicate([Title](const USubServiceCard* Card)
		{
			return Title == Card->GetTitle();
		});
	delete CardsList[Index];
	CardsList[Index] = SubServiceCard;
}
