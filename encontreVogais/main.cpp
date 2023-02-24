#include <iostream>

void hunt_for_vowels(char message[], unsigned int size){
    

  unsigned int vowel_count{};//Initialized to zero
  


  for(unsigned int i{}; i < size;++i){

    if((message[i] == 'A')||
    (message[i] == 'E')||
    (message[i] == 'I')||
    (message[i] == 'O')||
    (message[i] == 'U')||
    (message[i] == 'a')||
    (message[i] == 'e')||
    (message[i] == 'i')||
    (message[i] == 'o')||
    (message[i] == 'u')){
      ++vowel_count;
    }
  }
 
  std::cout << "The string : " << message << " has " << vowel_count << " vowels";
}

int main(){

char array[7] {'S','a','n','d','r','o'}; // necessário dar 7 posições para não imprimir lixo
int tamanho = sizeof(array);
    hunt_for_vowels(array, tamanho);

    return 0;
}