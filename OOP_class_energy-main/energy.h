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
	EnergyDrink(string Brand, string Name, string Taste, float collories, float Caf_mgml, float Tau_mgml, float rub, float ml);

	string GetBrand() const;
	string GetName() const;
	string GetTaste() const;
	float GetEnergyValue() const;
	float Get—affeine() const;
	float GetTaurine() const;
	float GetPrice() const;
	float GetVolume() const;

	void SetBrand(string Brand);
	void SetName(string Name);
	void SetTaste(string Taste);
	void SetEnergyValue(float collories);
	void Set—affeine(float mgml);
	void SetTaurine(float mgml);
	void SetPrice(float rub);
	void SetVolume(float ml);

	void AllInformation();
};
