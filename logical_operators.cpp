#include <iostream>

int main() {
    //Logical operators in C++ are the same as in JAVA
    //&& for AND, || for OR, ! for NOT

    bool a = true;
    bool b = false;

    std::cout << "a AND b: " << (a && b) << std::endl; // false
    std::cout << "a OR b: " << std::boolalpha << (a || b) << std ::endl;  // true 
    //Also using boolalpha to print boolean values as true/false after above line.
    std::cout << "NOT a: " << (!a) << std::endl;        // false
    std::cout << "NOT b: " << (!b) << std::endl;        // true

    int temp;
    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if(temp>0 && temp<30){
        std::cout << "The weather is pleasant." << std::endl;
    }
    else if(temp>=30 && temp<=40){
        std::cout << "The weather is a bit warm." << std::endl;
    }

    else{
        std::cout << "The weather is extreme." << std::endl;
    }


}