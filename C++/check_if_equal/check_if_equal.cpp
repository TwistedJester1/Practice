#include <iostream>

// Check if two numbers are equal

int main() {
    float x, y;
    std::cout << "Please input a number: ";
    std::cin >> x;
    std::cout << "Please input another number: ";
    std::cin >> y;
    if(x == y) {
        std::cout << "The numbers are equal!" << std::endl;
    }
    else {
        std::cout << "The numbers are not equal!" << std::endl;
    }
    return 0;
}