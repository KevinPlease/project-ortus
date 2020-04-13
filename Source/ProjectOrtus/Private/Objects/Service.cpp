#include "Objects/Service.h"

UService* UService::CreateService(const FServiceStruct ServiceStruct)
{
	UService* Service = NewObject<UService>();
	Service->SetServiceStruct(ServiceStruct);
	return Service;
}