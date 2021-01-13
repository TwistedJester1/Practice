#include <iostream>

// Find the Perimeter of a Rectangle
// Equation: u = 2(a + b)
int main() {
    float long_sides, short_sides, perimeter;
    std::cout << "Please input the long side length: ";
    std::cin >> long_sides;
    std::cout << "Please input the short side length: ";
    std::cin >> short_sides;
    perimeter = 2 * (long_sides + short_sides);
    std::cout << "The perimeter of the rectangle is " << perimeter << std::endl;
    return 0;
}