#include <iostream>

int main(){

    srand(time(NULL));

    int num = rand() % 100; //Generate a random number between 0 and 99
    std::cout << "Random number between 0 and 99: " << num << std::endl;
}