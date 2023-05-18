#include <iostream>
using namespace std;

class code 
{
    int id;
    public :
    code() {} //constructor
    code(int a)
    {
        id = a;
    }
    code( code &x)
    {
        id = x.id;
    }
    void display(void)
    {
        cout<<id<<endl;
    }
};

int main()
{
    code A(100);
    code B(A); //copy constructor called
    code C = A; //copy constructor called again
    code D;
    D = A; //copy constructor not called. Just assigning member by member value from A to D ; overloaded = operator

    cout<<"id of A is "; A.display();
    cout<<"id of B is "; B.display();
    cout<<"id of C is "; C.display();
    cout<<"id of D is "; D.display();

    return 0;


}