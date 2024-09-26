#include <windows.h>

#include <iostream>

using namespace std;

int main() {
    int num;

    cin >> num;
    if (num % 2 == 0) {
        cout << "Четное" << endl;
    } else {
        cout << "Нечетное" << endl;
    }
}