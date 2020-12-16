#include <iostream>
#include <string>



int main() {
    int number1, number2, remainder;
    std::cout << "Number 1: ";
    std::cin >> number1;

    std::cout << "Number 2: ";
    std::cin >> number2;

    std::cout << "Divided: " << number1 / number2 << std::endl;
    std::cout << "Remainer: " << number1 % number2 << std::endl;
    return 0;
}