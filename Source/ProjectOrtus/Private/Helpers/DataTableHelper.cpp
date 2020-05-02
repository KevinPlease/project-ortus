#include "Helpers/DataTableHelper.h"

TArray<FTableRowBase> UDataTableHelper::GetRowsFromDataTable(UDataTable* CardsDataTable)
{
	TArray<FTableRowBase> CardInfos;
	if (!IsValid(CardsDataTable)) return CardInfos;
	
	
	static const FString ContextString(TEXT("Struct Context"));
	CardsDataTable->ForeachRow<FTableRowBase>(ContextString, [&](const FName Key, const FTableRowBase CardInfo)
	{
		CardInfos.Add(CardInfo);
	});
	return CardInfos;
}

TArray<UService*> UDataTableHelper::CreateServices(const FString SectorTitle)
{
	TArray<UService*> Services;
	for (const FServiceStruct ServiceStruct : GetServicesInfoForSector(SectorTitle))
	{
		UService* Service = UService::CreateService(ServiceStruct);
		Service->SetSubServices(CreateSubServices(SectorTitle, ServiceStruct.ServiceTitle));
		Services.Add(Service);
	}
	return Services;
}

TArray<UArmyService*> UDataTableHelper::CreateArmyServices(const FString SectorTitle)
{
	TArray<UArmyService*> Services;
	for (const FServiceStruct ServiceStruct : GetServicesInfoForSector(SectorTitle))
	{
		UArmyService* ArmyService = UArmyService::CreateArmyService(ServiceStruct);
		ArmyService->SetSubServiceCards(CreateSubServiceCards(SectorTitle, ServiceStruct.ServiceTitle, ServiceStruct.ServiceTitle));
		Services.Add(ArmyService);
	}
	return Services;
}

TArray<USubService*> UDataTableHelper::CreateSubServices(const FString SectorTitle, const FString ServiceTitle)
{
	TArray<USubService*> SubServices;
	for (const FServiceStruct SubServiceStruct : GetSubServicesInfoForService(SectorTitle, ServiceTitle))
	{
		USubService* SubService = USubService::CreateService(SubServiceStruct);
		SubService->SetCards(CreateSubServiceCards(SectorTitle, ServiceTitle, SubServiceStruct.ServiceTitle));
		SubServices.Add(SubService);
	}
	return SubServices;
}

TArray<USubServiceCard*> UDataTableHelper::CreateSubServiceCards(const FString SectorTitle, const FString ServiceTitle, const FString SubServiceTitle)
{
	TArray<USubServiceCard*> SubServiceCards;
	for (const FCardInfo CardStruct : GetCardsInfo(SectorTitle, ServiceTitle, SubServiceTitle))
	{
		SubServiceCards.Add(USubServiceCard::CreateSubServiceCard(CardStruct));
	}
	return SubServiceCards;
}

TArray<UCountry*> UDataTableHelper::CreateCountries(UDataTable* CountriesDataTable)
{
	TArray<UCountry*> Countries;
	for (const FCountryStruct CountryStruct: GetCountriesInfoFromDataTable(CountriesDataTable))
	{
		Countries.Add(UCountry::CreateCountry(CountryStruct));
	}
	return Countries;
}

TArray<UBasicSector*> UDataTableHelper::CreateSectors(UDataTable* SectorsDataTable)
{
	TArray<UBasicSector*> Sectors;
	for (const FSectorStruct SectorStruct : GetSectorsInfoFromDataTable(SectorsDataTable))
	{
		if (SectorStruct.SectorTitle == "Army")
		{
			UArmySector* Sector = UArmySector::CreateArmySector(SectorStruct);
			Sector->SetServices(CreateArmyServices(SectorStruct.SectorTitle));
			Sectors.Add(Sector);
		} else
		{
			USector* Sector = USector::CreateSector(SectorStruct);
			Sector->SetServices(CreateServices(SectorStruct.SectorTitle));
			Sectors.Add(Sector);
		}
	}
	return Sectors;
}

TArray<FCardInfo> UDataTableHelper::GetCardsInfoFromDataTable(UDataTable* CardsDataTable)
{
	TArray<FCardInfo> CardsInfo;
	if (!IsValid(CardsDataTable)) return CardsInfo;

	static const FString ContextString(TEXT("Struct Card Context"));
	CardsDataTable->ForeachRow<FCardInfo>(ContextString, [&](const FName Key, const FCardInfo CardInfo)
	{
		CardsInfo.Add(CardInfo);
	});
	return CardsInfo;
}

TArray<FSectorStruct> UDataTableHelper::GetSectorsInfoFromDataTable(UDataTable* SectorsDataTable)
{
	TArray<FSectorStruct> SectorsStructs;
	if (!IsValid(SectorsDataTable)) return SectorsStructs;

	static const FString ContextString(TEXT("Struct Sector Context"));
	SectorsDataTable->ForeachRow<FSectorStruct>(ContextString, [&](const FName Key, const FSectorStruct SectorInfo)
		{
			SectorsStructs.Add(SectorInfo);
		});
	return SectorsStructs;
}

TArray<FServiceStruct> UDataTableHelper::GetServicesInfoFromDataTable(UDataTable* ServicesDataTable)
{
	TArray<FServiceStruct> ServiceStructs;
	if (!IsValid(ServicesDataTable)) return ServiceStructs;

	static const FString ContextString(TEXT("Struct Service Context"));
	ServicesDataTable->ForeachRow<FServiceStruct>(ContextString, [&](const FName Key, const FServiceStruct ServiceInfo)
	{
		ServiceStructs.Add(ServiceInfo);
	});
	return ServiceStructs;
}

TArray<FCountryStruct> UDataTableHelper::GetCountriesInfoFromDataTable(UDataTable* CountriesStatsDataTable)
{
	TArray<FCountryStruct> CountryStructs;
	if (!IsValid(CountriesStatsDataTable)) return CountryStructs;

	static const FString ContextString(TEXT("Struct Country Context"));
	CountriesStatsDataTable->ForeachRow<FCountryStruct>(ContextString, [&](const FName Key, const FCountryStruct CountryInfo)
		{
			CountryStructs.Add(CountryInfo);
		});
	return CountryStructs;
}

TArray<FServiceStruct> UDataTableHelper::GetSubServicesInfoForService(FString SectorTitle, FString ServiceTitle)
{
	TArray<FServiceStruct> ServiceStructs;
	SectorTitle.RemoveSpacesInline();
	ServiceTitle.RemoveSpacesInline();
	const FString FileName = "DT_ServiceInfo_" + ServiceTitle;
	const FString Path = "DataTable'/Game/Data/DataTables/" + SectorTitle + "/" + ServiceTitle + "/" + FileName + "." + FileName + "'";
	UDataTable* ServiceDataTable = LoadObject<UDataTable>(nullptr, *Path);

	if (ServiceDataTable != nullptr)
	{
		ServiceStructs = GetServicesInfoFromDataTable(ServiceDataTable);
	}
	return ServiceStructs;
}

TArray<FServiceStruct> UDataTableHelper::GetServicesInfoForSector(FString SectorTitle)
{
	TArray<FServiceStruct> ServiceStructs;
	SectorTitle.RemoveSpacesInline();
	const FString FileName = "DT_" + SectorTitle + "_Services";
	const FString Path = "DataTable'/Game/Data/DataTables/" + SectorTitle  + "/" + FileName + "." + FileName + "'";
	UDataTable* ServiceDataTable = LoadObject<UDataTable>(nullptr, *Path);

	if (ServiceDataTable != nullptr)
	{
		ServiceStructs = GetServicesInfoFromDataTable(ServiceDataTable);
	}
	return ServiceStructs;
}

TArray<FCardInfo> UDataTableHelper::GetCardsInfo(FString SectorTitle, FString ServiceTitle, FString SubServiceTitle)
{
	TArray<FCardInfo> CardStructs;
	SectorTitle.RemoveSpacesInline();
	ServiceTitle.RemoveSpacesInline();
	SubServiceTitle.RemoveSpacesInline();
	const FString FileName = "DT_CardsInfo_" + SubServiceTitle;
	FString Path = "DataTable'/Game/Data/DataTables/";
	Path += SectorTitle + "/" + ServiceTitle + "/" + FileName + "." + FileName + "'";
	UDataTable* CardsDataTable = LoadObject<UDataTable>(nullptr, *Path);

	if (CardsDataTable != nullptr)
	{
		CardStructs = GetCardsInfoFromDataTable(CardsDataTable);
	}
	return CardStructs;
}
