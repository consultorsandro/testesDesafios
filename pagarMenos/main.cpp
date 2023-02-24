#include <iostream>
#include <vector>

void pay_less(){
    
    std::vector<double> unit_prices {10.4,21.5,14.0,15.2,7.9};
    std::vector<int> number_of_items{60,20,10,30,20,50};

    
    double least_cost{999999};

    unsigned int count{0};
    while(count < 5){
        if((unit_prices[count] * number_of_items[count]) < least_cost){
            least_cost = unit_prices[count] * number_of_items[count];
        }
        ++count;
    }

}

int main(int argc, char **argv)
{
    std::vector<double> unit_price {10.4,21.5,14.0,15.2,7.9};
    std::vector<double> number_of_items{60,20,10,30,20,50};
    //At this moment, you don't need to worry about the code Above, just think of it as a way to set up 
    // our two collections in C++

     pay_less();
     
    //Please try to change the indexes within the [ ] in code below and see which data prints out 
    std::cout << "price : " <<  unit_price[0] << std::endl;
    std::cout << "how many items : " << number_of_items[0] << std::endl;





    return 0;
}