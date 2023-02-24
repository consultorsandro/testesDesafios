#include <vector>
#include <iostream>

using std::cout, std::endl;

void print_multiples_of_3(){
     
std::vector<int> numbers {1,21,4,5,7,3,9,3,5,17,15};

    for(auto& x : numbers ){ // esta estrutura C++17 itera sobre todo o array
        if(x%3 ==0){
            std::cout << x << " ";
        }
    }

}

int main (){

cout << "Os multiplos de 3 no array sao: ";
print_multiples_of_3();



return 0;

}