#include <iostream>

using namespace std;

int main() 
{
    char op;
    double num1, num2, resultado;

    cout << "Ingrese operador (+, -, *, /): ";
    cin >> op;

    cout << "Ingrese dos numeros: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            resultado = num1 + num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case '-':
            resultado = num1 - num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case '*':
            resultado = num1 * num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "Resultado: " << resultado << endl;
            } else {
                cout << "Error: Division por cero." << endl;
            }
            break;
        default:
            cout << "Operador no valido." << endl;
            break;
    }

    return 0;
}
