#include "Musician.h"


	/**************конструктор**************/

//конструктор класса
Musician::Musician(const string& new_Band, const string& new_Genre, const string& new_Instrument, const string& new_Pseudonym, int new_Songnumber,
				   const string& new_Name, const string& new_Surname, int new_years, int new_id, const string& new_Education, const string& new_Adress, 
				   long long new_number, const string& new_mail, int new_rub)
{
	SetAll(new_Band, new_Genre, new_Instrument, new_Pseudonym, new_Songnumber, new_Name, new_Surname, new_years, new_id, new_Education, new_Adress, new_number, new_mail, new_rub);
}

//конструктор класса по умолчанию
Musician::Musician()
{
	SetName("Brian Thomas");
	SetSurname("Molko Farrel");
	this->Pseudonym = "Brian Molko";
	this->Band = "Placebo";
	this->Genre = "rock";
	this->Instrument = "vocals, guitar, bass guitar, keyboards";
	this->NumOfSongs = 140;
	SetAge(49);
	SetId(31528);
	SetEducation("Goldsmiths, University of London");
	SetPhoneNumber(59996644);
	SetEmailAdress("molko@yahoo.com");
	SetSalary(3000000);
}





/**************гетеры**************/

//возращаем жанр
string Musician::GetGenre() const
{
	return this->Genre;
}

//возращаем название группы
string Musician::GetBand() const
{
	return this->Band;
}

//возращаем инструмент
string Musician::GetInstrument() const
{
	return this->Instrument;
}

//возращаем псевдоним
string Musician::GetPseudonym() const
{
	return this->Pseudonym;
}

//возращаем кол-во песен
int Musician::GetNumOfSongs() const
{
	return this->NumOfSongs;
}







/**************сетеры**************/

//записываем жанр
void Musician::SetGenre(const string& new_Genre)
{
	if (Genre != "")
		this->Genre = Genre;
	else throw invalid_argument("Invalid argument");
}

//записываем название группы
void Musician::SetBand(const string& new_Band)
{
	if (Band != "")
		this->Band = Band;
	else throw invalid_argument("Invalid argument");
}

//записываем инструмент
void Musician::SetInstrument(const string& new_Instrument)
{
	if (new_Instrument != "")
		this->Instrument = new_Instrument;
	else throw invalid_argument("Invalid argument");
}

//записываем псевдоним
void Musician::SetPseudonym(const string& new_Pseudonym)
{
	if (new_Pseudonym != "")
		this->Pseudonym = new_Pseudonym;
	else throw invalid_argument("Invalid argument");
}

//задаем кол-во песен
void Musician::SetNumOfSongs(int new_Songnumber)
{
	if (new_Songnumber > 0)
		this->NumOfSongs = new_Songnumber;
	else
		throw invalid_argument("Invalid value");
}



/**************методы**************/

//Задание всех полей одновременно
void Musician::SetAll(const string& new_Band, const string& new_Genre, const string& new_Instrument, const string& new_Pseudonym, int new_Songnumber,
					  const string& new_Name, const string& new_Surname, int new_years, int new_id, const string& new_Education, const string& new_Adress, 
					  long long new_number, const string& new_mail, int new_rub)
{
	SetBand(new_Band);
	SetGenre(new_Genre);				//название жанра
	SetInstrument(new_Instrument);		//название инструмента
	SetPseudonym(new_Pseudonym);		//псевдоним
	SetNumOfSongs(new_Songnumber);		//кол-во песен

	SetName(new_Name);					//имя
	SetSurname(new_Surname);			//Фамилия
	SetAge(new_years);					//возраст
	SetId(new_id);						//id
	SetEducation(new_Education);		//Образование
	SetAdress(new_Adress);				//Адрес
	SetPhoneNumber(new_number);			//Номер телефона
	SetEmailAdress(new_mail);			//эл. почта
	SetSalary(new_rub);					//зарплата
}



//Выдает всю информацию об объекте
string Musician::AllInformation() const
{
	string information;  
	 information = "Information about Musician:\n";
		information += "\tName: " + GetName() + "\n" +
		"\tSurname: " + GetSurname() + "\n" +
		"\tPseudonym: " + this->Pseudonym + "\n" +
		"\tBand: " + this->Band + "\n" +
		"\tGenre: " + this->Genre + "\n" +
		"\tInstrument: " + this->Instrument + "\n" +
		"\tNumOfSongs: " + to_string(this->NumOfSongs) + "\n"
		"\tAge: " + to_string(GetAge()) + "\n" +
		"\tId: " + to_string(GetId()) + "\n" +
		"\tEducation: " + GetEducation() + "\n" +
		"\tPhoneNumber: " + to_string(GetPhoneNumber()) + "\n" +
		"\tEmailAdress: " + GetEmailAdress() + "\n" +
		"\tSalary: " + to_string(GetSalary()) + "\n";
	return information;
}    