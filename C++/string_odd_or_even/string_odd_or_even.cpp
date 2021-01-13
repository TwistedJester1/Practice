#include <iostream>


int main() {
    std::string input;
    int count;
    std::cout << "Please input a string: ";
    std::cin >> input;
    count = input.length();
    if(count % 2 == 0) {
        std::cout << "The string is even!" << std::endl;
    } else
    {
        std::cout << "The string is odd!" << std::endl;
    }
    return 0;
}