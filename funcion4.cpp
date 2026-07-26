#include <iostream>
using namespace std;
int Mayor(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}
int main() {
    int n,p;
    cout<<"Ingresa el primer numero: ";
    cin>>n;
    cout<<"Ingresa el segundo numero: ";
    cin>>p;   
    cout<<"El numero mayor es: "<<Mayor(n, p);
    return 0;
}