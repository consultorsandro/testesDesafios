#include <iostream>

void common_elements(int array_1[], int array_2[]){

  unsigned int common_count{};
  int common_data[10];

  for(unsigned int i{}; i < 10; ++i){

    for(unsigned int j{}; j < 10; ++j){

      if(array_1[i]== array_2[j]){
        common_data[common_count++] = array_1[i];
        break;
      }

    }

  }

  std::cout << "There are " << common_count << " common elements";
  
  if(common_count != 0){

    std::cout << " they are : ";
    for(unsigned int i{} ; i < common_count; ++i){
    std::cout << common_data[i] << " ";
    }
  }

}

int main(){

int exemplo_1 [] {1,2,3,4,5,6};
int exemplo_2 [] {4,5,6,7,8,9};

    common_elements(exemplo_1, exemplo_2);

    return 0;
}