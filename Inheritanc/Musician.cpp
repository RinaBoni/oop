#include "Musician.h"


	/**************�����������**************/

//����������� ������
Musician::Musician(const string& new_Band, const string& new_Genre, const string& new_Instrument, const string& new_Pseudonym, int new_Songnumber,
				   const string& new_Name, const string& new_Surname, int new_years, int new_id, const string& new_Education, const string& new_Adress, 
				   long long new_number, const string& new_mail, int new_rub)
{
	SetAll(new_Band, new_Genre, new_Instrument, new_Pseudonym, new_Songnumber, new_Name, new_Surname, new_years, new_id, new_Education, new_Adress, new_number, new_mail, new_rub);
}

//����������� ������ �� ���������
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





/**************������**************/

//��������� ����
string Musician::GetGenre() const
{
	return this->Genre;
}

//��������� �������� ������
string Musician::GetBand() const
{
	return this->Band;
}

//��������� ����������
string Musician::GetInstrument() const
{
	return this->Instrument;
}

//��������� ���������
string Musician::GetPseudonym() const
{
	return this->Pseudonym;
}

//��������� ���-�� �����
int Musician::GetNumOfSongs() const
{
	return this->NumOfSongs;
}







/**************������**************/

//���������� ����
void Musician::SetGenre(const string& new_Genre)
{
	if (Genre != "")
		this->Genre = Genre;
	else throw invalid_argument("Invalid argument");
}

//���������� �������� ������
void Musician::SetBand(const string& new_Band)
{
	if (Band != "")
		this->Band = Band;
	else throw invalid_argument("Invalid argument");
}

//���������� ����������
void Musician::SetInstrument(const string& new_Instrument)
{
	if (new_Instrument != "")
		this->Instrument = new_Instrument;
	else throw invalid_argument("Invalid argument");
}

//���������� ���������
void Musician::SetPseudonym(const string& new_Pseudonym)
{
	if (new_Pseudonym != "")
		this->Pseudonym = new_Pseudonym;
	else throw invalid_argument("Invalid argument");
}

//������ ���-�� �����
void Musician::SetNumOfSongs(int new_Songnumber)
{
	if (new_Songnumber > 0)
		this->NumOfSongs = new_Songnumber;
	else
		throw invalid_argument("Invalid value");
}



/**************������**************/

//������� ���� ����� ������������
void Musician::SetAll(const string& new_Band, const string& new_Genre, const string& new_Instrument, const string& new_Pseudonym, int new_Songnumber,
					  const string& new_Name, const string& new_Surname, int new_years, int new_id, const string& new_Education, const string& new_Adress, 
					  long long new_number, const string& new_mail, int new_rub)
{
	SetBand(new_Band);
	SetGenre(new_Genre);				//�������� �����
	SetInstrument(new_Instrument);		//�������� �����������
	SetPseudonym(new_Pseudonym);		//���������
	SetNumOfSongs(new_Songnumber);		//���-�� �����

	SetName(new_Name);					//���
	SetSurname(new_Surname);			//�������
	SetAge(new_years);					//�������
	SetId(new_id);						//id
	SetEducation(new_Education);		//�����������
	SetAdress(new_Adress);				//�����
	SetPhoneNumber(new_number);			//����� ��������
	SetEmailAdress(new_mail);			//��. �����
	SetSalary(new_rub);					//��������
}



//������ ��� ���������� �� �������
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