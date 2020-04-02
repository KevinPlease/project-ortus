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

TArray<FServiceStruct> UDataTableHelper::GetServicesInfoFromDataTable(UDataTable* SectorsDataTable)
{
	TArray<FServiceStruct> ServiceStructs;
	if (!IsValid(SectorsDataTable)) return ServiceStructs;

	static const FString ContextString(TEXT("Struct Service Context"));
	SectorsDataTable->ForeachRow<FServiceStruct>(ContextString, [&](const FName Key, const FServiceStruct ServiceInfo)
	{
		ServiceStructs.Add(ServiceInfo);
	});
	return ServiceStructs;
}

TArray<FSectorStruct> UDataTableHelper::GetSectorsInfoFromDataTable(UDataTable* AllSectorsDataTable)
{
	TArray<FSectorStruct> SectorStructs;
	if (!IsValid(AllSectorsDataTable)) return SectorStructs;

	static const FString ContextString(TEXT("Struct Sector Context"));
	AllSectorsDataTable->ForeachRow<FSectorStruct>(ContextString, [&](const FName Key, const FSectorStruct SectorInfo)
	{
		SectorStructs.Add(SectorInfo);
	});
	return SectorStructs;
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
	const FString Path = "DataTable'/Game/Data/DataTables/" + SectorTitle  + "/" + ServiceTitle + "/" + FileName + "." + FileName + "'";
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
	const FString Path = "DataTable'/Game/Data/DataTables/" + SectorTitle + "/" + ServiceTitle + "/" + FileName + "." + FileName + "'";
	UDataTable* CardsDataTable = LoadObject<UDataTable>(nullptr, *Path);

	if (CardsDataTable != nullptr)
	{
		CardStructs = GetCardsInfoFromDataTable(CardsDataTable);
	}
	return CardStructs;
}
