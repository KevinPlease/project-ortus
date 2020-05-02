#include "Objects/SubServiceCard.h"

USubServiceCard* USubServiceCard::CreateSubServiceCard(const FCardInfo CardInfo)
{
	USubServiceCard* ServicePtr = NewObject<USubServiceCard>();
	ServicePtr->SetCardStruct(CardInfo);
	return ServicePtr;
}

void USubServiceCard::Build()
{
	SetTotalBuilt(GetTotalBuilt() + 1);
}

void USubServiceCard::Destroy()
{
	SetTotalBuilt(GetTotalBuilt() - 1);
}
