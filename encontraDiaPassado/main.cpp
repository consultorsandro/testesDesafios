#include <iostream>

using std::cout, std::cin, std::endl;

/*

    The program prompts the user to type in the current
     day[1 : Monday,...,  7 : Sunday] . .
    We also prompt for a day difference and use that difference
    to hunt for a week day in the past.

    The program has two challenges for you in my opinion
        . Terminating the program before it hits the end of the main function
        . Making sure the day difference it between 0 and 6 for ease of computations

    If you couldn't solve this, please take a closer look at my solution here and make
    sure you learn and master all these little tricks for use in your own programs.

*/


int main(){

    //Prompt for input and grab current day
    cout << "Qual o dia de hoje [1: Monday, ... 7: Sunday] : " << endl;
    int today, days_passed;
    cin >> today;

    // Check if day is valid, only 1, ...,7 are acceptable.
    if ((today < 1) || (today > 7)) {
        cout << today << "is not a valid day. Bye!" << endl;

        return 0;
    }

cout << "How many days have passed up to day: " << endl;
cin >> days_passed;

if (today == 1) {
    cout << "Today is Monday" << endl;
}else if (today == 2 ) {
    cout << "Today is Tuesday" << endl;
    }else if(today == 3){
        cout << "Today is Wednesday" << endl;
    }else if(today == 4){
        cout << "Today is Thursday" << endl;
    }else if(today == 5){
        cout << "Today is Friday" << endl;
    }else if(today == 6){
        cout << "Today is Saturday" << endl;
    }else{
        cout << "Today is Sunday" << endl;
    }

    //Make sure the day difference is between 0 and 6 inclusive
   //for ease of computation
        int normalized_diff = (days_passed % 7);

        int day_in_the_past = today - normalized_diff;

    //If the day in the past happens to be negative, we throw it back
   //in the positive range, again for ease of our logic. This way
   //we can use the same logic to print out the days

    if (day_in_the_past < 0) {
        day_in_the_past += 7;
    }

 //We then print the day in the past
 cout << "If we went " << days_passed << "days is the past we would hit a ";
    if( day_in_the_past == 1){
        cout << "Monday" << endl;
    }else if(day_in_the_past == 2){
        cout << "Tuesday" << endl;
    }else if(day_in_the_past == 3){
        cout << "Wednesday" << endl;
    }else if(day_in_the_past == 4){
        cout << "Thursday" << endl;
    }else if(day_in_the_past == 5){
        cout << "Friday" << endl;
    }else if(day_in_the_past == 6){
        cout << "Saturday" << endl;
    }else{
        cout << "Sunday" << endl;
    }


    return 0;
}