#include <iostream>
using namespace std;
int main(){
    cout << " Figura 8 " << endl;
    int n = 4;
    for (int i = 1; i <= n; i++) 
    {
        for (int sp = n; sp > i; sp--) 
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) 
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
  return 0;
}