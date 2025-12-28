#include <iostream>

int main(){
    //Ternary operators are like one line if-else statements from python

    /*  Example:
    marks = int(input("Enter your marks: "))
    result = "Pass" if marks >= 40 else "Fail" <---- equivalent of ternary operator in python    */

    /* Syntax of a ternary operator in C++:
    condition ? expression_if_true : expression_if_false; */


    int marks;
    std::cout << "Enter your marks: ";
    std::cin >> marks;
    marks >=50 ? std::cout << "You passed the exam. "  : std::cout << "You failed the exam. ";
    std::string grade = (marks >= 40) ? "A" : "F"; //Assigning value using ternary operator
    std::cout << "Your grade is " << grade;

}