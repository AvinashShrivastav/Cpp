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
    float y;
    public:
        beta(float i)
        {
            y = i;
            cout<<"beta initialized"<<endl;
        }
        void showx_y(void)
        {
            cout<<"y = "<<y<<endl;
        }
};

class gamma : public aplha, public beta //constructors in derived class is called based on the order here
{
    int m, n;
    public:
        gamma(int a, float b, int c, int d) :
         beta(b),aplha(a) //This order does not matter. first aplha(a) would be called --line 34
        {
            m = c;
            n = d;
            cout<<"gamma initialized"<<endl;
        }
        void show_mn(void)
        {
            cout<<"m = "<<m<<endl<<"n = "<<n<<endl;
        }

};

int main()
{
    gamma g(12,13.7,54,64);
    g.show_x();
    g.showx_y();
    g.show_mn();

}