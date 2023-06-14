#include <iostream>
using namespace std;

class complex
{
    float x;
    float y;

public:
    class Flag {}; // Abstract Class Flag
    complex() {}
    complex(float real, float imag)
    {
        x = real;
        y = imag;
    }
    complex operator+(complex);
    void display(void);
};

complex complex::operator+(complex c)
{
    if (c.x == 0 && c.y == 0)
    {
        throw Flag();
    }

    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return (temp);
}

void complex::display(void)
{
    cout << x << " + " << "j" << y << endl;
}

int main()
{
    try
    {
        complex c1, c2, c3;
        c1 = complex(0.0, 0.0);
        c2 = complex(0.0, 0.0);
        c3 = c1 + c2; // c1 invoked + operator and c2 acts as parameter c;

        cout << "c1 = ";
        c1.display();
        cout << "c2 = ";
        c2.display();
        cout << "c3 = ";
        c3.display();
    }
    catch (complex::Flag)
    {
        cout << "Add 0 Exception" << endl;
    }

    return 0;
}
