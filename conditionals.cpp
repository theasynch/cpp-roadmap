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

    //Understanding switch-case statements
    //They are used as alternatives to multiple else if statements

    switch(marks/10){
        case 10: //If not break is used, it will continue executing the next cases
        case 9:
            std::cout << "Grade (from switch): A" << std::endl;
            break;
        case 8:
            std::cout << "Grade (from switch): B" << std::endl;
            break;
        case 7:
            std::cout << "Grade (from switch): C" << std::endl;
            break;
        case 6:
            std::cout << "Grade (from switch): D" << std::endl;
            break;
        default:
            std::cout << "Grade (from switch): F" << std::endl;
    }
}