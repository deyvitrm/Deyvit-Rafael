#include <iostream>
using namespace std;
int main() 
{
    int b,h;
    cout<< "ingrese el numero de base del cuadrado : ";
    cin>>b;
    cout<< "ingrese el numero de altura del cuadrado: ";
    cin>>h;
    cout<<"AREA:"<<endl;
    cout<<b*h<<endl;
    cout<<"PERIMETRO:"<<endl;
    cout<<(2*(b+h));
    return 0;
}