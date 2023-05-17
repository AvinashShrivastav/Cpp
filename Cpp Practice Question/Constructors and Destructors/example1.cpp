//How to use constructor function
#include <iostream>
using namespace std;

class integer
{
    
    public:
    int m, n;
    integer(void);
};

integer :: integer(void) //default constructor as it accept no paramter
{
    m = 0; 
    n = 0;
}

int main()
{
    integer x;
    cout << x.m;
    cout << x.n;

}
