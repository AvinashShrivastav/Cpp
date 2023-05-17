//Overloaded Constructors

#include <iostream>
using namespace std;

class complex
{
    public:
    float x, y;
    complex(){} //constructor with no arg
    complex(float a ) //constructor with one arg
    {
        x = y = a;
    }
    complex(float real, float imag) //comnstructor with two arg
    {
        x = real;
        y = imag;
    }

    friend complex sum(complex, complex);
    friend void show(complex);

};

complex sum(complex c1, complex c2)
{
    complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return(c3);
}

void show(complex c)
{
    cout<<c.x << " + j"<<c.y<<endl;
}

int main()
{
    complex A(2.7,3.5);
    complex B(1.6);
    complex C;
    
    C = sum(A,B);
     cout<<"A is ";show(A);
     cout<<"B is ";show(B);
     cout<<"C is " ;show(C);
    

}

//Following constructor assigns default value 0 to imag but if complex(float real) is defined as well then there is ambiguity in the program
//complex(float real, float imag = 0 ) //comnstructor with two arg ; Default value of imag is 0