#include <windows.h>

#include <iostream>

using namespace std;

int main() {
    int num;

    cin >> num;
    if (num >= 1 && num <= 100) {
        cout << "Число в диапазоне" << endl;
    } else {
        cout << "Число не в диапазоне" << endl;
    }
}