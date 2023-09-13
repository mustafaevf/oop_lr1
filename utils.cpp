#include "pch.h"
#include "utils.h"

int getCorrectNumber(int min, int max) {
	int result;
	wcin >> result;
	while (wcin.fail() || (result < min && result > max)) {
		wcin.clear();
		wcin.ignore(10000, '\n');
		wcout << L"����� ������ ���� �� " << min << L" �� " << max << ": ";
	}
	return result;
}


float getCorrectNumber(float min, float max) {
	float result;
	wcin >> result;
	return result;
}

//wstring getText(wstring text) {
//	for (auto sym : text) {
//		if (sym == ' ')
//			break;
//	}
//}

void printMenu() {
	wcout 
		<< L"1. �������� ��������\n"
		<< L"2. ������� ���� ���������\n"
		<< L"3. ��������\n"
		<< L"4. ��������� �� �����\n"
		<< L"5. ��������� � ����\n"
		<< L"��������: ";
}