#include <iostream>

int main() {
    std::string input;
    std::cout << "Please input a string... or don't!: ";
    std::getline(std::cin, input);
    if(input.empty()) {
        std::cout << "The string is empty!" << std::endl;
    } else
    {
        std::cout << "The string is not empty!" << std::endl;
        std::cout << "Contents: " << input << std::endl;
    }
    return 0;
}