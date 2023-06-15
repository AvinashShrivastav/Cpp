//Pointer to member of class

#include <iostream>
using namespace std;
class A 
    {
        public:
        int m;
        void show();

    };

int A::*ip = &A :: m; 
//A::* means pointer to member of A class
//&A::m means address of m member of A class
int main(){
    A a;
    cout << a.*ip<<endl;
    cout << a.m<<endl;
    ap = &a;
    cout<<ap->*ip;
}