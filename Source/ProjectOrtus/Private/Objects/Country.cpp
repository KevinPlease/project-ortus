


#include "Objects/Country.h"

UCountry* UCountry::CreateCountry(const FCountryStruct CountryStruct)
{
	UCountry* Country = NewObject<UCountry>();
	Country->CountryStruct = CountryStruct;
	return Country;
}

void UCountry::IncreasePopulation(const int32 IncreaseBy)
{
	if (IncreaseBy > 0.0f) CountryStruct.Population += IncreaseBy;
}

void UCountry::DecreasePopulation(const int32 DecreaseBy)
{
	if (DecreaseBy > 0.0f) CountryStruct.Population -= DecreaseBy;
}

void UCountry::IncreaseBudget(const float IncreaseBy)
{
	if (IncreaseBy > 0.0f) CountryStruct.Budget += IncreaseBy;
}

void UCountry::DecreaseBudget(const float DecreaseBy)
{
	if (DecreaseBy > 0.0f) CountryStruct.Budget -= DecreaseBy;
}

void UCountry::IncreaseIncome(const float IncreaseBy)
{
	if (IncreaseBy > 0.0f) CountryStruct.Income += IncreaseBy;
}

void UCountry::DecreaseIncome(const float DecreaseBy)
{
	if (DecreaseBy > 0.0f) CountryStruct.Income -= DecreaseBy;
}

void UCountry::IncreaseRating(const float IncreaseBy)
{
	if (IncreaseBy > 0.0f) CountryStruct.Rating += IncreaseBy;
}

void UCountry::DecreaseRating(const float DecreaseBy)
{
	if (DecreaseBy > 0.0f) CountryStruct.Rating -= DecreaseBy;
}

void UCountry::IncreaseHappiness(const float IncreaseBy)
{
	if (IncreaseBy > 0.0f) CountryStruct.Happiness += IncreaseBy;
}

void UCountry::DecreaseHappiness(const float DecreaseBy)
{
	if (DecreaseBy > 0.0f) CountryStruct.Happiness -= DecreaseBy;
}

void UCountry::UpdateBudget()
{
	IncreaseBudget(GetIncome());
}
