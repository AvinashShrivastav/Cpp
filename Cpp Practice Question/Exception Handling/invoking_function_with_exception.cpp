#include <iostream>
using namespace std;
void divide(int a, int b, int c){
    cout<<"inside func"<<endl;
    if (a-b != 0)
    {
        cout<<c/(a-b);
    }
    else{
        cout<<"Error Thrown"<<endl;
        throw(a-b);
    }
}

int main()
{
    int a = 10;
    int b = 10;
    int c = 20;
    try{
        cout<<"Error generation"<<endl;
divide(a,b,c);
    }
    catch(int x){
        cout<<"Error caught"<<endl;
    }
    

    return 0;
}