#pragma once
#include <iostream>
#include <string>

#include "Person.h"

using namespace std;

class Musician :public Person
{
private:
	string Genre;						//����
	string Instrument, Pseudonym, Band;	//�����������, ���������, ������
	int NumOfSongs;						//���-�� �����

public:
	//����������� ������ �� ���������
	Musician();
	
	//����������� ������
	Musician(const string& new_Band, const string& new_Genre, const string& new_Instrument, const string& new_Pseudonym, int new_Songnumber,
			 const string& new_Name, const string& new_Surname, int new_years, int new_id, const string& new_Education, const string& new_Adress, 
			 long long new_number, const string& new_mail, int new_rub);
	
	//������� ���� ����� ������������
	void SetAll(const string& new_Band, const string& new_Genre, const string& new_Instrument, const string& new_Pseudonym, int new_Songnumber, 
				const string& new_Name, const string& new_Surname, int new_years, int new_id, const string& new_Education, const string& new_Adress, 
				long long new_number, const string& new_mail, int new_rub);

	string GetBand() const;				//��������� �������� ������
	string GetGenre() const;			//��������� ����
	string GetPseudonym() const;		//��������� ���������
	string GetInstrument() const;		//��������� ����������
	int GetNumOfSongs() const;			//��������� ���-�� �����

	void SetBand(const string& new_Band);				//���������� �������� ������
	void SetGenre(const string& new_Genre);				//���������� ����
	void SetPseudonym(const string& new_Pseudonym);		//���������� ���������
	void SetInstrument(const string& new_Instrument);	//���������� ����������
	void SetNumOfSongs(int new_Songnumber);				//������ ���-�� �����

	string AllInformation() const;		//������ ��� ���������� �� �������
};
