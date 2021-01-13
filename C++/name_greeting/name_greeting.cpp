#include <iostream>


int main() {
    std::string name;
    std::cout << "Please tell me what is your name: ";
    std::cin >> name;
    std::cout << "Well, hello there " << name << "." << std::endl;
    return 0;
}