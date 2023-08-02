#include <iostream>
using namespace std;
void fun(int count)
{
    if (count == 0)
    {
        cout<<count;
    }
    else{
        cout<<count<<endl;
        fun(--count);
        return;
    }
}
int main()
{
    fun(10); // 10 tp 0
    fun(-10) // infinite loop
}