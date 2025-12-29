#include <iostream>

//Simple Rock Paper Scissors Game

void rps_game();
int main(){
    rps_game();
    return 0;
}
void rps_game(){
    std::string player1, player2;
    std::cout << "Enter name of Player 1: ";
    std::cin >> player1;
    std::cout << "Enter name of Player 2: ";
    std::cin >> player2;

    std::string choice1, choice2;
    std::cout << player1 << ", enter your choice (rock, paper, scissors): ";
    std::cin >> choice1;
    std::cout << player2 << ", enter your choice (rock, paper, scissors): ";
    std::cin >> choice2;

    if(choice1 == choice2){
        std::cout << "It's a tie!" << std::endl;
    } else if((choice1 == "rock" && choice2 == "scissors") ||
              (choice1 == "paper" && choice2 == "rock") ||
              (choice1 == "scissors" && choice2 == "paper")){
        std::cout << player1 << " wins!" << std::endl;
    } else {
        std::cout << player2 << " wins!" << std::endl;
    }
}