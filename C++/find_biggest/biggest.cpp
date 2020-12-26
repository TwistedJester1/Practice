#include <iostream>
#include <string>


int main() {
    int x1 = 0, x2 = 0, x3 = 0;
    std::cout << "First Input: ";
    std::cin >> x1;

    std::cout << "First Input: ";
    std::cin >> x2;

    std::cout << "First Input: ";
    std::cin >> x3;

    if(x1 > x2 && x1 > x3) {
        std::cout << x1 << " is the largest number" << std::endl;
    } else if (x2 > x1 && x2 > x3)
    {
        std::cout << x2 << " is the largest number" << std::endl;
    } else if (x3 > x1 && x3 > x2) {
        std::cout << x3 << " is the largest number" << std::endl;
    } else
    {
        std::cout << "There is no larger number!" << std::endl;
    }
    return 0;
}