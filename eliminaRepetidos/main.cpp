//NÃO CONCLUÍDO!
#include <iostream>

void unique_numbers( int numbers[], unsigned int collection_size){
    
    
   //The array that is going to store unique data  
   int unique_data [20];


   unsigned int unique_counter{};//Initialized to zero. Counts the elements we have in 
                                //the unique_data array

   for(unsigned int i{}; i < collection_size; ++i){

    bool already_in{false};

    //See if  the element is not already in our unique_data
    for(unsigned int j{};j < unique_counter; ++j){
        
      //If we find that the element is already in our unique_data array,
      //we say that the element at current iteration is a duplicate and
      //break out of the loop
      if(unique_data[j] == numbers[i]){
        already_in = true;
        break;
      }
    }

    //If the element isn't already in, we put it in and increment the counter
    //Please understand the use of the postfix operator here.
    if(!already_in){
      unique_data[unique_counter++] = numbers[i];
    }
    
  }

  std::cout << "The collection contains " << unique_counter << " unique numbers, they are : ";

  for(unsigned int i{};i < unique_counter ; ++i){
    std::cout << unique_data[i] << " ";
  }    
  
 //NÃO CONCLUÍDO!//NÃO CONCLUÍDO!//NÃO CONCLUÍDO!
        
}
int main(){

int arr[] {12,3,21,3,8,2,21,4,3,10,11,13,14,15,16,17,18,19,20,0};
unsigned int tamanhoArr = sizeof(arr);

unique_numbers(arr, tamanhoArr);

    return 0;
}