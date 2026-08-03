#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long pasos = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        pasos++;
    }
    cout << pasos << endl;
    return 0;
}