#include <iostream>
using namespace std;
int main()
{
    // long float x; // there is no data type called long float

    // void *vp
    // char *cp = vp; //char *cp = (char*)vp;

    // int *p = new; //error: expected type-specifier before ';' token

    // enum(green, yellow ,red); //error: expected primary-expression before 'enum'
    //correct-  enum{ green, yellow, red};

    // int total;
    // int const *p = &total;

    // Incorrect Pointer Initialization: The pointer p is declared as a pointer to a constant integer (const int*), which means it points to a constant integer value.
    // However, it is being initialized with the value of total, 
    // which is an uninitialized variable of type int. 
    // This is not allowed because p should point to a constant integer, not to an uninitialized integer.

    // const int array_size;// error: uninitialized const 'array_size'

    // for(i = 1 ; int i <10; i++)cout<<i<<endl; //error: 'i' was not declared in this scope

    // int & number = 100; // invalid initialization of non-const reference of type 'int&' from an rvalue of type 'int'

    // float *p = new int[10]; //annot convert 'int*' to 'float*' in initialization

    // int public = 10000; //keyword
    // char name[3] = "USA"; //initializer-string for array of chars is too long
    
}