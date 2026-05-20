#include <iostream>
using namespace std;
int main()
{
    cout << " Figura 5 " << endl;
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int sp = 1; sp < i; sp++) 
        {
            cout << "  ";
        }
        for (int j = i; j <= n; j++) 
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
  return 0;
}