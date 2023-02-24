#include <iostream>
/*
    The program below prompts the user to input a value and checks whether the value is even or odd, and prints
    messages accordingly
*/

int main(){

    std::cout << "Please type in an integral value : " << std::endl;
    int value;
    std::cin >> value;
    if((value %2) == 0){ // Check for odd or even values with the modulus operator. Mark
                         // this somewhere in your mind, it'll come up fairly often in the course going forward.
        std::cout << value << " is even" << std::endl;
    }else{
        std::cout << value << " is odd" << std::endl;
    }

    return 0;
}