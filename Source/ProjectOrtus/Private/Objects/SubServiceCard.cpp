#include "Objects/SubServiceCard.h"

USubServiceCard* USubServiceCard::CreateSubServiceCard(const FCardInfo CardInfo)
{
	USubServiceCard* SubServiceCard = NewObject<USubServiceCard>();
	SubServiceCard->SetCardStruct(CardInfo);
	return SubServiceCard;
}

void USubServiceCard::Build()
{
	SetTotalBuilt(GetTotalBuilt() + 1);
}

void USubServiceCard::Destroy()
{
	SetTotalBuilt(GetTotalBuilt() - 1);
}
