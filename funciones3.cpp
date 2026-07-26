#include <iostream>
using namespace std;
int Factorial(int n) 
{
    int fac= 1;
    for (int i = 1; i <= n; i++) 
    {
        fac *= i;
    }
    return fac;
}
int main() 
{
    int n;
    cin>>n;
    cout<<Factorial(n);
    return 0;
}
