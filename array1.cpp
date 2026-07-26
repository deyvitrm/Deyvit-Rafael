#include <iostream>
using namespace std;
int main(){
    int suma = 0;
    int A[5]={10,20,30,40,50};
    int B[5]={1,2,3,4,5};
    int C[5]; 
    for (int i = 0; i < 5 ; i++)
    {
        C[i]=A[i]+B[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<C[i]<< " ";

    } 
    return 0;
}