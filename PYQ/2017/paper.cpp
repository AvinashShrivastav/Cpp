#include <iostream>
using namespace std;

// int main()
// {
//     for(int i = 20; i >=1; i-- )
//     {
//         for (int j = i; j>=1; j--)
//         {
//             cout<<" ";
//             cout<<i;
//         }
//     }
    
// }


// class Base {
// public:
//     virtual void pureVirtualFunction() const = 0;  // Pure virtual function

//     void nonVirtualFunction() const {
//         std::cout << "Non-virtual function in Base" << std::endl;
//     }
// };

// class Derived : public Base {
// public:
//     void pureVirtualFunction() const override {
//         std::cout << "Implementation of pure virtual function in Derived" << std::endl;
//     }
// };

// int main() {
//     // Base base;  // Error: Cannot instantiate an abstract class

//     Derived derived;
//     derived.pureVirtualFunction();      // Calls implementation in Derived
//     derived.nonVirtualFunction();       // Calls non-virtual function in Base

//     Base* basePtr = &derived;
//     basePtr->pureVirtualFunction();     // Calls implementation in Derived
//     basePtr->nonVirtualFunction();      // Calls non-virtual function in Base

//     return 0;
// }

// int main()
// {
//     int A[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//     int B[16];
//     int bIndex = 0;
//     for(int i = 0; i <4; i++)
//     {
//         for (int j = 0; j <4 ; j++)
//         {
//             B[bIndex] = A[i][j];
//             bIndex++;
//         }
//     }
//     for (int i = 0; i <16; i++)
//     {
//         cout<<B[i]<<" ";
//     }
// }

// class Fun{
//     private: int x;
//     protected: int y;
//     public: int z;

// };
// class Funny : public Fun{
//     private: int u;
//     protected: int v;
//     public: int w;
// };

// int main()
// {
//     Fun fun;
//     Funny funny;
//     fun.x = 1;
//     fun.y = 2;
//     fun.z = 3; // ok
//     funny.x = 11;
//     funny.y = 12;
//     funny.z = 13; // ok
//     funny.u = 14;
//     funny.v = 15;
//     funny.w = 16; //ok
// }


// int x = 2, y;
// void func(void);
// int main()
// {
//     cout<<"x ="<<x;
//     cout<<"y ="<<y;
//     func();
//     cout<<"x ="<<x;
//     cout<<"y ="<<y;
//     return 0;


// }
// void func()
// {
//     int x = 7;
//     y = 11;
//     cout<<"x ="<<x;
//     cout<<"y ="<<y;
// }


// In the given code snippet, the variable y is a global variable of type int. In C++, global variables without an explicit initializer are automatically initialized to zero by default. Therefore, when y is declared without an explicit value, it will be initialized to zero.

// In the code you provided:

// cpp
// Copy code
// int x = 2, y;
// The variable x is explicitly initialized with the value 2, while y does not have an explicit initializer. As a result, y will be initialized to zero.

// If you had declared y as an int without providing an initializer, like this:

// cpp
// Copy code
// int y;
// Then the initial value of y would be indeterminate or garbage. The variable y would contain whatever value was in the memory location allocated for it at that time. The value could be zero, or it could be any other arbitrary value depending on the state of the memory.

// To ensure predictable behavior and avoid working with uninitialized variables, it is generally good practice to provide explicit initial values for variables, especially if they are intended to be used before being assigned a specific value.



// class TwoDim
// {
//     int x,y;
//     public:
//         TwoDim()
//         {
//             x =0; y =0;
//         }
//         TwoDim(int a, int b)
//         {
//             x = a; y =b;
//         }
//         void print()
//         {
//             cout<<"x coordinate "<<x<<endl;
//             cout<<"y coordinate "<<y<<endl;
//         }

// };
// int main()
// {
//     TwoDim A;
//     A.print();

//     TwoDim B(1,1);
//     B.print();

// }