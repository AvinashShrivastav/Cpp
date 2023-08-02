#include <iostream>
using namespace std;
template <class T1 = int, class T2 = float >//Default 
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
    Test <> test3('A',12.98);
    test3.show();


    return 0;

}