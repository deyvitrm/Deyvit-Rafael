#include <iostream>
using namespace std;

int main() 
{
    int k;
    float i = 10.63, j = 20.22, dec;
    dec = i - static_cast<int>(i); 
    k = static_cast<int>(i); 
    i = static_cast<int>(j) + dec;
    dec = j - static_cast<int>(j);
    j = k + dec;
    cout<< i << "INTERCAMBIO DE NUMERO ENTERO" << j <<endl;

    return 0;
}
