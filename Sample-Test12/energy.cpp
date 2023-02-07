#include "pch.h"
#include <iostream>
//#include <string>

#include "energy.h"
//using namespace std;


	/**************конструктор**************/

//конструктор класса
EnergyDrink::EnergyDrink(const string& new_Brand, const string& new_Name, const string& new_Taste, float new_collories, float new_Caf_mgml, float new_Tau_mgml, float new_rub, float new_ml)
{
	SetAll(new_Brand, new_Name, new_Taste, new_collories, new_Caf_mgml, new_Tau_mgml, new_rub, new_ml);
}
//конструктор класса по умолчанию
EnergyDrink::EnergyDrink()
{
	this->Brand = "Black Monster";
	this->Name = "Ultra";
	this->Taste = "coconut and fructs";
	this->EnergyValue = 30;
	this->Сaffeine = 20;
	this->Taurine = 240;
	this->Price = 120;
	this->Volume = 449;
}





/**************гетеры**************/

//возращаем название марки
string EnergyDrink::GetBrand() const
{
	return this->Brand;
}

//возращаем название напитка
string EnergyDrink::GetName() const
{
	return this->Name;
}

//возращаем вкус
string EnergyDrink::GetTaste() const
{
	return this->Taste;
}

//возращаем энергетичесскую ценность
float EnergyDrink::GetEnergyValue() const
{
	return this->EnergyValue;
}

//возращаем кофеин
float EnergyDrink::GetСaffeine() const
{
	return this->Сaffeine;
}

//возращаем таурин
float EnergyDrink::GetTaurine() const
{
	return this->Taurine;
}

//возращаем цену
float EnergyDrink::GetPrice() const
{
	return this->Price;
}

//возращаем объем
float EnergyDrink::GetVolume() const
{
	return this->Volume;
}





/**************сетеры**************/

//записываем название марки
void EnergyDrink::SetBrand(const string &new_Brand)
{
	if (new_Brand != "")
		this->Brand = new_Brand;
	else throw invalid_argument("Invalid argument Brand");
}

//записываем название напитка
void EnergyDrink::SetName(const string &new_Name)
{
	if (new_Name != "")
		this->Name = new_Name;
	else throw invalid_argument("Invalid argument");
}

//записываем вкус
void EnergyDrink::SetTaste(const string &new_Taste)
{
	if (new_Taste != "")
		this->Taste = new_Taste;
	else throw invalid_argument("Invalid argument");
}

//задаем калл
void EnergyDrink::SetEnergyValue(float new_collories)
{
	if (new_collories > 0)
		this->EnergyValue = new_collories;
	else
		throw invalid_argument("Invalid value");
}

//задаем кофеин
void EnergyDrink::SetСaffeine(float new_mgml)
{
	if (new_mgml > 0)
		this->Сaffeine = new_mgml;
	else
		throw invalid_argument("Invalid value");
}

//задаем таурин
void EnergyDrink::SetTaurine(float new_mgml)
{
	if (new_mgml >= 0)
		this->Taurine = new_mgml;
	else
		throw invalid_argument("Invalid value");
}

//задаем цену
void EnergyDrink::SetPrice(float new_rub)
{
	if (new_rub > 0)
		this->Price = new_rub;
	else
		throw invalid_argument("Invalid value");
}

//задаем объем
void EnergyDrink::SetVolume(float new_ml)
{
	if ((0.2 < new_ml) && (new_ml < 0.5))
		this->Volume = new_ml;
	else
		throw invalid_argument("too little or too much");
}





/**************методы**************/

//Задание всех полей одновременно
void EnergyDrink::SetAll(const string& new_Brand, const string& new_Name, const string& new_Taste, float new_collories, float new_Caf_mgml, float new_Tau_mgml, float new_rub, float new_ml)
{
	SetBrand(new_Brand);			//название марки
	SetName(new_Name);				//название напитка
	SetTaste(new_Taste);			//вкус
	SetEnergyValue(new_collories);	//энергетическая ценость 
	SetСaffeine(new_Caf_mgml);		//кофеин
	SetTaurine(new_Tau_mgml);		//таурин	
	SetPrice(new_rub);				//цена
	SetVolume(new_ml);				//объем
}

//Выдает всю информацию об объекте
string EnergyDrink::AllInformation() const
{
	/*string information = "Information about Energy drink:\nBrand:\t" + Brand +
		//string("\tBrand: ") + Brand + "\n" + ///"information:\nBrand:\t" + brand
		"\tName:  " + Name + "\n" +
		"\tTaste: " + Taste + "\n" +
		"\tEnergyValue: " + to_string(EnergyValue) + "\n" +
		"\tСaffeine: " + to_string(Сaffeine) + "\n" +
		"\tTaurine: " + to_string(Taurine) + "\n" +
		"\tPrice: " + to_string(Price) + "\n" +
		"\tVolume: " + to_string(Volume) + "\n";
	return information;*/
	string information = "Information about Energy drink:\n";
		information += 
		"\tBrand: " + Brand + "\n" +
		"\tName: " + Name + "\n" +
		"\tTaste: " + Taste + "\n" +
		"\tEnergyValue: " + to_string(EnergyValue) + "\n" +
		"\tCaffeine: " + to_string(Сaffeine) + "\n" +
		"\tTaurine: " + to_string(Taurine) + "\n" +
		"\tPrice: " + to_string(Price) + "\n" +
		"\tVolume: " + to_string(Volume) + "\n";
	return information; 
}