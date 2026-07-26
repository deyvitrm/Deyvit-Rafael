#include <iostream>
using namespace std;

int main() {
    int A[5] = {4, 7, 7, 9, 4};
    int x;
    int coincidencias = 0;
    cin >> x;    
    for (int i = 0; i < 5; i++) {
        if (A[i] == x) {
            cout << i << endl;
            coincidencias = coincidencias + 1;
        }
    }
    if (coincidencias == 0) {
        cout << "no se encontro" << endl;
    }    
    return 0;
}
