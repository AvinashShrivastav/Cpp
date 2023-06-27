#include <iostream>
using namespace std;
class Array
{
    int* arr;
    int size;

    public:
        Array(int* inputArr, int inputSize)
        {
            size = inputSize;
            arr = new int[size];
            for(int i = 0; i <size; i ++)
            {
                arr[i] = inputArr[i];
            }
        }

        Array(const Array& otherArray) //const reference is important!
        {
            size = otherArray.size;
            arr = new int[size];
            for(int i = 0; i <size; i ++)
            {
                arr[i] = otherArray.arr[i];
            }
        }

        Array operator+(const Array &A) //Const reference is important!
        {
            if(size != A.size)
            {
                cout<<"Sizes do not match"<<endl;
                return Array({}, 0);
            }
            int newSize = size;
            int* newArr = new int[newSize];
            for(int i = 0; i < newSize; i ++)
            {
                newArr[i] = arr[i] + A.arr[i];
            }

            return Array(newArr,newSize);
        }

        void display()
        {
            for(int i = 0; i <size; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};

int main()
{
    int inputArr[] = {1, 2, 3, 4};
    Array A(inputArr, 4);
    Array B(A);
    Array C = A + B;
    C.display();

    return 0;
}