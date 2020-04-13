#include "Sector.h"

USector* USector::CreateSector(const FSectorStruct SectorStruct)
{
	USector* Sector = NewObject<USector>();
	Sector->SetSectorStruct(SectorStruct);
	return Sector;
}