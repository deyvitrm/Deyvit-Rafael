#include <iostream>
using namespace std;

int main()
 {
    int a;
    int b;
    cout<<"ingrese el dividendo: ";
    cin>>a;
    cout<<"ingrese el divisor: ";
    cin>>b;
    cout<<"El residuo de la division es: ";
    cout<<a-(b*(a/b))<<endl;

    return 0;
}