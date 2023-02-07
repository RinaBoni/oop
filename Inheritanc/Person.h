#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person
{
protected:
	string Surname;
	string Name, Education, Adress, EmailAdress;	//Имя, образование, адрес, эл. адрес
	int Age, Id;									//возраст, id
	long long PhoneNumber, Salary;					//номнр телефона, зарплата

public:
	//конструктор класса по умолчанию
	Person();
	
	//конструктор класса
	Person(const string& new_Name, const string& new_Surname, int new_years, int new_id, const string& new_Education, 
		   const string& new_Adress, long long new_number, const string& new_mail,long long new_rub);
	
	//Задание всех полей одновременно
	void SetAll(const string& new_Name, const string& new_Surname, int new_years, int new_id, const string& new_Education, 
				const string& new_Adress, long long new_number, const string& new_mail, long long new_rub);

	string GetName() const;				//возвращаем имя
	string GetSurname() const;			//возращаем фамилию
	string GetEducation() const;		//возращаем образование
	string GetAdress() const;			//возращаем адрес
	string GetEmailAdress() const;		//возращаем электронную почту
	int GetAge() const;					//возращаем возраст
	int GetId() const;					//возращаем id
	long long GetPhoneNumber() const;	//возращаем номер телефона
	long long GetSalary() const;		//возращаем зарплату

	void SetName(const string& new_Name);				//записываем имя
	void SetSurname(const string& new_Surname);			//записываем фамилию
	void SetEducation(const string& new_Education);		//записываем образование
	void SetAdress(const string& new_Adress);			//записываем адрес
	void SetEmailAdress(const string& new_mail);		//записываем адрес
	void SetAge(int new_years);							//задаем возраст
	void SetId(int new_id);								//задаем id
	void SetPhoneNumber(long long new_number);			//задаем номер телефона
	void SetSalary(long long new_rub);					//задаем зарплату

	//Выдает всю информацию об объекте
	string AllInformation() const;
};
