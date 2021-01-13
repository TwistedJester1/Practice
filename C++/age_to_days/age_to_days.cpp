#include <iostream>


// Cover Age into Days (No Leap Year)

int main() {
    int age, days;
    std::cout << "Please input your age: ";
    std::cin >> age;
    days = age * 365;
    std::cout << "You are " << days << " days old" << std::endl;
    return 0;
}