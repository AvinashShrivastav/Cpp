#include <iostream>
using namespace std;

class abcd
{
    int a = 8;
    public:
    int b = 5;
    void display(void)
    {
        cout<<a<<endl<<b<<endl<<c<<endl;
    }
    protected:
    int c = 21;
};

class cdef : protected abcd
{
    public:
    void display(void)
    {
        cout<<a<<endl<<b<<endl<<c<<endl;
    }
}

int main()
{
    abcd A;
    // A.display();
    cout<<A.c;


}