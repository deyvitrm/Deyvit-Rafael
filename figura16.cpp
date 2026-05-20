#include <iostream>
using namespace std;
int main(){
    int n = 7;
    for (int i = 0; i < n/2 + 1; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (i == 0 || i == j || i + j == n - 1) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
  return 0;
}