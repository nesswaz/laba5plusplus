#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <string>
#include "laura5.h"
#include <algorithm> //библиотека для команд строки
#ifdef _WIN32
#include <windows.h> 
#endif
using namespace std;

int main() {
    #ifdef _WIN32
    SetConsoleOutputCP(65001);
    #endif
    int choice;
    string myString;
    do {
        cout << "1. Заполнить строку с клавиатуры" << endl;
        cout << "2. Заполнить строку случайными числами" << endl;
        cout << "3. Заполнить строку из файла" << endl;
        cout << "4. Задание String47" << endl;
        cout << "5. ЗаданиеStr19" << endl;
        cout << "6. Задание Str24" << endl;
        cout << "7. Задание Str36" << endl;
        cout << "8. Задание Str32" << endl;
        cout << "9. Задание 1" << endl;
        cout << "10. Задание Five7" << endl;
        cout << "11. Выход из программы" << endl;
        cin >> choice;
        switch (choice) {
            case 1: {
                fillFromKeyboard(myString);
                break;
            }
            case 999: {
                cout << "Выход из программы" << endl;
                break;
            }
            default:
                cout << "Введены неверные данные" << endl;
                break;
        }
    } while (choice != 999);
    return 0;
}
//g++ osn4.cpp modul4.cpp -o program.exe
