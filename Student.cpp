#include "pch.h"
#include "Student.h"


Student::Student() {
	wcout << "Student created";
}

void Student::readFromConsole()
{
	wcout << L"¬ведите им€: ";
	wstring first_name;
	wcin >> first_name;
	wcout << L"¬ведите фамилию: ";
	wstring last_name;
	wcin >> last_name;
	wcout << L"¬ведите возраст: ";
	setFirstName(first_name.c_str());
	setLastName(last_name.c_str());
	setAge(getCorrectNumber(18, 90));
	wcout << "ok";
}

void Student::setFirstName(CString first_name)
{
	this->first_name = first_name;
}

void Student::setAge(int age)
{
	this->age = age;
}

void Student::setLastName(CString last_name)
{
	this->last_name = last_name;
}

CString Student::getFirstName()
{
	return this->first_name;
}

CString Student::getLastName()
{
	return this->last_name;
}

int Student::getAge()
{
	return this->age;
}


