#include <windows.h>

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);

    int num;
    string str;

    cin >> num;
    str = to_string(num);
    cout << str << endl;
}