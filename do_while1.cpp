#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    int suma = 0;
    int cnt = 0;
    do {
        cin >> n;
        if (n > 0) {
            suma += n;
            cnt++;
        }
    } while (n > 0);
    cout << "Suma: " << suma << endl;
    if (cnt > 0) {
        cout << fixed << setprecision(2);
        cout << "Promedio: " << (float)suma / cnt << endl;
    }
    return 0;
}