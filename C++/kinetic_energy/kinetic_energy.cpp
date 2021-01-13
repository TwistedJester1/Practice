#include <iostream>
#include <cmath>
// Calculates the Kinetic Energy
// Equation: KE = 1/2mv^2

int main() {
    float kineticEnergy, mass,velocity;
    std::cout << "Please enter the mass: ";
    std::cin >> mass;
    std::cout << "Please enter the velocity: ";
    std::cin >> velocity;
    kineticEnergy = (.5 * mass * pow(velocity, 2));
    std::cout << "The Kinetic Energy is: " << kineticEnergy << " Joules" << std::endl;
    return 0;
}