


#include "Objects/ArmyService.h"

UArmyService* UArmyService::CreateArmyService(const FServiceStruct Struct)
{
	UArmyService* ServicePtr = NewObject<UArmyService>();
	ServicePtr->SetServiceStruct(Struct);
	return ServicePtr;
}