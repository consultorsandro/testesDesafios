// Exercício de entrada simples de dados
#include<iostream>
     
    int main ()
    {
        std::cout << "Where do you live?" << std::endl;
        std::string country;
        std::cin >> country;
        std::cout << "I've heard great things about " << country << " I'd like to go sometime." << std::endl;
    
        return 0;
    }