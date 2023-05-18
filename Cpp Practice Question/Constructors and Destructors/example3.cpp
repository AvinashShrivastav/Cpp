#include <iostream>
using namespace std;
class integer
{
    int m, n;
    public:
    integer(int x, int y) //Inline Constructor
    {
        m = x;
        n = y;
    }
    void show()
    {
    cout << m<<endl;
    cout << n<<endl;
    }
};

int main()
{
    integer A(3,5);
    A.show();

    return 0;
}