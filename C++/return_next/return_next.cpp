#include <iostream>

// Return the next number of input

int main() {
    std::string input;
    std::cout << "Please input a number: ";
    std::cin >> input;
    std::cout << "The next number is: " << (std::stoi(input) + 1) << std::endl;
    return 0;
}