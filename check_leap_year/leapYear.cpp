#include <iostream>
#include <string>



int main() {
    int year;
    std::cout << "Please Input the Year: ";
    std::cin >> year;

    if(year % 4 != 0) {
        std::cout << "It's a common year!!" << std::endl;
    } else if (year % 100 != 0) {
        std::cout << "It's a leap year!!" << std::endl;
    } else if(year % 400 != 0) {
        std::cout << "It's a common year!!" << std::endl;
    } else
    {
        std::cout << "It's a leap year!!" << std::endl;
    }
    return 0;
}