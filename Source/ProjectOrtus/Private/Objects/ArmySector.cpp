


#include "Objects/ArmySector.h"

UArmySector* UArmySector::CreateArmySector(const FSectorStruct Struct)
{
	UArmySector* SectorRef = NewObject<UArmySector>();
	SectorRef->SetSectorStruct(Struct);
	return SectorRef;
}

float UArmySector::GetAllMaintenanceCosts()
{
	float Costs = 0.0f;
	for (UArmyService* Service : ServicesList)
	{
		Costs += Service->GetAllMaintenanceCosts();
	}
	return Costs;
}
