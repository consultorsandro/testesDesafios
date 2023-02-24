#include <iostream>

/*

    The program prompts the user to type in the current
     day[1 : Monday,...,  7 : Sunday] . .
    if the day is valid we'll print a message like
        Today is Monday, let's have some fun
    if the day is not within the valid range [1,7], we print 
    and error message and kill the program.

*/

int main(){

    //Prompt for input and grab current day
    std::cout << "Which day is today [1 : Monday,...,  7 : Sunday] : " << std::endl;
    int today;
    std::cin >> today;

    //Check if day is valid, only 1,...,7 are acceptable
    if((today< 1 )|| (today > 7)){
        std::cout << today << " is not a valid day. Bye!" << std::endl;
        return 0 ; // Kill the program before it hits the end of the main function
                    // because at this point we have no more to do.
    }

    if(today == 1){
        std::cout << "Today is Monday." ;
    }else if(today == 2){
        std::cout << "Today is Tuesday.";
    }else if(today == 3){
        std::cout << "Today is Wednesday.";
    }else if(today == 4){
        std::cout << "Today is Thursday.";
    }else if(today == 5){
        std::cout << "Today is Friday." ;
    }else if(today == 6){
        std::cout << "Today is Saturday." ;
    }else{
        std::cout << "Today is Sunday.";
    }

    std::cout << "Let's have some fun."  << std::endl;

    return 0;
}