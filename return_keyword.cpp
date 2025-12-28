#include <iostream>
void somefunc();
int add_num(int a, int b);
int main(){
    int a = 10;
    int b = 20;
    int sum = add_num(a, b);
    std::cout << "The sum of " << a << " and " << b << " is: " << sum << std::endl;
    somefunc();
}
//Normal functions that return nothing have a return type of void
void somefunc(){
    std::cout << "This is some function." << std::endl;
}

//But functions can also return values and have a return type of the data type being returned
int add_num(int a, int b){
    return a + b; //Return the sum of a and b
}