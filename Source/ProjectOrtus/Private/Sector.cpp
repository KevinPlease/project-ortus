#include "Sector.h"

USector* USector::CreateSector(const FSectorStruct SectorStruct)
{
	USector* Sector = NewObject<USector>();
	Sector->SetSectorStruct(SectorStruct);
	return Sector;
}

void USector::UpdateService(UService* Service)
{
	FString Title = Service->GetTitle();
	const int32 Index = ServicesList.IndexOfByPredicate([Title](const UService* ServiceElement)
		{
			return Title == ServiceElement->GetTitle();
		});
	delete ServicesList[Index];
	ServicesList[Index] = Service;
}
