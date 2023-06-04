#include <iostream>
using namespace std;

int main()
{   
    int i = 0;
    char *ptr[4] = {"bookpointer","penpointer","pencilpointer","laptoppointer"};
    char str[25];
    cout<<"Enter pointer name : " ;
    cin>>str;
    for ( i = 0; i < 4; i++ )
    {
        if(*ptr == str)
        {
            cout<<"Your pointer is here "<<endl;
            break;
        }
        else if( i == 3)
        {
            cout<<"pointer not found"<<endl;
        }
        ptr++;
    }


}