#include <iostream>
using namespace std;

class Circle
{
    float radius;

    public:
        Circle(){}; // default constructor
        Circle(float rad)
        {
            radius = rad;
        }
        float area(void)
        {
            float arr = 3.14 * radius * radius;
            return arr;
        }
};

int main()
{
    Circle A;
    Circle B(4.0);
    cout<<B.area();

    return 0;
}
