#pragma once
#include <iostream>
#include<string>

#include "Person.h"

using namespace std;

class Programmer :public Person
{
private:
	string PlaceOfWork, Languages, DirectionInProgramming;		//����� ������, �����, ����������� � ���������������
	int WorkExperience;											//���� ������
public:
	//����������� ������ �� ���������
	Programmer();

	//����������� ������
	Programmer(const string& new_PlaceOfWork, const string& new_Languages, const string& new_DirectionInProgramming, int new_WorkExperience,
			   const string& new_Name, const string& new_Surname, int new_years, int new_id, const string& new_Education, const string& new_Adress,
			   long long new_number, const string& new_mail, int new_rub);
	
	//������� ���� ����� ������������
	void SetAll(const string& new_PlaceOfWork, const string& new_Languages, const string& new_DirectionInProgramming, int new_WorkExperience,
				const string& new_Name, const string& new_Surname, int new_years, int new_id, const string& new_Education, const string& new_Adress,
				long long new_number, const string& new_mail, int new_rub);
	
	string GetPlaceOfWork() const;				// ��������� ����� ������
	string GetLanguages() const;				// ��������� ��������� �����
	string GetDirectionInProgramming() const;	// ��������� ����������� � ����������������
	int GetWorkExperience() const;				// ��������� ���� ������

	void SetPlaceOfWork(const string& new_PlaceOfWork);		//���������� ����� ������
	void SetLanguages(const string& new_Languages);			//���������� �����
	void SetDirectionInProgramming(const string& new_DirectionInProgramming);	//���������� ����������� � ����������������
	void SetWorkExperience(int new_WorkExperience);			//���������� ���� ������

	//������ ��� ���������� �� �������
	string AllInformation() const;
};