#include <iostream>
using namespace std;
int main ()
{
    int f=3,c=3;
    int  matriz[f][c]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<f;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<matriz[i][j]<< " ";
        }
        cout<<endl;
    }
}