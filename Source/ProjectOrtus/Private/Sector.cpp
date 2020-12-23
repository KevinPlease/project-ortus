#include "Sector.h"

USector* USector::CreateSector(const FSectorStruct Struct)
{
	USector* SectorRef = NewObject<USector>();
	SectorRef->SetSectorStruct(Struct);
	return SectorRef;
}

float USector::GetAllMaintenanceCosts()
{
	float Costs = 0.0f;
	for (UService* SubService : ServicesList)
	{
		Costs += SubService->GetAllMaintenanceCosts();
	}
	return Costs;
}
