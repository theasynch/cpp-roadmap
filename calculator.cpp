#include <iostream>
#include <cmath>
//C++ Program for a console base calculator
int main() {
    char op;
    double num1, num2, result;

    std::cout << "Enter operator (+, -, *, /, p, s): ";
    std::cin >> op;

    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch(op) {
        case '+':
            result = num1 + num2;
            std::cout << num1 << " + " << num2 << " = " << result << std::endl;
            break;
        case '-':
            result = num1 - num2;
            std::cout << num1 << " - " << num2 << " = " << result << std::endl;
            break;
        case '*':
            result = num1 * num2;
            std::cout << num1 << " * " << num2 << " = " << result << std::endl;
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                std::cout << num1 << " / " << num2 << " = " << result << std::endl;
            } else {
                std::cout << "Error: Division by zero!" << std::endl;
            }
            break;
        case 'p': // for power
            result = std::pow(num1, num2);
            std::cout << num1 << " raised to the power " << num2 << " = " << result << std::endl;
            break;
        case 's': // for square root
            if(num1 >= 0) {
                result = std::sqrt(num1);
                std::cout << "Square root of " << num1 << " = " << result << std::endl;
            } else {
                std::cout << "Error: Cannot compute square root of a negative number!" << std::endl;
            }
            break;
        default:
            std::cout << "Error: Invalid operator! Enter either (+, -, *, /, p, s)" << std::endl;
            break;
    }

    return 0;
}