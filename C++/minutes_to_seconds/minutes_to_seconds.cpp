#include <iostream>


int main() {
    float input;
    std::cout << "Please input minutes: ";
    std::cin >> input;
    float seconds = input * 60;
    std::cout << "There are " << seconds << " seconds" << " in " << input << std::endl;
    return 0;
}