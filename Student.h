#pragma once
class Student
{
public:
	Student();
	void readFromConsole();
	void setFirstName(CString first_name);
	void setAge(int age);
	void setLastName(CString last_name);

	CString getFirstName();
	CString getLastName();
	int getAge();
private:
	int age;
	CString first_name;
	CString last_name;
};

