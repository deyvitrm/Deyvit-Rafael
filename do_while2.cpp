#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int inv = 0;
    do {
        inv = inv * 10 + (n % 10);
        n = n / 10;
    } while (n > 0);
    cout << inv << endl;
    return 0;
}