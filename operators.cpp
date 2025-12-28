#include <iostream>

int main() {
    int num = 15;

    num = num-1;  //Substracts 1 from num
    num-=1; //Shorthand for num = num - 1
    num--; //Decrement operator, subtracts 1 from num used for instant deprecation by 1

    std::cout << "The final value of num is: " << num << std::endl;

    //Similarly for addition
    num = num + 5; //Adds 5 to num
    num += 5; //Shorthand for num = num + 5
    num++; //Increment operator, adds 1 to num

    //Similarly for multiplication
    num = num * 2; //Multiplies num by 2
    num *= 2; //Shorthand for num = num * 2

    //Similarly for division
    num = num / 3; //Divides num by 3
    num /= 3; //Shorthand for num = num / 3

    std::cout << "The final value of num after various operations is: " << num << std::endl;

    //Similarly for modulus 
    num = num % 4; //Finds remainder when num is divided by 4
    num %= 4; //Shorthand for num = num % 4

    std::cout << "The final value of num after modulus operation is: " << num << std::endl;

    return 0;
}