#include <iostream>
using namespace std;

int main()
{
    int a = 9;
    int b = 30;
    int c = a*b;
    bool found = false;
    for (int i = a; i <= c ; i = i +a)
    { 
        for (int j = b ; j <= c; j = j+b ){
            if ( i == j )
            {
                cout <<i <<endl;
                found = true;
                break;     
            }
        }
        if (found)
        {
            break;
        }
    }

}