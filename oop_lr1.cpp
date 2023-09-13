#include "pch.h"
#include "framework.h"
#include "oop_lr1.h"
#include "Student.h"

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
            wcout << L"Введите цифру ";
            Student student;
            int result = getCorrectNumber(1, 10);

        }
    }
    else
    {
        wprintf(L"Критическая ошибка: сбой GetModuleHandle\n");
        nRetCode = 1;
    }

    return nRetCode;
}
