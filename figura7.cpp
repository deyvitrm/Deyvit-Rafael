#include <iostream>
using namespace std;
int main(){
    cout << " Figura 7 " << endl;
    int n = 4;
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n; j++) 
        {
            if (i == 1 || i == n || j == 1 || j == n) 
            {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
  return 0;
}