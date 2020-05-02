


#include "Objects/ArmySector.h"

UArmySector* UArmySector::CreateArmySector(const FSectorStruct Struct)
{
	UArmySector* SectorRef = NewObject<UArmySector>();
	SectorRef->SetSectorStruct(Struct);
	return SectorRef;
}