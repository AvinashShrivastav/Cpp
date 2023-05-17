#include <iostream>
using namespace std;
class integer
{
    public:
    int m, n;
    integer(int x, int y) //Inline Constructor
    {
        m = x;
        n = y;
    }
};

int main()
{
    integer A(3,5);
    cout<<A.m;
}