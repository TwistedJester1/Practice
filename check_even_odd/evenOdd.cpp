#include <iostream>
#include <string>


int main() {
    int input;
    std::cout << "Please input a number: ";
    std::cin >> input;
    if(input % 2 == 0) {
        std::cout << "Input is Even" << std::endl;
    } else
    {
        std::cout << "Input is Odd with the Remainder of " << input % 2 << std::endl; 
    }
    return 0;
}