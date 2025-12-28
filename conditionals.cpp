#include <iostream>

int main() {

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    //Similar to JAVA syntax for conditionals
    if(age>=18){
        std::cout << "You are an adult." << std::endl;
    }
    else{
        std::cout << "You are a minor." << std::endl;
    }


    int marks;
    std::cout << "Enter your marks: ";
    std::cin >> marks;

    if(marks >= 90){
        std::cout << "Grade: A" << std::endl;
    }
    else if(marks >= 80){
        std::cout << "Grade: B" << std::endl;
    }
    else if(marks >= 70){
        std::cout << "Grade: C" << std::endl;
    }
    else if(marks >= 60){
        std::cout << "Grade: D" << std::endl;
    }
    else{
        std::cout << "Grade: F" << std::endl;
    }
}