// Exercício de incremento até 99
#include <iostream>

using std::cout;
using std::endl;

unsigned int sum_up_to_99(){
    unsigned int sum{};
}
    
int main()
{
    unsigned int sums{};

    for (int i = 0; i < 100; ++i)
    {
        sums = sums + i;
    }

    cout << "A sums is: " << sums << endl;

    return 0;
}