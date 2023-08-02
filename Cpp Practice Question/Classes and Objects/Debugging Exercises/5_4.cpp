#include <iostream>
using namespace std;
class age 
{
    private:
    int child_age;
    public:
    age() : child_age(20) {}
    int father_age(age);
};
int father_age(age d) //age :: missing
{
    d.child_age += 15;
    return d.child_age;
}

int main()
{
    age D;
    cout<<"father age : "<<father_age(D); //father age is member function. need object to call
    return 0;
}