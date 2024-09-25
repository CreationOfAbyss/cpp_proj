#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);

    wstring word;

    wcin >> word;

    if (word.size() > 0 && word[word.size() - 1] == L'ь') {
        wcout << word[word.size() - 2];
    } else {
        wcout << word[word.size() - 1];
    }

}
