


#include "Objects/ArmySector.h"

UArmySector* UArmySector::CreateArmySector(const FSectorStruct SectorStruct)
{
	UArmySector* Sector = NewObject<UArmySector>();
	Sector->SetSectorStruct(SectorStruct);
	return Sector;
}