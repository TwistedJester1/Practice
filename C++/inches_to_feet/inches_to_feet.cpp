#include <iostream>

// Convert Inches to Feet

int main() {
    float inches, feet;
    std::cout << "Please input Inches: ";
    std::cin >> inches;
    feet = inches / 12;
    if(feet == 1) {
        std::cout << "12 inches is 1 foot " << std::endl;
    } else
    {
        std::cout << inches << " inches is " << feet << " feet" << std::endl; 
    }
    return 0;
}