#include <iostream>
using namespace std;

class space 
{
    int x, y, z;
    public:
        void get_data(int a, int b, int c)
        {
            x = a;
            y = b;
            z = c;
        }
        void display()
        {
            cout<<"x = "<<x<<endl<<"y = "<<y<<endl<<"z = "<<z<<endl;
        }
        void operator-()
        {
            x = -x;
            y = -y;
            z = -z;
        }

        // friend void operator-(space &s);
    
};
// void operator-(space &s)
// {
//     s.x = -s.x;
//     s.y = -s.y;
//     s.z = -s.z;
// }

int main()
{
    space S;
    S.get_data(10,-29,33);
    S.display();
    -S;
    S.display();

    return 0;
}