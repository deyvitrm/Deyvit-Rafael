#include <iostream>
using namespace std;
int main()
{
	int numero,suma=0;
	cin>>numero;
	if(numero==0)
		suma=1;
	else {
		while(numero>0) {
			numero=numero/10;
			suma++;
		}
	}
	cout<<"digitos: "<<suma;
	return 0;
}