#include <iostream>
using namespace std;
class ABC{
    private:
        mutable int m; //makes it mutable even from const functions
    public:
        explicit ABC(int x = 0)
        {
            m = x;
        }
        void change() const  //const function
        {
            m = m+10;
        }
        int display() const  //const function
        {
            return m;
        }
        
};

int main()
{
    const ABC abc(100);
    cout<<"abc contains "<<abc.display()<<endl;
    abc.change();
    cout<<"now abc becomes "<<abc.display()<<endl;

    return 0;
}