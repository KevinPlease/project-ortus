

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
	
	UFUNCTION(BlueprintPure, Category = "Countries")
	FString GetCountryName() const { return CountryStruct.Name; }
	
	UFUNCTION(BlueprintPure, Category = "Countries")
	int32 GetPopulation() const { return CountryStruct.Population; }
	
	UFUNCTION(BlueprintPure, Category = "Countries")
	float GetBudget() const { return CountryStruct.Budget; }
	
	UFUNCTION(BlueprintPure, Category = "Countries")
	float GetIncome() const { return CountryStruct.Income; }
	
	UFUNCTION(BlueprintPure, Category = "Countries")
	float GetRating() const { return CountryStruct.Rating; }

	UFUNCTION(BlueprintPure, Category = "Countries")
	float GetHappiness() const { return CountryStruct.Happiness; }

	UFUNCTION(BlueprintPure, Category = "Countries")
	UTexture2D* GetIcon() const { return CountryStruct.CountryIcon; }

	UFUNCTION(BlueprintCallable, Category = "Countries")
	void IncreasePopulation(int32 IncreaseBy);

	UFUNCTION(BlueprintCallable, Category = "Countries")
	void DecreasePopulation(int32 DecreaseBy);
	
	UFUNCTION(BlueprintCallable, Category = "Countries")
	void IncreaseBudget(float IncreaseBy);

	UFUNCTION(BlueprintCallable, Category = "Countries")
	bool DecreaseBudget(float DecreaseBy);

	UFUNCTION(BlueprintCallable, Category = "Countries")
	void IncreaseIncome(float IncreaseBy);

	UFUNCTION(BlueprintCallable, Category = "Countries")
	void DecreaseIncome(float DecreaseBy);

	UFUNCTION(BlueprintCallable, Category = "Countries")
	void IncreaseRating(float IncreaseBy);

	UFUNCTION(BlueprintCallable, Category = "Countries")
	void DecreaseRating(float DecreaseBy);

	UFUNCTION(BlueprintCallable, Category = "Countries")
	void IncreaseHappiness(float IncreaseBy);

	UFUNCTION(BlueprintCallable, Category = "Countries")
	void DecreaseHappiness(float DecreaseBy);

	/** Updates the Budget by using the Income as variable */
	UFUNCTION(BlueprintCallable, Category = "Countries")
	void UpdateBudget();
	
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
	UPROPERTY()
	FCountryStruct CountryStruct;
};
