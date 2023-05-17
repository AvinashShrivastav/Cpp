//How to use constructor function
#include <iostream>
using namespace std;

class integer
{
    int m, n;
    public:
    
    integer(void);
    void show()
    {
    cout << m;
    cout << n;

    }
};

integer :: integer(void) //default constructor as it accept no paramter
{
    m = 0; 
    n = 0;
}

int main()
{
    integer x;
    x.show();

}
