#pragma once
#include <iostream>
#include<string>

#include "Person.h"

using namespace std;

class Programmer :public Person
{
private:
	string PlaceOfWork, Languages, DirectionInProgramming;		//место работы, языки, направление в програмировании
	int WorkExperience;											//опыт работы
public:
	//конструктор класса по умолчанию
	Programmer();

	//конструктор класса
	Programmer(const string& new_PlaceOfWork, const string& new_Languages, const string& new_DirectionInProgramming, int new_WorkExperience,
			   const string& new_Name, const string& new_Surname, int new_years, int new_id, const string& new_Education, const string& new_Adress,
			   long long new_number, const string& new_mail, int new_rub);
	
	//Задание всех полей одновременно
	void SetAll(const string& new_PlaceOfWork, const string& new_Languages, const string& new_DirectionInProgramming, int new_WorkExperience,
				const string& new_Name, const string& new_Surname, int new_years, int new_id, const string& new_Education, const string& new_Adress,
				long long new_number, const string& new_mail, int new_rub);
	
	string GetPlaceOfWork() const;				// возращаем место работы
	string GetLanguages() const;				// возращаем изученные языки
	string GetDirectionInProgramming() const;	// возращаем направление в программировании
	int GetWorkExperience() const;				// возращаем опыт работы

	void SetPlaceOfWork(const string& new_PlaceOfWork);		//записываем место работы
	void SetLanguages(const string& new_Languages);			//записываем языки
	void SetDirectionInProgramming(const string& new_DirectionInProgramming);	//записываем направление в программировании
	void SetWorkExperience(int new_WorkExperience);			//записываем опыт работы

	//Выдает всю информацию об объекте
	string AllInformation() const;
};