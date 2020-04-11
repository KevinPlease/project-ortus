#include "Objects/SubServiceCard.h"

USubServiceCard* USubServiceCard::CreateSubServiceCard(const FCardInfo CardInfo)
{
	USubServiceCard* SubServiceCard = NewObject<USubServiceCard>();
	SubServiceCard->SetCardStruct(CardInfo);
	return SubServiceCard;
}