#include "Programmer.h"

/**************конструктор**************/

//конструктор класса
Programmer::Programmer(const string& new_PlaceOfWork, const string& new_Languages, const string& new_DirectionInProgramming, int new_WorkExperience,
					   const string& new_Name, const string& new_Surname, int new_years, int new_id, const string& new_Education, const string& new_Adress,
					   long long new_number, const string& new_mail, int new_rub)
{
	SetAll(new_PlaceOfWork, new_Languages, new_DirectionInProgramming, new_WorkExperience, new_Name, new_Surname, new_years, new_id, new_Education, new_Adress, new_number, new_mail, new_rub);
}

//конструктор класса по умолчанию
Programmer::Programmer()
{
	SetName("James");
	SetSurname("Fox");
	this->PlaceOfWork = "google";
	this->Languages = "C++, Python";
	this->DirectionInProgramming = "";
	this->WorkExperience = 3;
	SetAge(25);
	SetId(31528);
	SetEducation("MOSCOW TECHNICAL UNIVERSITY OF COMMUNICATIONS AND INFORMATICS");
	SetPhoneNumber(9568521220);
	SetEmailAdress("molko@yahoo.com");
	SetSalary(2000000);
}




/**************гетеры**************/

// возращаем место работы
string Programmer::GetPlaceOfWork() const
{
	return this->PlaceOfWork;
}

// возращаем изученные языки
string Programmer::GetLanguages() const
{
	return this->Languages;
}

// возращаем направление в программировании
string Programmer::GetDirectionInProgramming() const
{
	return this->DirectionInProgramming;
}

// возращаем опыт работы
int Programmer::GetWorkExperience() const
{
	return this->WorkExperience;
}





/**************сетеры**************/

//записываем место работы
void Programmer::SetPlaceOfWork(const string& new_PlaceOfWork)
{
	if (new_PlaceOfWork != "")
		this->PlaceOfWork = new_PlaceOfWork;
	else throw invalid_argument("Invalid argument");
}

//записываем языки
void Programmer::SetLanguages(const string& new_Languages)
{
	if (new_Languages != "")
		this->Languages = new_Languages;
	else throw invalid_argument("Invalid argument");
}

//записываем направление в программировании
void Programmer::SetDirectionInProgramming(const string& new_DirectionInProgramming)
{
	if (new_DirectionInProgramming != "")
		this->DirectionInProgramming = DirectionInProgramming;
	else throw invalid_argument("Invalid argument");
}

//записываем опыт работы
void Programmer::SetWorkExperience(int new_WorkExperience)
{
	if (new_WorkExperience > 0)
		this->WorkExperience = WorkExperience;
	else
		throw invalid_argument("Invalid value");
}



/**************методы**************/

//Задание всех полей одновременно
void Programmer::SetAll(const string& new_PlaceOfWork, const string& new_Languages, const string& new_DirectionInProgramming, int new_WorkExperience,
						const string& new_Name, const string& new_Surname, int new_years, int new_id, const string& new_Education, const string& new_Adress,
						long long new_number, const string& new_mail, int new_rub)
{
	SetPlaceOfWork(new_PlaceOfWork);
	SetLanguages(new_Languages);
	SetDirectionInProgramming(new_DirectionInProgramming);
	SetWorkExperience(new_WorkExperience);

	SetName(new_Name);
	SetSurname(new_Surname);
	SetAge(new_years);
	SetId(new_id);
	SetEducation(new_Education);
	SetAdress(new_Adress);
	SetPhoneNumber(new_number);
	SetEmailAdress(new_mail);
	SetSalary(new_rub);
}

//Выдает всю информацию об объекте
string Programmer::AllInformation() const
{
	string information;
	 information = "Information about Musician:";
		information+=
		"\tName: " + GetName() + "\n" +
		"\tSurname: " + GetSurname() + "\n" +
		"\tAge: " + to_string(GetAge()) + "\n" +
		"\tId: " + to_string(GetId()) + "\n" +
		"\tEducation: " + GetEducation() + "\n" +
		"\tPlace of Work: " + this->PlaceOfWork + "\n" +
		"\tLanguages: " + this->Languages + "\n" +
		"\tDirection in Programming: " + this->DirectionInProgramming + "\n" +
		"\tWork Experience: " + to_string(this->WorkExperience) + "\n"
		"\tPhoneNumber: " + to_string(GetPhoneNumber()) + "\n" +
		"\tEmailAdress: " + GetEmailAdress() + "\n" +
		"\tSalary: " + to_string(GetSalary()) + "\n";
		return information;
}