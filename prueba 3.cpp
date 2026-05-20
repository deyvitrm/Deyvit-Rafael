#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int c;
    cout<<"juega con la computadora piedra papel o tijera"<<endl;
    string a, e="piedra", f="papel", g="tijera";
    cin>>a;
    srand(time(0));
    c = rand() % 3+1;
    if(c==1){
    cout<<"piedra"<<endl;
    }
    else
    {
        if(c==2)
        {
            cout<<"papel"<<endl;
        }
        else
        {
            if(c==3)
            {
                cout<<"tijera"<<endl;
            }
        }
    }
    if(a==e&&c==1)
    {
        cout<<"empate"<<endl;
    }
    else
    {
        if(a==e&&c==2)
        {
            cout<<"perdiste"<<endl;
        }
        else
        {
            if(a==e&&c==3)
            {
                cout<<"ganaste"<<endl;
            }
            else
            {
                if(a==f&&c==1)
                {
                    cout<<"ganaste"<<endl;
                }
                else{
                    if(a==f&&c==2)
                    {
                        cout<<"empate"<<endl;
                    }
                    else
                    {
                        if(a==f&&c==3)
                        {
                            cout<<"perdiste"<<endl;
                        }
                        else
                        {
                            if(a==g&&c==1)
                            {
                                cout<<"perdiste"<<endl;
                            }
                            else{
                                if(a==g&&c==2)
                                {
                                    cout<<"ganaste"<<endl;
                                }
                                else
                                {
                                    if(a==g&&c==3)
                                    {
                                        cout<<"empate"<<endl;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}