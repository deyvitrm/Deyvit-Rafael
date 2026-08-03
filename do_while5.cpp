#include <iostream>
using namespace std;
int main() {
    int a, b;
    do {
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        if (a % b == 0 && b % a == 0) {
            cout << "ambos" << endl;
        } else if (a % b == 0) {
            cout << a << " es multiplo de " << b << endl;
        } else if (b % a == 0) {
            cout << b << " es multiplo de " << a << endl;
        } else {
            cout << "ninguno" << endl;
        }
    } while (true);
    return 0;
}