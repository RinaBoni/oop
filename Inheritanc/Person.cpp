#include "Person.h"


	/**************конструктор**************/

//конструктор класса
Person::Person(const string& new_Name, const string& new_Surname, int new_years, int new_id,const string& new_Education,
			   const string& new_Adress,  long long new_number, const string& new_mail,long long new_rub)
{
	SetAll(new_Name, new_Surname, new_years, new_id, new_Education, new_Adress, new_number, new_mail, new_rub);
}

//конструктор класса по умолчанию
Person::Person()
{
	this->Name = "Mary";
	this->Surname = "Jhons";
	this->Age = 30;
	this->Id = 3366658;
	this->Education = "Boston University";
	this->Adress = "USA";
	this->PhoneNumber = 7705060030;
	this->EmailAdress = "maryj876.gmail.com";
	this->Salary = 120000;
}

/**************гетеры**************/

//возвращаем им€
string Person::GetName() const
{
	return this->Name;
}

//возращаем фамилию
string Person::GetSurname() const
{
	return this->Surname;
}

//возращаем возраст
int Person::GetAge() const
{
	return this->Age;
}

//возращаем id
int Person::GetId() const
{
	return this->Id;
}

//возращаем образование
string Person::GetEducation() const
{
	return this->Education;
}

//возращаем адресс
string Person::GetAdress() const
{
	return this->Adress;
}

//возращаем номер телефона
long long Person::GetPhoneNumber() const
{
	return this->PhoneNumber;
}

//возращаем электронную почту
string Person::GetEmailAdress() const
{
	return this->EmailAdress;
}

//возращаем зарплату
long long Person::GetSalary() const
{
	return this->Salary;
}


/**************сетеры**************/


//записываем им€
void Person::SetName(const string& new_Name)
{
	if (Name != "")
		this->Name = Name;
	else throw invalid_argument("Invalid argument");
}

//записываем фамилию
void Person::SetSurname(const string& new_Surname)
{
	if (Surname != "")
		this->Surname = Surname;
	else throw invalid_argument("Invalid argument");
}

//задаем возраст
void Person::SetAge(int new_years)
{
	if (new_years > 0)
		this->Age = new_years;
	else
		throw invalid_argument("Invalid value");
}

//задаем id
void Person::SetId(int new_id)
{
	if (new_id > 0)
		this->Id = new_id;
	else
		throw invalid_argument("Invalid value");
}

//записываем образование
void Person::SetEducation(const string& new_Education)
{
	if (new_Education != "")
		this->Education = new_Education;
	else throw invalid_argument("Invalid argument");
}

//записываем адресс
void Person::SetAdress(const string& new_Adress)
{
	if (new_Adress != "")
		this->Adress = new_Adress;
	else throw invalid_argument("Invalid argument");
}

//задаем номер телефона
void Person::SetPhoneNumber(long long new_number)
{
	if (new_number > 0)
		this->PhoneNumber = new_number;
	else
		throw invalid_argument("Invalid value");
}

//записываем эл.адресс
void Person::SetEmailAdress(const string& new_mail)
{
	if (new_mail != "")
		this->EmailAdress = new_mail;
	else throw invalid_argument("Invalid argument");
}

//задаем зарплату
void Person::SetSalary(long long new_rub)
{
	if (new_rub > 0)
		this->Salary = new_rub;
	else
		throw invalid_argument("Invalid value");
}


/**************методы**************/

//«адание всех полей одновременно
void Person::SetAll(const string& new_Name, const string& new_Surname, int new_years, int new_id, const string& new_Education,
					const string& new_Adress, long long new_number, const string& new_mail, long long new_rub)
{
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

//¬ыдает всю информацию об объекте
string Person::AllInformation() const
{
	string information = "Information about Person:\n" +
		string("\tName: ") + this->Name + "\n" +
		"\tSurname: " + this->Surname + "\n" +
		"\tAge: " + to_string(this->Age) + "\n" +
		"\tId: " + to_string(this->Id) + "\n" +
		"\tEducation: " + this->Education + "\n" +
		"\tAdress: " + this->Adress + "\n" +
		"\tPhone Number: " + to_string(this->PhoneNumber) + "\n" +
		"\tEmail Adress: " + this->EmailAdress + "\n" +
		"\tSalary: " + to_string(this->Salary) + "\n";
	return information;
}