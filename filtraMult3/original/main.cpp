#include <vector>
#include <iostream>

int main (){

void print_multiples_of_3(){
    
    
    std::vector<int> numbers {1,21,4,5,7,3,9,3,5,17,15};

    for(auto& x : numbers ){
        if(x%3 ==0){
            std::cout << x << " ";
        }
    }

}
}