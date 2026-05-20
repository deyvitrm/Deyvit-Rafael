#include <iostream>
using namespace std;
int main()
{
    int n,a,b,c,d,e;
    n=1234;
    a=n%10;
    b=(n/10)%10;
    c=(n/100)%10;
    d=(n/1000)%10;
    e=5;
    cout<<d;
    cout<<c;
    cout<<b;
    cout<<e;
    cout<<a;
    return 0;
}