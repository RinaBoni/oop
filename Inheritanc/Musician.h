#pragma once
#include <iostream>
#include <string>

#include "Person.h"

using namespace std;

class Musician :public Person
{
private:
	string Genre;						//жанр
	string Instrument, Pseudonym, Band;	//инструменты, псевдоним, группа
	int NumOfSongs;						//кол-во песен

public:
	//конструктор класса по умолчанию
	Musician();
	
	//конструктор класса
	Musician(const string& new_Band, const string& new_Genre, const string& new_Instrument, const string& new_Pseudonym, int new_Songnumber,
			 const string& new_Name, const string& new_Surname, int new_years, int new_id, const string& new_Education, const string& new_Adress, 
			 long long new_number, const string& new_mail, int new_rub);
	
	//Задание всех полей одновременно
	void SetAll(const string& new_Band, const string& new_Genre, const string& new_Instrument, const string& new_Pseudonym, int new_Songnumber, 
				const string& new_Name, const string& new_Surname, int new_years, int new_id, const string& new_Education, const string& new_Adress, 
				long long new_number, const string& new_mail, int new_rub);

	string GetBand() const;				//возращаем название группы
	string GetGenre() const;			//возращаем жанр
	string GetPseudonym() const;		//возращаем псевдоним
	string GetInstrument() const;		//возращаем инструмент
	int GetNumOfSongs() const;			//возращаем кол-во песен

	void SetBand(const string& new_Band);				//записываем название группы
	void SetGenre(const string& new_Genre);				//записываем жанр
	void SetPseudonym(const string& new_Pseudonym);		//записываем псевдоним
	void SetInstrument(const string& new_Instrument);	//записываем инструмент
	void SetNumOfSongs(int new_Songnumber);				//задаем кол-во песен

	string AllInformation() const;		//Выдает всю информацию об объекте
};
