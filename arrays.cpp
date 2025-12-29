#include <iostream>

int main(){
    //An array is a collection of multiple items in the same variable
    //It is defined as type name[];
    //An array can only contain the same data type as defined
    int numbers[] = {10, 20, 30, 40, 50}; //<----- Only contains integers

    //Elements are accessed from the array using their index starting from 0
    std::cout << "First element: " << numbers[0] << std::endl;
    std::cout << "Second element: " << numbers[1] << std::endl;

    //Elements can be modified by accessing them via their index
    numbers[2] = 100;

    std::cout << "Modified third element: " << numbers[2] << std::endl;


    //Some arrays can be first declared with a size and then initialized later
    int moreNumbers[3]; //Declares an array of 3 integers
    moreNumbers[0] = 5;
    moreNumbers[1] = 15;
    moreNumbers[2] = 25;
    //To print the entire array, we need to loop through it
    for(int i = 0; i < 3; i++){
        std::cout << "moreNumbers[" << i << "]: " << moreNumbers[i] << std::endl;
    }


    //.sizeof can be used to determine the size of an array, variable, class, objects etc. in bytes
    int size = sizeof(numbers) / sizeof(int); //Calculates number of elements by dividing total size by size of one element.
    //We use sizeof(int) because the array is of type int and each element is the same size as an int data type.
    std::cout << "Size of numbers array: " << size << std::endl;

    double gpa = 3.75;
    std::cout << "Size of gpa variable: " << sizeof(gpa) << " bytes" << std::endl;


    //Now we can use this size variable to loop through the array
    for(int i = 0; i < sizeof(numbers)/sizeof(int); i++){
        std::cout << "numbers[" << i << "]: " << numbers[i] << std::endl;
    }



}