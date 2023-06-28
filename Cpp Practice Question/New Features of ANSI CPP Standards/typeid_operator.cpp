#include <iostream>
#include <typeinfo>
using namespace std;

class Org
{
    public:
    int sample;
    virtual ~Org() {};
};

class Dept : public Org
{
    public :
    int sample2;
};

int main()
{
    Org org1;
    Dept dept1;
    Org *ptr = &dept1;
    cout<<typeid(ptr).name()<<endl; //P3Org //static pointer type
    cout<<typeid(*ptr).name()<<endl; //4Dept // dynamic pointer type

    return 0;
}