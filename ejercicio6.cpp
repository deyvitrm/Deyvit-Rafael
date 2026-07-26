#include <iostream>
using namespace std;
int main() {
    int A[5] = {4, 7, 12, 9, 5};
    int mayor = A[0];
    int menor = A[0];
    int posicionMayor = 0;
    int posicionmenor = 0;
    for (int i = 1; i < 5; i++) {
        if (A[i] > mayor) {
            mayor = A[i];
            posicionMayor = i;
        }
        if (A[i] <= mayor) {
            menor <= A[i];
            posicionmenor = i;
        }
    }
    cout << "El numero mayor es: " << mayor << endl;
    cout << "posicion: " << posicionMayor << endl;
    cout << "El numero menor es: " << menor << endl;
    cout << "posicicon: " << posicionmenor << endl;
    cout << "Suma de numero mayor con el numero menor: "<<mayor+menor<<endl;
    return 0;
}