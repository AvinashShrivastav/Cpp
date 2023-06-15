#include <iostream>
using namespace std;

int sum(int a, int b, int &carry);
int main()
{
    int bin1[] = {1,0,1,1,1,0};
    int bin2[] = {1,1,1,0,1,1};
    // int sum[6] = {0,0,0,0,0,0};
    
    int carry = 0;

    for(int i = 6; i > 0 ; i--)
    {
        int s = 0;
        int a = bin1[i];
        int b = bin2[i];
        // cout<<"Present carry = " <<carry<<endl;
        sum(a, b, carry);
    }
    cout<<carry;

}

int sum(int a, int b, int &carry)
{
    int s = a + b + carry;
    if(s == 0 || s == 1)
    {
        cout<<s;
        carry = 0;
        // cout<<"carry set to 0"<<endl;
    }
    else if (s == 2 )  
    {
        cout<<'0';
        carry = 1;
        // cout<<"carry set to 1"<<endl;
    }
    else if ( s == 3){
        cout<<'1';
        carry=1;
        // cout<<"carry set to 1"<<endl;
    }

    
}