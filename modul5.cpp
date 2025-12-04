#define _HAS_STD_BYTE 0
#define NOMINMAX
#include "laura5.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>

using namespace std;

string vvodfile(string filename) {
    ifstream file(filename);
    string name;
    if (file.is_open()) {
        file >> name;
        file.close();
        cout << "Строка заполнена из файла!" << endl;
        cout << "Ваша строка: " ;
        cout << name;
        return name;
    }
    else {
        return "Error: файл не открывается";
    }
    
}

void fillFromKeyboard(string& str) {
    clearString(str);
    cout << "Введите строку: ";
    cin.ignore(); //очищаем буфер обмена
    getline(cin, str);
    cout << "Строка заполнена с клавиатуры!" << endl;
}



void printString(const string& str) {
    if (str.empty()) {
        cout << "Строка пуста!" << endl;
        return;
    }
    cout << "Строка: " << str << endl;
}



void clearString(string& str) {
    str.clear();
    cout << "Строка очищена!" << endl;
}


bool fillFromFile(string& str, const string& filename) {
    clearString(str);
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Ошибка открытия файла!" << endl;
        return false;
    }
    string line;
    while (getline(file, line)) {
        str += line;
    }
    file.close();
    cout << "Строка загружена из файла!" << endl;
    return true;
}