// Exercício de incremento até 99
#include <iostream>

using std::cout, std::endl;

    
int main()
{
    unsigned int sums{};

    for (int i {0}; i < 100; ++i)
    {
        sums = i;
    }

    cout << "A sums is: " << sums << endl;

    return 0;
}