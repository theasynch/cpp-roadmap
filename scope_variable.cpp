#include <iostream>

//This is a global variable it is assigned outside of all functions and is accessible by all functions
int myNum = 42;

int main(){
    int myNum = 10; //This is a local variable it is assigned inside the main function and is only accessible within this function
    std::cout << "The value of the local variable myNum is: " << myNum << std::endl;
    std::cout << "The value of the global variable myNum is: " << ::myNum << std::endl;
    //:: is known as the scope resolution operator and is used to access the global variable when there is a local variable with the same name
    somefunc();
    return 0;
}

//Functions by default first try to acess a local variable with the same name before accessing a global variable
void somefunc(){
    int myNum = 20; //Local variable
    std::cout << "The value of myNum inside somefunc is: " << myNum << std::endl; //This will access the local variable myNum
    std::cout << "The value of myNum inside somefunc is: " << ::myNum << std::endl; //This will access the global variable myNum
    //But this function cannot access the variable defined in main as it is out of scope
}