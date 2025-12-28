#include <iostream>
namespace first{
    int x = 0;
}
namespace second{
    int x = 10;
}
int main() {
    int x = 1;
    std::cout << x << std::endl;          // Outputs 1 (local variable)
    std::cout << first::x << std::endl;   // Outputs 0 (namespace first variable)
    std::cout << second::x << std::endl;  // Outputs 10 (namespace second variable)

    //"using" keyword is used to avoid redundant typing
    using std::string; 
    string greeting = "Hello, Namespaces!";

    using std::cout;
    cout << greeting << std::endl;


    return 0;
}
