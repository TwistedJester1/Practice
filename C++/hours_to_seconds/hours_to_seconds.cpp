#include <iostream>

// Hours to seconds

int main() {
    float hours, seconds;

    std::cout << "Please input hours: ";
    std::cin >> hours;
    seconds = hours * 3600;
    std::cout << "There are " << seconds << " seconds" << " in " << hours << " hours" << std::endl;
    return 0;
}