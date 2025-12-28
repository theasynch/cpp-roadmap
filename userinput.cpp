#include <iostream>
//cout << (insertion operator) is used to print output to the console
//cin >> (extraction operator) is used to take input from the user
int main() {

    using std::string;
    using std::cout;
    using std::cin;


    string name;
    cout << "Enter your name: "; //Prompting user for input
    cin >> name; //Taking input from user
    cout << "Hello, " << name <<std::endl;

    int age;
    cout << "Enter your age: "; //Prompting user for input
    cin >> age; //Taking input from user
    cout << "You are " << age << " years old.";

    //How to take full line input to avoid issues with spaces
    string full_name;
    cout << "\nEnter your full name: ";
    std::getline(cin >> std::ws, full_name); //Taking full line input including spaces
    //std::ws is used to consume any leading whitespace characters
    cout << "Your full name is: " << full_name << std::endl;
}