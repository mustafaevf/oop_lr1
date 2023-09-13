#include "pch.h"
#include "Student.h"




Student::Student() {
	this->age = 0;
	this->first_name = L" ";
	this->last_name = L" ";
}

void Student::setFirstName(wstring first_name) { this->first_name = first_name; }
void Student::setAge(int age) { this->age = age; }
void Student::setLastName(wstring last_name) { this->last_name = last_name; }
wstring Student::getFirstName() { return this->first_name; }
wstring Student::getLastName() { return this->last_name; }
int Student::getAge() { return this->age; }

wistream& operator >> (wistream& stream, Student& student) {
	wcout << L"Введите имя: ";
	wstring first_name;
	stream >> first_name;
	wcout << L"Введите фамилию: ";
	wstring last_name;
	stream >> last_name;
	wcout << L"Введите возраст: ";
	student.setFirstName(first_name);
	student.setLastName(last_name);
	student.setAge(getCorrectNumber(18, 90));
	wcout << L"Студент успешно добавлен\n";
	return stream;
}
wostream& operator << (wostream& stream, Student& student) {
	stream << L"Имя: " << student.getFirstName() << "\n"
		<< L"Фамилия: " << student.getLastName() << "\n"
		<< L"Возраст: " << student.getAge() << "\n";
	return stream;
}

wofstream& operator << (wofstream& out, Student& student) {
	out << student.getFirstName() << endl;
	out << student.getLastName() << endl;
	out << student.getAge() << endl;
	return out;
}


wifstream& operator >> (wifstream& fin, Student& student) {
	int age;
	wstring first, last;
	fin >> first;
	fin >> last;
	fin >> age;
	student.setAge(age);
	student.setFirstName(first);
	student.setLastName(last);
	return fin;
}
	


