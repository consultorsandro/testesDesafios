// Proposta de código para ano descobrir se o ano é bissexto.
#include <iostream>

using std::cout, std::endl, std::cin;

bool anoBissexto(unsigned int ano) {
    bool is_leap{};

if ((ano % 400 == 0) || (ano % 4 == 0) && (ano % 100 != 0)) {
    is_leap = true;
    cout << ano << " eh um ano bissexto." << endl;

    }else {
    is_leap = false;
    cout << ano << " nao eh ano bissexto. " << endl;
    }   
    return is_leap;

}

int main() {


cout << "Informe um ano para saber se ele eh Bissexto: " << endl;
int ano;

bool teste;
cin >> ano;

teste = anoBissexto(ano);

cout << std::boolalpha;
cout << "is_leap is : " << teste << endl;


return 0;
}
