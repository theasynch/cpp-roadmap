#include <iostream>
#include <cmath>

/*
Program to take user input and calculate the hypotenuse of a right-angled triangle
*/


int main() {
    double a;
    double b;

    std::cout << "Enter the length of side a: ";
    std::cin >> a;
    std::cout << "Enter the length of side b: ";
    std::cin >> b;

    // Calculate the hypotenuse using std::hypot
    double c = std::hypot(a, b);

    std::cout << "The length of the hypotenuse is: " << c << std::endl;

    return 0;
}