#include <iostream>
//#include <string>

#include "energy.h"
//using namespace std;


	/**************�����������**************/
	//EnergyDrink() {}

EnergyDrink::EnergyDrink(string Brand, string Name, string Taste, float collories, float Caf_mgml, float Tau_mgml, float rub, float ml)
{
	SetBrand(Brand);			//�������� �����
	SetName(Name);				//�������� �������
	SetTaste(Taste);			//����
	SetEnergyValue(collories);	//�������������� ������� 
	Set�affeine(Caf_mgml);		//������
	SetTaurine(Tau_mgml);		//������	
	SetPrice(rub);				//����
	SetVolume(ml);				//�����
}





/**************������**************/

//��������� �������� �����
string EnergyDrink::GetBrand() const
{
	return Brand;
}

//��������� �������� �������
string EnergyDrink::GetName() const
{
	return Name;
}

//��������� ����
string EnergyDrink::GetTaste() const
{
	return Taste;
}

//��������� ��������������� ��������
float EnergyDrink::GetEnergyValue() const
{
	return EnergyValue;
}

//��������� ������
float EnergyDrink::Get�affeine() const
{
	return �affeine;
}

//��������� ������
float EnergyDrink::GetTaurine() const
{
	return Taurine;
}

//��������� ����
float EnergyDrink::GetPrice() const
{
	return Price;
}

//��������� �����
float EnergyDrink::GetVolume() const
{
	return Volume;
}





/**************������**************/

//���������� �������� �����
void EnergyDrink::SetBrand(string Brand)
{
	this->Brand = Brand;
}

//���������� �������� �������
void EnergyDrink::SetName(string Name)
{
	this->Name = Name;
}

//���������� ����
void EnergyDrink::SetTaste(string Taste)
{
	this->Taste = Taste;
}

//������ ����
void EnergyDrink::SetEnergyValue(float collories)
{
	if (collories > 0)
		this->EnergyValue = collories;
	else
		throw invalid_argument("Invalid value");
}

//������ ������
void EnergyDrink::Set�affeine(float mgml)
{
	if (mgml > 0)
		this->�affeine = mgml;
	else
		throw invalid_argument("Invalid value");
}

//������ ������
void EnergyDrink::SetTaurine(float mgml)
{
	if (mgml > 0)
		this->Taurine = mgml;
	else
		throw invalid_argument("Invalid value");
}

//������ ����
void EnergyDrink::SetPrice(float rub)
{
	if (rub > 0)
		this->Price = rub;
	else
		throw invalid_argument("Invalid value");
}

//������ �����
void EnergyDrink::SetVolume(float ml)
{
	if ((0.2 < ml) && (ml < 0.5))
		this->Volume = ml;
	else
		throw invalid_argument("too little or too much");
}





/**************������**************/

void EnergyDrink::AllInformation()
{
	cout << "Brand:\t" << GetBrand() << "\nName:\t" << GetName() << "\nTaste:\t" << GetTaste() << "\nEnergy value:\t" << GetEnergyValue() << "\nCaffein:\t" << Get�affeine() << "\nTaurine:\t" << GetTaurine() << "\nPrice:\t" << GetPrice() << "\nVolume:\t" << GetVolume();
}
