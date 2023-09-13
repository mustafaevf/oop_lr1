#pragma once
#include <fstream>

class Student
{
public:
	Student();
	void setFirstName(wstring first_name);
	void setAge(int age);
	void setLastName(wstring last_name);

	wstring getFirstName();
	wstring getLastName();
	int getAge();
	friend wistream& operator >> (wistream&, Student&);
	friend wostream& operator << (wostream&, Student&);
	friend wofstream& operator << (wofstream&, Student&);
	friend wifstream& operator >> (wifstream&, Student&);
private:
	int age;
	wstring first_name;
	wstring last_name;
};

