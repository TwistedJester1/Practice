#include <iostream>

// Is the number even or odd check

int main() {
    std::string input;
    std::cout << "Please input a number: ";
    std::cin >> input;

    if(std::stoi(input) % 2 == 0) {
        std::cout << "Check even..." << std::endl;
    }
    else {
        std::cout << "Check is odd..." << std::endl;
    }
    return 0;
}