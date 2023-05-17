//Parameterized constructor

#include <iostream>
using namespace std;

class integer
{
    public:
    int m ,n;
    integer(int x, int y);
};
integer :: integer(int x, int y)
{
    m = x;
    n = y;
}
int main()
{
    
//This would give error as it is not initialised
    // integer B;
    // cout<<B;

    integer A(2,4); // implicit call
    cout<< A.m<<endl<<A.n<<endl; 

    integer B = integer(3,5);  //explict call
    cout<<B.m<<endl<<B.n;
}