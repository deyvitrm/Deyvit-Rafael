#include <iostream>
using namespace std;
int main()
{
    float a,b;
    cout<<"Escribe el primer numero: ";
    cin>>a;
    cout<< "Escribe el segundo numero: ";
    cin>>b;
    int entero=a/b;
    float residuo=a-(entero*b);
    cout<<"Parte entera: "<<entero<<endl;
    cout<<"residuo: "<<residuo<<endl;

    return 0;
}