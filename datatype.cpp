#include <iostream>

int main(){
    //Understanding different data types
    int num = 22; //Integer data type (Whole numbers)
    double decimal = 3.14; //Double data type (Floating point numbers)
    char character = 'A'; //Character data type (Single characters)
    bool boolean = true; //Boolean data type (True or False)
    float floatingPoint = 5.67f; //Float data type (Single precision floating point numbers)
    std::string text = "C++17 Data Types"; //String data type (Sequence of characters)

    //Printing the values and their types
    std::cout << "Integer: " << num << std::endl;
    std::cout << "Double: " << decimal << std::endl;
    std::cout << "Character: " << character << std::endl;
    std::cout << "Boolean: " << std::boolalpha << boolean << std::endl; //Use std::boolalpha to print boolean as "true/false"
    std::cout << "Float: " << floatingPoint << std::endl;
    std::cout << "String: " << text << std::endl;

    //Concept of const

    const int CONSTNUM = 100; //const keyword prevents the variable from being modified throughout the program
    std::cout << "Constant Integer: " << CONSTNUM << std::endl;
    return 0;

}