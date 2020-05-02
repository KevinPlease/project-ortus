#include "Objects/Service.h"

UService* UService::CreateService(const FServiceStruct Struct)
{
	UService* ServicePtr = NewObject<UService>();
	ServicePtr->SetServiceStruct(Struct);
	return ServicePtr;
}