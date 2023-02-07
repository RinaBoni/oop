#include <iostream>
//#include <string>

#include "energy.h"
//using namespace std;


	/**************конструктор**************/
	//EnergyDrink() {}

EnergyDrink::EnergyDrink(string Brand, string Name, string Taste, float collories, float Caf_mgml, float Tau_mgml, float rub, float ml)
{
	SetBrand(Brand);			//название марки
	SetName(Name);				//название напитка
	SetTaste(Taste);			//вкус
	SetEnergyValue(collories);	//энергетическая ценость 
	SetСaffeine(Caf_mgml);		//кофеин
	SetTaurine(Tau_mgml);		//таурин	
	SetPrice(rub);				//цена
	SetVolume(ml);				//объем
}





/**************гетеры**************/

//возращаем название марки
string EnergyDrink::GetBrand() const
{
	return Brand;
}

//возращаем название напитка
string EnergyDrink::GetName() const
{
	return Name;
}

//возращаем вкус
string EnergyDrink::GetTaste() const
{
	return Taste;
}

//возращаем энергетичесскую ценность
float EnergyDrink::GetEnergyValue() const
{
	return EnergyValue;
}

//возращаем кофеин
float EnergyDrink::GetСaffeine() const
{
	return Сaffeine;
}

//возращаем таурин
float EnergyDrink::GetTaurine() const
{
	return Taurine;
}

//возращаем цену
float EnergyDrink::GetPrice() const
{
	return Price;
}

//возращаем объем
float EnergyDrink::GetVolume() const
{
	return Volume;
}





/**************сетеры**************/

//записываем название марки
void EnergyDrink::SetBrand(string Brand)
{
	this->Brand = Brand;
}

//записываем название напитка
void EnergyDrink::SetName(string Name)
{
	this->Name = Name;
}

//записываем вкус
void EnergyDrink::SetTaste(string Taste)
{
	this->Taste = Taste;
}

//задаем калл
void EnergyDrink::SetEnergyValue(float collories)
{
	if (collories > 0)
		this->EnergyValue = collories;
	else
		throw invalid_argument("Invalid value");
}

//задаем кофеин
void EnergyDrink::SetСaffeine(float mgml)
{
	if (mgml > 0)
		this->Сaffeine = mgml;
	else
		throw invalid_argument("Invalid value");
}

//задаем таурин
void EnergyDrink::SetTaurine(float mgml)
{
	if (mgml > 0)
		this->Taurine = mgml;
	else
		throw invalid_argument("Invalid value");
}

//задаем цену
void EnergyDrink::SetPrice(float rub)
{
	if (rub > 0)
		this->Price = rub;
	else
		throw invalid_argument("Invalid value");
}

//задаем объем
void EnergyDrink::SetVolume(float ml)
{
	if ((0.2 < ml) && (ml < 0.5))
		this->Volume = ml;
	else
		throw invalid_argument("too little or too much");
}





/**************методы**************/

void EnergyDrink::AllInformation()
{
	cout << "Brand:\t" << GetBrand() << "\nName:\t" << GetName() << "\nTaste:\t" << GetTaste() << "\nEnergy value:\t" << GetEnergyValue() << "\nCaffein:\t" << GetСaffeine() << "\nTaurine:\t" << GetTaurine() << "\nPrice:\t" << GetPrice() << "\nVolume:\t" << GetVolume();
}
