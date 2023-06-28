#include <iostream>
using namespace std;

namespace Classes
{
    class Test
    {
        private :
            int m;
        public:
        Test (int a)
        {
            m = a;
        }

        void display()
        {
            cout <<"m = "<<m<<endl;
        }
    };

}
int main()
{
    Classes::Test T1(200);

    using namespace Classes;
    Test T2(100);
    T1.display();
    T2.display();

    return 0;
}
