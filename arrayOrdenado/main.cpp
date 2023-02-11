//Testa se um array está ordenado NÃO TERMINADO!!!
#include <iostream>

using std::cout, std::endl;

bool is_collection_sorted(int numbers[], unsigned int collection_size){

  bool sorted{true}; // Assume the collection is sorted from the start

  for(unsigned int i{}; i < collection_size;++i){
    if(i == 0){
      continue;
    }

    //If we spot an element not greater than its predecessor, 
    // we immediately flag the collection as not sorted.
    if(!(numbers[i] > numbers[i-1])){
      sorted = false;
      break;
    }

  }

  return sorted;
}



int main(){

int arrayDesordenado [] {100,23,1,5,12,40};
unsigned int tamanho{};
bool info{};

info = is_collection_sorted(arrayDesordenado, tamanho);// ERRO SAÍDA SEMPRE TRUE

cout << "Se o array está ordenado: " << std::boolalpha << info << endl;

    return 0;
}