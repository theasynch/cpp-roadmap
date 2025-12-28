#include <iostream>

int main() {
    //Logical operators in C++ are the same as in JAVA
    //&& for AND, || for OR, ! for NOT, == for equality

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

    bool sunny = true;

    sunny ? std::cout << "It's a sunny day!" << std::endl : std::cout << "It's not sunny today." << std::endl;
    //Similar to python, ternary operator doesn't need explicit conditions for bool data type in C++
    //if sunny:
    //  print("It's a sunny day!")

    if (sunny || temp>20){ //bool data types also dont need to be checked by equality operator
        std::cout << "It's a warm sunny day!" << std::endl;
    }
    else{
        std::cout << "It's either not sunny or not warm." << std::endl;
    }

    return 0;

}