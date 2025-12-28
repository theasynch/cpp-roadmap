#include <iostream>

//Some usefule string methods
//Get more methods at https://cplusplus.com/reference/string/string/

int main() {
    using std::string;

    string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    //length() - returns the length of the string
    if(name.length()>12){
        std::cout << "Your name cannot be more than 12 characters long." << std::endl;

    }
    //empty() - checks if the string is empty
    else if(name.empty()){
        std::cout << "Name cannot be empty!" << std::endl;
    }
    else{
        std::cout << "Name is valid" << std::endl;
    }

    //clear() - clears the string content
    name.clear(); 
    std::cout << "Name after clear(): '" << name << "'" << std::endl;

    //append(string) - appends a string to the end
    name.append("John Doe");
    std::cout << "Name after append(): " << name << std::endl;

    //at(index) - access character at specific index
    //Similar to name[index] but with bounds checking
    std::cout << "Character at index 2: " << name.at(2) << std::endl;

    //insert(position, string) - inserts a string at a specific index
    name.insert(5, "Smith ");
    std::cout << "Name after insert(): " << name << std::endl;

    //find(string) - finds a substring and returns its index
    std::cout << name.find("Smith");

    //erase(from_position, size) - removes a portion of the string
    name.erase(5, 6); // removes "Smith "
    std::cout << "\nName after erase(): " << name << std::endl;


}