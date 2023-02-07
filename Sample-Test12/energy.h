#pragma once
#include <iostream>
#include <string>

using namespace std;

class EnergyDrink
{
private:
	string Brand;
	string Taste, Name;
	float EnergyValue, —affeine, Taurine, Price, Volume;

public:
	EnergyDrink();
	EnergyDrink(const string& new_Brand, const string& new_Name, const string& new_Taste, float new_collories, float new_Caf_mgml, float new_Tau_mgml, float new_rub, float new_ml);
	void SetAll(const string& new_Brand, const string& new_Name, const string& new_Taste, float new_collories, float new_Caf_mgml, float new_Tau_mgml, float new_rub, float new_ml);

	string GetBrand() const;
	string GetName() const;
	string GetTaste() const;
	float GetEnergyValue() const;
	float Get—affeine() const;
	float GetTaurine() const;
	float GetPrice() const;
	float GetVolume() const;

	void SetBrand(const string& new_Brand);
	void SetName(const string& new_Name);
	void SetTaste(const string& new_Taste);
	void SetEnergyValue(float new_collories);
	void Set—affeine(float new_mgml);
	void SetTaurine(float new_mgml);
	void SetPrice(float new_rub);
	void SetVolume(float new_ml);

	string AllInformation() const;
};
