#include <iostream>

int main(){
    /*
    
        while(true){
        std::cout << "This will print indefinitely until interrupted." << std::endl;
    }

    */


    //Program to print numbers from 0 to 9 using a while loop
    int i = 0;
    while(i<10){
        std::cout << i << std::endl;
        i++;
    }

    //Program to print even numbers from 0 to 20 using a for loop
    for(int j=0; j<=10; j++){
        std::cout << "2*" << j << "=" << 2*j << std::endl;

    }

    //Explain the do-while loop
    int k = 0;
    do{
        std::cout << "Value of k is: " << k << std::endl;
        k++;
    }while(k<5);
    

    //break and continue statements
    for(int m=0; m<10; m++){
        if(m==5){
            // The break statement will exit the loop when m equals 5
            break;
        }
        if(m%2==0){
            // The continue statement will skip the rest of the loop body for even numbers
            continue;
        }
        std::cout << "Odd number: " << m << std::endl;
    }

    //Nested loops example: Print a grid of symbols
    int rows, columns;
    char symbol;
    std::cout << "Enter number of rows: ";
    std::cin >> rows;
    std::cout << "Enter number of columns: ";
    std::cin >> columns;
    std::cout << "Enter a symbol to print: ";
    std::cin >> symbol;
    
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=columns; j++){
            std::cout << symbol;
        }
        std::cout << std::endl;
    }


    //for-each loop
    int arr[] = {1, 2, 3, 4, 5};
    for(int num : arr){
        std::cout << "Array element: " << num << std::endl;
    }

    //A for-each loop is used to iterate over elements in a collection (like an array) 
    //without needing to manage an index variable.
    //Syntax:
    //for(data_type variable : collection){SOME_CODE_HERE}
    return 0;

}