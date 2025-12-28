#include <iostream>
#include <cmath> //Include cmath for math functions

/*
For more functions and references visit: http://cplusplus.com/reference/cmath
*/

int main(){
    //Some useful math functions in C++ standard library

    double x = 4;
    double y = 2.5;
    double z;

    z = std::max(x, y); //Returns the maximum of x and y
    std::cout << "Maximum of " << x << " and " << y << " is: " << z << std::endl;

    z = std::min(x, y); //Returns the minimum of x and y
    std::cout << "Minimum of " << x << " and " << y << " is: " << z << std::endl;

    z = std::pow(x, y); //Returns x raised to the power y
    std::cout << x << " raised to the power " << y << " is: " << z << std::endl;

    z = std::sqrt(x); //Returns the square root of x
    std::cout << "Square root of " << x << " is: " << z << std::endl;  

    z = std::abs(-x); //Returns the absolute value of x
    std::cout << "Absolute value of " << -x << " is: " << z << std::endl;

    z = std::round(y); //Rounds y to the nearest integer
    std::cout << y << " rounded to nearest integer is: " << z << std::endl;

    z = std::ceil(y); //Rounds y up to the nearest integer
    std::cout << y << " rounded up to nearest integer is: " << z << std::endl;

    z = std::floor(y); //Rounds y down to the nearest integer
    std::cout << y << " rounded down to nearest integer is: " << z << std::endl;



    return 0;
}