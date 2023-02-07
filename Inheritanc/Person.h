#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person
{
protected:
	string Surname;
	string Name, Education, Adress, EmailAdress;	//���, �����������, �����, ��. �����
	int Age, Id;									//�������, id
	long long PhoneNumber, Salary;					//����� ��������, ��������

public:
	//����������� ������ �� ���������
	Person();
	
	//����������� ������
	Person(const string& new_Name, const string& new_Surname, int new_years, int new_id, const string& new_Education, 
		   const string& new_Adress, long long new_number, const string& new_mail,long long new_rub);
	
	//������� ���� ����� ������������
	void SetAll(const string& new_Name, const string& new_Surname, int new_years, int new_id, const string& new_Education, 
				const string& new_Adress, long long new_number, const string& new_mail, long long new_rub);

	string GetName() const;				//���������� ���
	string GetSurname() const;			//��������� �������
	string GetEducation() const;		//��������� �����������
	string GetAdress() const;			//��������� �����
	string GetEmailAdress() const;		//��������� ����������� �����
	int GetAge() const;					//��������� �������
	int GetId() const;					//��������� id
	long long GetPhoneNumber() const;	//��������� ����� ��������
	long long GetSalary() const;		//��������� ��������

	void SetName(const string& new_Name);				//���������� ���
	void SetSurname(const string& new_Surname);			//���������� �������
	void SetEducation(const string& new_Education);		//���������� �����������
	void SetAdress(const string& new_Adress);			//���������� �����
	void SetEmailAdress(const string& new_mail);		//���������� �����
	void SetAge(int new_years);							//������ �������
	void SetId(int new_id);								//������ id
	void SetPhoneNumber(long long new_number);			//������ ����� ��������
	void SetSalary(long long new_rub);					//������ ��������

	//������ ��� ���������� �� �������
	string AllInformation() const;
};
