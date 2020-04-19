


#include "Objects/ArmySector.h"

UArmySector* UArmySector::CreateArmySector(const FSectorStruct SectorStruct)
{
	UArmySector* Sector = NewObject<UArmySector>();
	Sector->SetSectorStruct(SectorStruct);
	return Sector;
}

void UArmySector::UpdateService(UArmyService* Service)
{
	FString Title = Service->GetTitle();
	const int32 Index = ServicesList.IndexOfByPredicate([Title](const UArmyService* ServiceElement)
		{
			return Title == ServiceElement->GetTitle();
		});
	delete ServicesList[Index];
	ServicesList[Index] = Service;
}
