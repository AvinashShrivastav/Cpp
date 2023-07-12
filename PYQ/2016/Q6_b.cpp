#include <iostream>
using namespace std;

class base{
    int p1;
    protected:
        int p2;
    public:
        int p3;
};
// i

class deri : private base
{
    public:
    void print()
    {
    cout<<p1; //private
    cout<<p2; //private
    cout<<p3; //private

    }
    

};
class deri2 : public base{
    void print2()
    {
    // cout<<p1; //private
    // cout<<p2; //protected
    // cout<<p3; //public

    }
};
class deri3 : protected base{
    void print2()
    {
    // cout<<p1; //protected
    // cout<<p2; //protected
    // cout<<p3; //protected

    }
};


int main()
{

}