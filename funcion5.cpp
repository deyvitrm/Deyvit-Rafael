#include <iostream>
using namespace std;
void imprime(int A[],int n);
void imprime(int A[],int n){;
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}
int main () {;
    const int n=5;
    int A[5]={1,2,3,4,5};
    imprime(A,n);
}