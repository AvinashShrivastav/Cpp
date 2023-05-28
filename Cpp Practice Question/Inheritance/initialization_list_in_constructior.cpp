#include <iostream>
using namespace std;

class aplha
{
    int x;
    public:
        aplha(int i)
        {
            x = i;
            cout<<"aplha initialized"<<endl;
        }
        void show_x(void)
        {
            cout<<"x = "<<x<<endl;
        }
};

class beta
{
    float y, z;
    public:
        beta(float i, float j) : y(i), z(y+j)
        {
            cout<<"beta initialized"<<endl;
        }

        void showx_yz(void)
        {
            cout<<"y = "<<y<<endl;
            cout<<"z = "<<z<<endl;
        }
};

class gamma : public aplha, public beta //constructors in derived class is called based on the order here
{
    int m, n;
    public:
        gamma(int a,float b) : //Two data member iniliazing 5 members
         beta(b,b),aplha(a) //This order does not matter. first aplha(a) would be called --line 34
        {
            m = a;
            n = a;
            cout<<"gamma initialized"<<endl;
        }
        void show_mn(void)
        {
            cout<<"m = "<<m<<endl<<"n = "<<n<<endl;
        }

};

int main()
{
    gamma g(12,13.7);
    g.show_x();
    g.showx_yz();
    g.show_mn();

}
