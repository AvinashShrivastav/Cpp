//Constructors -- all three types in one program
#include <iostream>
using namespace std;

class integer
{
    int m,n;
    public:
    
    integer(){m = 0; n = 0;} //Constructor with no parameter
    integer(int x , int y) //Constructir with two parameters
    {
        m = x; n = y;
    }
    //Copy Constructor
    integer(integer &i) //Constructor with parameter as reference to its object
    { 
        m = i.m; n = i.n;
    }

    void display()
    {
        cout<<m<<endl<<n<<endl;
    }

};

int main(){
    integer A;
    A.display();
    integer B(7,8);
    B.display();
    integer C(B);
    C.display();
}
