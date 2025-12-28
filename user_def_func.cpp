#include <iostream>

//This function is declared and defined before the main function
void myfunc(){
    std::cout << "This is a user-defined function." << std::endl;
}

//These functions are declared first and defined after the main function
void newfunc();
void func1(std::string name);
void voting_chk(int age);

int main(){
    myfunc();
    newfunc();
    func1("Alice");
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    voting_chk(age);
    return 0;
}

void newfunc(){
    std::cout << "This is another user-defined function defined after main." << std::endl;
}

void func1(std::string name){
    std::cout << "Hello, " << name << "! This function takes a string parameter." << std::endl;
}

void voting_chk(int age){
    if(age >= 18){
        std::cout << "You are eligible to vote." << std::endl;
    } else {
        std::cout << "You are not eligible to vote." << std::endl;
    }
}