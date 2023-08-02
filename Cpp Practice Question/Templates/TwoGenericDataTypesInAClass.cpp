#include <iostream>
using namespace std;
template <class T1, class T2>
class Test
{
    T1 a;
    T2 b;
    public:
    Test(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout<<a<<" and "<<b<<endl;
    }
};

int main()
{
    Test<float, int> test1(1.23,43);
    test1.show();
    Test<int, char> test2(100,'A');
    test2.show();

    return 0;

}