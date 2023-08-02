#include <iostream>
using namespace std;
char * allocateMemory();
int main()
{
    char * str;
    str = allocateMemory();
    cout <<str;
    delete str;
    str = "   ";
    cout<<str;
    return 1;

}
char* allocateMemory()
{
    str = "Memory allocating Test"; //str not declared
    return str;
}