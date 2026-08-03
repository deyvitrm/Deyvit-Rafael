#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int suma = 0;
    do {
        suma += n % 10;
        n = n / 10;
    } while (n > 0);
    cout << suma << endl;
    return 0;
}