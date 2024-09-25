#include <iostream>

using namespace std;

int main() {
    string word_1, word_2;

    cin >> word_1 >> word_2;
    if (word_1[0] == word_2[0]) {
        cout << "Yes" << endl;
    } else {
        cout << "No";
    }
    return 0;
}