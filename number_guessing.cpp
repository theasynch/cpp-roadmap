#include <iostream>

int main(){
    //Program for a random number guessing game
    srand(time(NULL));
    int target = rand() % 100 + 1; // Random number between 1 and 100
    int guess = 0;
    int attempts = 0;
    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have selected a number between 1 and 100. Can you guess it?" << std::endl;
    while(guess != target){
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;
        if(guess < target){
            std::cout << "Too low! Try again." << std::endl;
        } else if(guess > target){
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You've guessed the number " << target << " in " << attempts << " attempts." << std::endl;
        }
    }
    return 0;
}