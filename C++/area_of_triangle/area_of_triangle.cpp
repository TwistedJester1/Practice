#include <iostream>

// Area of a triangle
// Equation: A = base * height / 2

int main() {
    float base, height, area;
    std::cout << "Please input the triangle base: ";
    std::cin >> base;
    std::cout << "Please input the triangle height: ";
    std::cin >> height;
    area = (base * height) / 2;
    std::cout << "The area of the triangle is: " << area << std::endl; 
    return 0;
}