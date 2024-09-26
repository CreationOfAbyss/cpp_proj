#include <windows.h>

#include <iostream>

using namespace std;

int main() {
    int num, out;

    cin >> num;

    do {
        out = num % 10;
        num /= 10;
    } while (num != 0);

    cout << out << endl;
}