#include <iostream>

//Prgogram that simulates a simple bank account system

void showBalance(double balance);
double deposit();
double withdraw(double balance);    

int main(){
    double balance = 0.0;
    int choice;

    do {
        std::cout << "\nBank Account Menu:\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit\n";
        std::cout << "3. Withdraw\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch(choice){
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance = withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                std::cout << "Exiting the program. Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while(choice != 4);

    return 0;
}

void showBalance(double balance){
    std::cout << "Current Balance: $" << balance << std::endl;
}

double deposit(){
    double amount;
    std::cout << "Enter amount to deposit: $";
    std::cin >> amount;
    if(amount > 0){
        std::cout << "Deposited: $" << amount << std::endl;
        return amount;
    } else {
        std::cout << "Invalid deposit amount." << std::endl;
        return 0.0;
    }
}

double withdraw(double balance){
    double amount;
    std::cout << "Enter amount to withdraw: $";
    std::cin >> amount;
    if(amount > 0 && amount <= balance){
        std::cout << "Withdrew: $" << amount << std::endl;
        return balance - amount;
    } else if(amount > balance){
        std::cout << "Insufficient funds." << std::endl;
        return balance;
    } else {
        std::cout << "Invalid withdrawal amount." << std::endl;
        return balance;
    }
}