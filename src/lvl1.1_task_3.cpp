#include <windows.h>

#include <iostream>

using namespace std;

int main() {
    SetConsoleCP(1251);        //Меняет кодировку ввода с консоли
    SetConsoleOutputCP(1251);  //Меняет кодировку вывода в консоль

    string text;

    cin >> text;

    cout << text[text.size() - 1] << endl;  //Не выводит русские буквы ыаыаыааы
}