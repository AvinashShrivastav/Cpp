#include <iostream>
using namespace std;

class addition
{
    int p, q, r, s;
    // public://public: is missing here
    void input(void)
    {
        cout<<"Enter the three numbers: "<<endl;
        cin>>p>>q>>r;

    }
    void show(void)
    {
        cout<<"Addition "<<add()<<endl;
    }

    int add(void)
    {
        s = p+q+r;
        return s;
    }
};

int main()
{
    addition x;
    x.input();
    x.show();

    return 0;

}