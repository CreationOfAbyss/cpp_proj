#include <windows.h>

#include <iostream>

using namespace std;

int main() {
    int num, term;

    cin >> num;
    do {
        term += 1;
        num /= 10;
    } while (num != 0);

    cout << term << endl;
}