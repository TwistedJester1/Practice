#include <iostream>

// Check if two numbers is less or greater than 100

int main() {
    float x, y, sum;
    std::cout << "Please input a number: ";
    std::cin >> x;
    std::cout << "Please input another number: ";
    std::cin >> y;
    sum = x + y;
    if(sum > 100) {
        std::cout << "The sum is greater than 100!" << std::endl;
    } else
    {
        std::cout << "The sum is less than 100!" << std::endl;
    }
    return 0;
}