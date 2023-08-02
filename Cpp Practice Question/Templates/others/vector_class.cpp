#include <iostream>
using namespace std;

class vector1
{
    int *v;
    int size;

    public :
        vector1(int m)
        {
            v = new int[size = m];
            for (int i = 0; i <size; i++)
            {
                v[i] = 0;
            }
        }
        vector1(int *a)
        {
            for(int i = 0; i < size; i ++)
            {
                v[i] = a[i];
            }
        }
        int operator*(vector1 &y)
        {
            int sum = 0;
            for(int i = 0; i <size; i ++)
            {
                sum += this->v[i] * v[i];
            }
            return sum;
        }
};
int main()
{
    int x[3] = {1,2,3};
    int y[3] = {3,4,2};
    vector1 v1(3);
  
    vector1 v2(3);
      v1 = x;v2 = y;
    int Sclarproduct;
    Sclarproduct = v1*v2;
    cout<<"Scalar product is "<<Sclarproduct<<endl;

    return 0;
}
// #include <iostream>
// using namespace std;

// class MyVector
// {
//     int *v;
//     int size;

// public:
//     MyVector(int m)
//     {
//         v = new int[size = m];
//         for (int i = 0; i < size; i++)
//         {
//             v[i] = 0;
//         }
//     }

//     MyVector(int *a) // Modified constructor to take array and size
//     {
//         v = new int[size];
//         for (int i = 0; i < size; i++)
//         {
//             v[i] = a[i];
//         }
//     }

//     int operator*(MyVector &y) // Modified to take constant reference
//     {
//         int sum = 0;
//         for (int i = 0; i < size; i++)
//         {
//             sum += v[i] * v[i];
//         }
//         return sum;
//     }

//     // Assignment operator overload
//     // MyVector &operator=(const int *a)
//     // {
//     //     for (int i = 0; i < size; i++)
//     //     {
//     //         v[i] = a[i];
//     //     }
//     //     return *this;
//     // }

// };

// int main()
// {
//     int x[3] = {1, 2, 3};
//     int y[3] = {3, 4, 2};
//     MyVector v1(3);
//     v1 = x;
//     MyVector v2(y, 3); // Use modified constructor to pass array and size
//     int scalarProduct;
//     scalarProduct = v1 * v2;
//     cout << "Scalar product is " << scalarProduct << endl;

//     return 0;
// }
