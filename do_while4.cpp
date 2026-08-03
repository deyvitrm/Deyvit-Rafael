#include <iostream>
using namespace std;

int main() {
    int op, a, b;
    do {
        cout << "1) Suma  2) Resta  3) Producto  4) Salir" << endl;
        cout << "Opcion: ";
        cin >> op;
        if (op != 4) {
            cout << "Ingresa dos numeros: ";
            cin >> a >> b;
            if (op == 1) cout << "Resultado: " << a + b << endl;
            if (op == 2) cout << "Resultado: " << a - b << endl;
            if (op == 3) cout << "Resultado: " << a * b << endl;
        }
    } while (op != 4);
    cout << "Hasta luego" << endl;
    return 0;
}