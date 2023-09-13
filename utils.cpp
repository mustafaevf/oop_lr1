#include "pch.h"
#include "utils.h"

int getCorrectNumber(int min, int max) {
	int result;
	wcin >> result;
	return result;
}


float getCorrectNumber(float min, float max) {
	float result;
	wcin >> result;
	return result;
}

void printMenu() {
	wcout << L"1. Добавить элемент" <<
		"2. Вывести все элементы" <<
		"3. ";
}