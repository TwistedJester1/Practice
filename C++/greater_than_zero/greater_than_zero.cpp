#include <iostream>


int main() {
    float x;
    std::cout << "Please input a number: ";
    std::cin >> x;
    if(x > 0) {
        std::cout << "The number is greater than zero!!" << std::endl;
    } else
    {
        std::cout << "The number is less than zero!!" << std::endl;
    }
    return 0;
}