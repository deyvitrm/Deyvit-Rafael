#include <iostream>
using namespace std;
int main()
{
    int f=2,c=2;
    int matriz[f][c]={{3,4},{5,6}};
    int suma=0;
    for(int i=0;i<f;i++)
    {
       for(int j=0;j<c;j++)
       {
           cout<<matriz[i][j]<<" ";
           suma +=matriz[i][j];
       }
       cout<<endl;
    }
    cout<<"la suma de digitos: "<<suma<<endl;
    return 0;
}