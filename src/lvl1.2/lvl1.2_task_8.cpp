#include <windows.h>

#include <iostream>

using namespace std;

int main() {
    int num;

    cin >> num;
    if (num >=10 && num < 100) {
        cout << "Число двузначное" << endl;
    } else {
        cout << "Число не двузначное" << endl;
    }
}