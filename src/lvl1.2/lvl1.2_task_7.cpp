#include <windows.h>

#include <iostream>

using namespace std;

int main() {
    wstring str1, str2;

    wcin >> str1 >> str2;

    if (str1[0] == str2[0]) {
        cout << "Первые символы одинаковые" << endl;
    } else {
        cout << "Первые символы разные" << endl;
    }
}