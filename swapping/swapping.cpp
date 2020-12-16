#include <iostream>
#include <string>


int main() {
    int a, b, temp;
    a = 10;
    b = 42;
    std::cout << "Before Swapping" << std::endl;
    std::cout << "A is " << a << std::endl;
    std::cout << "B is " << b << std::endl;

    temp = a;
    a = b;
    b = temp;

    std::cout << "After Swapping" << std::endl;
    std::cout << "A is " << a << std::endl;
    std::cout << "B is " << b << std::endl;

    return 0;
}