#include <iostream>
using namespace std;
int main() {
    float i,j;
    cout<< "ingrese el primer valor: ";
    cin>> i;
    cout<< "ingrese el segundo valor: ";
    cin>> j;
    int entera_i=i; 
    int entera_j=j;
    float dec_i=i - entera_i;
    float dec_j=j - entera_j;
    i = entera_j+dec_i;
    j = entera_i+dec_j;
    cout << "i ahora es: " << i << endl;
    cout << "j ahora es: " << j << endl;

    return 0;
}