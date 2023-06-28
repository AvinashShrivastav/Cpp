#include <iostream>
using namespace std;

class ABC
{
    int a;
    public:
explicit ABC(int b)
    {
        a = b;
    }
};
int main()
{
    //ABC a1; // not allowed -- constructor need 1 arguement
    ABC a2(8); // allowed
    //ABC a3 = 7; // not allowed -- conversion from 'int' to non-scalar type 'ABC' requested

    return 0;
}