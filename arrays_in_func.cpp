#include <iostream>

double prices[] = {19.99, 29.99, 4.99, 49.99, 9.99};
int size = sizeof(prices) / sizeof(prices[0]); //Explicitly finding the size of the array and storing it as a global variable
double getTotal(double prices[]);
double getTotalCorrected(double prices[], int size);


int main(){

    double total = getTotal(prices);
    std::cout << "Total price: $" << total << std::endl;
    double totalCorrected = getTotalCorrected(prices, size);
    std::cout << "Total price (corrected): $" << totalCorrected << std::endl;
}


double getTotal(double prices[]){
    double total = 0.0;
    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){
        total += prices[i];
    }
    return total;
}

//Note: The above method of calculating the size of the array inside the function will not work as expected
//because when arrays are passed to functions, they decay to pointers. Within this function, we are not working with an array
//We are working with a pointer to the adress where the array begins i.e the first element of the array.
//So, the function has no idea how big the array is. Therefore we cant calculate how many elements there are in the array.
//Thus, sizeof(prices) will give the size of the pointer, not the actual array. 
//A better approach is to pass the size of the array as an additional parameter.

//Corrected version:

double getTotalCorrected(double prices[], int size){
    double total = 0.0;
    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}