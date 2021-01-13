#include <iostream>

// Get the Area of a Rectangle
// 
int main() {
    float length, width, area;
    std::cout << "Please input the length: ";
    std::cin >> length;
    std::cout << "Please input the width: ";
    std::cin >> width;
    area = (length * width);
    std::cout << "The area of the rectangle is: " << area << std::endl;
    return 0;
}