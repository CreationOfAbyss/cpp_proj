#include <iostream>

int main() {
    int number;

    std::cin >> number;
    if (number < 0) {
        std::cout << "Отрицательное";
    } else {
        std::cout << "Не отрицательное";
    }
    return 0;
}
