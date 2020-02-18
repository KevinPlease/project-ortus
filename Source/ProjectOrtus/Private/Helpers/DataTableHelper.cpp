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
	TArray<FCardInfo> CardInfos;
	if (!IsValid(CardsDataTable)) return CardInfos;
	
	if (CardsDataTable->GetRowStructName() != "FCardInfo") return CardInfos;

	static const FString ContextString(TEXT("Struct CardInfo Context"));
	CardsDataTable->ForeachRow<FCardInfo>(ContextString, [&](const FName Key, const FCardInfo CardInfo)
		{
			CardInfos.Add(CardInfo);
		});
	return CardInfos;
}

TArray<FIndustryStruct> UDataTableHelper::GetSectorsInfoFromDataTable(UDataTable* SectorsDataTable)
{
	TArray<FIndustryStruct> CardInfos;
	if (!IsValid(SectorsDataTable)) return CardInfos;
	
	if (SectorsDataTable->GetRowStructName() != "FSectorInfo") return CardInfos;

	static const FString ContextString(TEXT("Struct SectorInfo Context"));
	SectorsDataTable->ForeachRow<FIndustryStruct>(ContextString, [&](const FName Key, const FIndustryStruct SectorInfo)
		{
			CardInfos.Add(SectorInfo);
		});
	return CardInfos;
}
