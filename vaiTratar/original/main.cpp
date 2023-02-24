/*
    There's a medical treatment that only applies to people whose age is greater
    than 20 and less than 40.
    The program prompts the user for age input. The program then checks whether
    the age is within the range [21,39]. We then print out messages saying whether
    the user is eligible for a medical treatment.

*/
#include <iostream>

int main(){

    std::cout << "Please type in your age : " << std::endl;
    int age;
    std::cin >> age;

    if(age > 20){
        if(age <40){
            std::cout << "You are eligible for the treatment" << std::endl;
        }else{
            std::cout << "Sorry you are too old for the treatment" << std::endl;
        }
    }else{
        std::cout << "Sorry, you are too young for the treatment" << std::endl;
    }

    return 0;
}