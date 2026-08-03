#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool esPrimo = true;
    int i = 2;
    if (n < 2) {
        esPrimo = false;
    }
    while (i * i <= n && esPrimo) {
        if (n % i == 0) {
            esPrimo = false;
        }
        i++;
    }
    if (esPrimo) {
        cout << "primo" << endl;
    } else {
        cout << "no primo" << endl;
    }
    return 0;
}