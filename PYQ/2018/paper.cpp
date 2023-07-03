#include <iostream>
#include <iomanip>
using namespace std;

// int func1(int *aa, int &bb )
// {
//     bb = 8;
//     aa[0] = bb;
// }

// int main()


// {
//     int x = 1;
//     int y = 0;
//     int z = 1;

//     if(x>y && x>z)
//     {
//         y = x;
//         z = x+1;
//     }
//     else if(x+y >= z)
//     {
//         x++;
//         z = x+1;
//     }
//     else 
//     {
//         y = z+x;
//     }

//     cout<<x<<" "<<y<<" "<<' '<<z;

// }

// {
//     int num = 10;
//     int *val = &num;
//     cout<<*val<<endl;
//     cout<<(*val+1)*2;

// }

// {
//      string s1 = "Hello", s2 = "Beautiful wor ld!!! ";
//      string s3 = "Be Happy";
//      string s = s1+ " " + s2 +" "+s3;
//      s.append(5,'!');
//      cout<<s<<endl;
//      cout<<s.rfind("Be");

// }
// {
//     int val = 1;
//     do 
//     {
//         val++;
//         ++val;
//     }while(val++>25);
//     cout<<val;
// }


// {
//     int x = 0, y = 0, z = 1;
//     if (z<x || y>=z && z==1)
//         if(z && y)
//         y =1;
//         else
//         x =1;
//         cout<<x<<" "<<y<<" "<<z;

// }


//remove int main() from top
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
//     fun.z = 3; // ok
//     funny.y = 12;
//     funny.z = 13; // ok
//     funny.u = 14;
// }


// {
//     float num = 576.21f;
//     cout<<"The tax is"<<setw(8)<<setprecision(6)<<num;
// }

// {
//     char ch = ' ';
//     int countA = 0, countB = 0, countC = 0;
//     switch(ch) {
//         case 'A':
//         case 'a':
//             countA++;
//             break;
//         case 'B':
//         case 'b':
//             countB++;
//             break;
//         case 'C':
//         case 'c':
//             countC++;
//             break;
//         default:
//             cout << "Error-Not A, B, or C" << endl;
//             break;
//     }
// }

// {
//     int x = 4, y = 7, z = -4;
    // cout<<x++ + y - z--<<endl;
    // cout<<++x+2<<endl;
    // cout<<x-1 + y++ + ++z<<endl;
    // cout<<++z + ++y + x--<<endl;
    // cout<<x<<" "<<y<<" "<<z<<endl;

// }

// {
//     int i, j;
//     for(i = 10; i >=0; i--)
//     {
//         cout<<endl;
//         for(j = i; j>=0; j--)
//         {
//             cout<<j;
//             if(j == 5) break;
//         }
//     }
// }

// {
//     int arr[] = {1,2,3,4,5,6,7,8,9};
//     int *ptr1, *ptr2;
//     ptr1 = arr;
//     ptr2 = ptr1+2;
//     cout<<ptr2-ptr1;

// }

// class X
// {
//     private:
//     int i,j;
//     X(){i = 1; j=1;}
//     virtual void show() = 0;
//     public:
//     void print()
//     {
//         cout<<i<<" "<<j;
//     }
// };

// class Y: public X
// {
//     int k;
//     public:
//     void print()
//     {
//         cout<<k;

//     }
//     Y()
//     {i=j=k=2;}
// };

// void main()
// {
//     Y w;
//     w.print();
// }

// class polygon
// {
//     protected:
//     int width, height;
//     public:
//     void set_values(int a, int b)
//     {
//         width = a; height = b;
//     }
// };

// class output1
// {
//     public:
//     void output(int i );
// };

// void output1 :: output(int i)
// {
//     cout<<i<<endl;
// }

// class rectangle : public polygon, public output1
// {
//     public:
//     int area()
//     {
//         return (width * height);
//     }
// };

// class triangle : public polygon, public output1
// {
//     public:
//     int area()
//     {
//         return(width*height/2);
//     }
// };

// int main()
// {
//     rectangle rect;
//     triangle trgl;
//     rect.set_values(4,5);
//     trgl.set_values(4,5);
//     rect.output(rect.area());
//     trgl.output(trgl.area());

//     return 0;
// }