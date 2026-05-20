#include <iostream>
using namespace std;
int main() 
{
    for (int i = 1; i <= 5; i++) 
    {
        if (i == 3)
            cout << "* ";
        else
            cout << "  ";
        if (i >= 2 && i <= 4)
            cout << "* ";
        else
            cout << "  ";
        cout << "* ";
        cout << "      ";
        cout << "* ";
        if (i >= 2 && i <= 4)
            cout << "* ";
        else
            cout << "  ";
        if (i == 3)
            cout << "* ";
        cout << endl;
    }
    return 0;
}