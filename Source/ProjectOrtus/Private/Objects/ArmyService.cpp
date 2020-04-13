


#include "Objects/ArmyService.h"

UArmyService* UArmyService::CreateArmyService(const FServiceStruct ServiceStruct)
{
	UArmyService* ArmyService = NewObject<UArmyService>();
	ArmyService->SetServiceStruct(ServiceStruct);
	return ArmyService;
}