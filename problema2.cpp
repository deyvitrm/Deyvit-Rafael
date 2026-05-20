#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int CA,CO,H;
    cout<< "ingrese valor del cateto adyacente: ";
    cin>>CA;
    cout<< "ingrese valor del cateto opuesto: ";
    cin>>CO;
    H=sqrt((CA*CA)+(CO*CO));
    cout<<"HIPOTENUSA:"<<endl;
    cout<<sqrt((CA*CA)+(CO*CO));
    return 0;
}