#include "pch.h"
#include <iostream>
//#include <string>

#include "energy.h"
//using namespace std;


	/**************�����������**************/

//����������� ������
EnergyDrink::EnergyDrink(const string& new_Brand, const string& new_Name, const string& new_Taste, float new_collories, float new_Caf_mgml, float new_Tau_mgml, float new_rub, float new_ml)
{
	SetAll(new_Brand, new_Name, new_Taste, new_collories, new_Caf_mgml, new_Tau_mgml, new_rub, new_ml);
}
//����������� ������ �� ���������
EnergyDrink::EnergyDrink()
{
	this->Brand = "Black Monster";
	this->Name = "Ultra";
	this->Taste = "coconut and fructs";
	this->EnergyValue = 30;
	this->�affeine = 20;
	this->Taurine = 240;
	this->Price = 120;
	this->Volume = 449;
}





/**************������**************/

//��������� �������� �����
string EnergyDrink::GetBrand() const
{
	return this->Brand;
}

//��������� �������� �������
string EnergyDrink::GetName() const
{
	return this->Name;
}

//��������� ����
string EnergyDrink::GetTaste() const
{
	return this->Taste;
}

//��������� ��������������� ��������
float EnergyDrink::GetEnergyValue() const
{
	return this->EnergyValue;
}

//��������� ������
float EnergyDrink::Get�affeine() const
{
	return this->�affeine;
}

//��������� ������
float EnergyDrink::GetTaurine() const
{
	return this->Taurine;
}

//��������� ����
float EnergyDrink::GetPrice() const
{
	return this->Price;
}

//��������� �����
float EnergyDrink::GetVolume() const
{
	return this->Volume;
}





/**************������**************/

//���������� �������� �����
void EnergyDrink::SetBrand(const string &new_Brand)
{
	if (new_Brand != "")
		this->Brand = new_Brand;
	else throw invalid_argument("Invalid argument Brand");
}

//���������� �������� �������
void EnergyDrink::SetName(const string &new_Name)
{
	if (new_Name != "")
		this->Name = new_Name;
	else throw invalid_argument("Invalid argument");
}

//���������� ����
void EnergyDrink::SetTaste(const string &new_Taste)
{
	if (new_Taste != "")
		this->Taste = new_Taste;
	else throw invalid_argument("Invalid argument");
}

//������ ����
void EnergyDrink::SetEnergyValue(float new_collories)
{
	if (new_collories > 0)
		this->EnergyValue = new_collories;
	else
		throw invalid_argument("Invalid value");
}

//������ ������
void EnergyDrink::Set�affeine(float new_mgml)
{
	if (new_mgml > 0)
		this->�affeine = new_mgml;
	else
		throw invalid_argument("Invalid value");
}

//������ ������
void EnergyDrink::SetTaurine(float new_mgml)
{
	if (new_mgml >= 0)
		this->Taurine = new_mgml;
	else
		throw invalid_argument("Invalid value");
}

//������ ����
void EnergyDrink::SetPrice(float new_rub)
{
	if (new_rub > 0)
		this->Price = new_rub;
	else
		throw invalid_argument("Invalid value");
}

//������ �����
void EnergyDrink::SetVolume(float new_ml)
{
	if ((0.2 < new_ml) && (new_ml < 0.5))
		this->Volume = new_ml;
	else
		throw invalid_argument("too little or too much");
}





/**************������**************/

//������� ���� ����� ������������
void EnergyDrink::SetAll(const string& new_Brand, const string& new_Name, const string& new_Taste, float new_collories, float new_Caf_mgml, float new_Tau_mgml, float new_rub, float new_ml)
{
	SetBrand(new_Brand);			//�������� �����
	SetName(new_Name);				//�������� �������
	SetTaste(new_Taste);			//����
	SetEnergyValue(new_collories);	//�������������� ������� 
	Set�affeine(new_Caf_mgml);		//������
	SetTaurine(new_Tau_mgml);		//������	
	SetPrice(new_rub);				//����
	SetVolume(new_ml);				//�����
}

//������ ��� ���������� �� �������
string EnergyDrink::AllInformation() const
{
	/*string information = "Information about Energy drink:\nBrand:\t" + Brand +
		//string("\tBrand: ") + Brand + "\n" + ///"information:\nBrand:\t" + brand
		"\tName:  " + Name + "\n" +
		"\tTaste: " + Taste + "\n" +
		"\tEnergyValue: " + to_string(EnergyValue) + "\n" +
		"\t�affeine: " + to_string(�affeine) + "\n" +
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
		"\tCaffeine: " + to_string(�affeine) + "\n" +
		"\tTaurine: " + to_string(Taurine) + "\n" +
		"\tPrice: " + to_string(Price) + "\n" +
		"\tVolume: " + to_string(Volume) + "\n";
	return information; 
}