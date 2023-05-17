//Parameterized constructor

#include <iostream>
using namespace std;

class integer
{
    int m ,n;
    public:
    
    integer(int x, int y);
    void show()
    {
    cout << m<<endl;
    cout << n<<endl;

    }
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
    A.show();

    integer B = integer(3,5);  //explict call
    B.show();
}