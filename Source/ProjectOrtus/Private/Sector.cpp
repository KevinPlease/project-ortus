#include "Sector.h"

USector* USector::CreateSector(const FSectorStruct SectorStruct)
{
	USector* Sector = NewObject<USector>();
	Sector->SetSectorStruct(SectorStruct);
	return Sector;
}

FString USector::GetTitle() const
{
	return SectorStruct.SectorTitle;
}

FString USector::GetDescription() const
{
	return SectorStruct.SectorDescription;
}

UTexture2D* USector::GetImage() const
{
	return SectorStruct.SectorImg;
}

void USector::SetServices(TArray<UService*> Services)
{
	ServicesList = Services;
}
