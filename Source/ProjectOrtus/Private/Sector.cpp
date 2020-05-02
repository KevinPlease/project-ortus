#include "Sector.h"

USector* USector::CreateSector(const FSectorStruct Struct)
{
	USector* SectorRef = NewObject<USector>();
	SectorRef->SetSectorStruct(Struct);
	return SectorRef;
}