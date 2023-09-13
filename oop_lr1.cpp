#include "pch.h"
#include "framework.h"
#include "oop_lr1.h"
#include "Student.h"
#include "Group.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CWinApp theApp;


int main()
{
    int nRetCode = 0;

    HMODULE hModule = ::GetModuleHandle(nullptr);

    if (hModule != nullptr)
    {
        if (!AfxWinInit(hModule, nullptr, ::GetCommandLine(), 0))
        {
            wprintf(L"Критическая ошибка: сбой при инициализации MFC\n");
            nRetCode = 1;
        }
        else
        {
            std::locale::global(std::locale("Russian_Russia.1251"));
            printMenu();
            
            Group group;
            for (;;)
            {
                int menu_point = getCorrectNumber(1, 3);
                switch (menu_point)
                {
                case 1: {
                    
                    Student* student = new Student();
                    wcin >> *student;
                    group.students.push_back(student);
                    break;
                }
                   
                case 2: {
                    wcout << L"Вывод всех студентов:\n";
                    if (group.students.size() == 0) 
                    {
                        wcout << L"Ничего не найдено" << endl; 
                        break;
                    }
                    for (auto* student : group.students) {
                        wcout << *student;
                    }
                    break;
                }
                case 3: {
                    wcout << L"Список очищен" << endl;
                    group.students.clear();
                    break;
                }
                case 4: { // загрузиь из файла
                    wcout << L"Введите название файла: ";
                    wstring filename;
                    wcin >> filename;
                    wifstream file;
                    file.open(filename);
                    int count_student;
                    file >> count_student;
                    for (int i = 0; i < count_student; i++) {
                        Student* student = new Student();
                        file >> *student;
                        group.students.push_back(student);
                    }
                    if (count_student == group.students.size())
                        wcout << L"Успешно" << endl;

                    break;
                }
                case 5: { // сохранить в файл
                    if (group.students.size() == 0) {
                        wcout << L"В группе нет студентов\n";
                        break;
                    }
                    wofstream file;
                    wstring filename;
                    wcout << L"Введите название файла: ";
                    wcin >> filename;
                    file.open(filename, ios::trunc);
                    file << group.students.size() << endl;
                    for (auto* student : group.students)
                        file << *student;
                    wcout << L"СОхраненр" << endl;
                }
                default:
                    break;
                }
            }
        }
    }
    else
    {
        wprintf(L"Критическая ошибка: сбой GetModuleHandle\n");
        nRetCode = 1;
    }

    return nRetCode;
}
