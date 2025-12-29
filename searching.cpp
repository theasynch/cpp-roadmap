//THIS IS AN IMPORTANT CONCEPT FOR DSA

#include <iostream>
int linearSearch(int arr[], int size, int target);
int main(){

    int numbers[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = sizeof(numbers) / sizeof(numbers[0]); //Calculating size of the array
    int index;
    int myNum;
    
    std::cout << "Enter a number to search in the array: ";
    std::cin >> myNum;

    index = linearSearch(numbers, size, myNum);

    if(index != -1){
        std::cout << "Number found at index: " << index << std::endl;
    } else {
        std::cout << "Number not found in the array." << std::endl;
    }


}

int linearSearch(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i; //Return the index if found
        }
    }
    return -1; //Return -1 if not found. -1 is called a sentinel value.
}