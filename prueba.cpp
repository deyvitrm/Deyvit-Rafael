#include <iostream>
using namespace std;

int main()
{
    int k;
    float i, j, dec;
    cout << "Ingresa el primer numero decimal (ej. 3.45): ";
    cin >> i;
    cout << "Ingresa el segundo numero decimal (ej. 6.78): ";
    cin >> j;

    dec = i - static_cast<int>(i); 
    k = static_cast<int>(i); 
    i = static_cast<int>(j) + dec;
    dec = j - static_cast<int>(j);
    j = k + dec;

    cout << "Valores intercambiados: "<<endl;
    cout << "i: " << i <<endl;
    cout << "j: " << j <<endl;

    return 0;
}
