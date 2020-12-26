#include <iostream>
#include <string>


int main() {
    std::string input;
    std::cout << "User Input: ";
    std::getline(std::cin, input);
    std::cout << "The User Inputted: " << input << std::endl;
    return 0;
}