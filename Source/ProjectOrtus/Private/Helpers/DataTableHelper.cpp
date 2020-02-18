


#include "Helpers/DataTableHelper.h"

static TArray<UFCardInfo> GetCardInfoForSector(UDataTable* DataTable)
{
	TArray<UFCardInfo> CardInfos = TArray<UFCardInfo>();
	
	if (DataTable->GetRowStructName() != "UFCardInfo") return CardInfos;
	
	static const FString ContextString(TEXT("Struct CardInfo Context"));
	DataTable->ForeachRow<UFCardInfo>(ContextString, [&](const FName Key, const UFCardInfo CardInfo)
	{
		CardInfos.Add(CardInfo);
	});

	return CardInfos;
}