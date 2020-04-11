#include "Objects/Service.h"

UService* UService::CreateService(const FServiceStruct ServiceStruct)
{
	UService* Service = NewObject<UService>();
	Service->SetServiceStruct(ServiceStruct);
	return Service;
}

// TODO: Move simple getters in .h file.
FString UService::GetTitle() const
{
	return ServiceStruct.ServiceTitle;
}

FString UService::GetDescription() const
{
	return ServiceStruct.ServiceDescription;
}

UTexture2D* UService::GetImage() const
{
	return ServiceStruct.ServiceImg;
}

void UService::SetSubServices(TArray<USubService*> SubServices)
{
	SubServicesList = SubServices;
}
