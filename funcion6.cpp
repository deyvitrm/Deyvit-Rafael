#include <iostream>
using namespace std;
int main() {
    int A[5] = {1,2,3,4,5};
    int suma = 0;
    for (int i = 0; i < 5; i++) {
        suma += A[i];
    }
    cout << "La suma de los valores es: " << suma << endl;   
    return 0;
}
