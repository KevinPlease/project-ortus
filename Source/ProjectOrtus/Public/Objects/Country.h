

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Data/FCountryStruct.h"
#include "Country.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class PROJECTORTUS_API UCountry : public UObject
{
	GENERATED_BODY()

public:
	/** Create new Country Object */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Create Country"), Category = "Countries")
	static UCountry* CreateCountry(FCountryStruct CountryStruct);
	
	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "Countries")
	FString GetCountryName() const { return CountryStruct.Name; }

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "Countries")
	int32 GetPopulation() const { return CountryStruct.Population; }

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "Countries")
	float GetBudget() const { return CountryStruct.Budget; }

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "Countries")
	float GetIncome() const { return CountryStruct.Income; }

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "Countries")
	float GetRating() const { return CountryStruct.Rating; }

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "Countries")
	float GetHappiness() const { return CountryStruct.Happiness; }

	/** TODO: */
	UFUNCTION(BlueprintPure, Category = "Countries")
	UTexture2D* GetIcon() const { return CountryStruct.CountryIcon; }

	/** TODO: */
	UFUNCTION(BlueprintCallable, Category = "Countries")
	void IncreasePopulation(int32 IncreaseBy);

	/** TODO: */
	UFUNCTION(BlueprintCallable, Category = "Countries")
	void DecreasePopulation(int32 DecreaseBy);
	
	/** TODO: */
	UFUNCTION(BlueprintCallable, Category = "Countries")
	void IncreaseBudget(float IncreaseBy);

	/** TODO: */
	UFUNCTION(BlueprintCallable, Category = "Countries")
	void DecreaseBudget(float DecreaseBy);

	/** TODO: */
	UFUNCTION(BlueprintCallable, Category = "Countries")
	void IncreaseIncome(float IncreaseBy);

	/** TODO: */
	UFUNCTION(BlueprintCallable, Category = "Countries")
	void DecreaseIncome(float DecreaseBy);

	/** TODO: */
	UFUNCTION(BlueprintCallable, Category = "Countries")
	void IncreaseRating(float IncreaseBy);

	/** TODO: */
	UFUNCTION(BlueprintCallable, Category = "Countries")
	void DecreaseRating(float DecreaseBy);

	/** TODO: */
	UFUNCTION(BlueprintCallable, Category = "Countries")
	void IncreaseHappiness(float IncreaseBy);

	/** TODO: */
	UFUNCTION(BlueprintCallable, Category = "Countries")
	void DecreaseHappiness(float DecreaseBy);
	
	/*
		void SetCountryStruct(const FCountryStruct Struct) { CountryStruct = Struct; }

		void SetPopulation(const int32 NewPopulation) { CountryStruct.Population = NewPopulation; }

		void SetBudget(const float NewBudget) { CountryStruct.Budget = NewBudget; }

		void SetIncome(const float NewIncome) { CountryStruct.Income = NewIncome; }

		void SetRating(const float NewRating) { CountryStruct.Rating = NewRating; }

		void SetHappiness(const float NewHappiness) { CountryStruct.Happiness = NewHappiness; }
	 */

	
	
private:
	/** TODO */
	FCountryStruct CountryStruct;
};
