#include <iostream>

// Return the remainder of two numbers

int main() {
    int x, y;
    std::cout << "Please enter a number: ";
    std::cin >> x;
    std::cout << "Please enter another number: ";
    std::cin >> y;
    std::cout << "The remainder of the two numbers is: " << (x % y) << std::endl;
    return 0;
}