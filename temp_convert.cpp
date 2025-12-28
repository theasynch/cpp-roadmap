#include <iostream>

//C++ Program to convert temperature between Celsius and Fahrenheit

int main() {
    double celsius, fahrenheit;
    char choice;

    std::cout << "Temperature Converter" << std::endl;
    std::cout << "Choose conversion type:" << std::endl;
    std::cout << "C to F (enter 'C')" << std::endl;
    std::cout << "F to C (enter 'F')" << std::endl;
    std::cin >> choice;

    if (choice == 'C' || choice == 'c') {
        std::cout << "Enter temperature in Celsius: ";
        std::cin >> celsius;
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        std::cout << celsius << "°C is " << fahrenheit << "°F" << std::endl;
    } 
    else if (choice == 'F' || choice == 'f') {
        std::cout << "Enter temperature in Fahrenheit: ";
        std::cin >> fahrenheit;
        celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
        std::cout << fahrenheit << "°F is " << celsius << "°C" << std::endl;
    } 
    else {
        std::cout << "Invalid choice! Please enter 'C' or 'F'." << std::endl;
    }

    return 0;
}