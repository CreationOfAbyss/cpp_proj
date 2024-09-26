#include <windows.h>

#include <iostream>

using namespace std;

int main() {
    int num, sum, term;

    cin >> num;

    term = num % 10;
    do {
        sum = num % 10;
        num /= 10;
    } while (num != 0);

    cout << sum + term << endl;
}