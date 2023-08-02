#include <iostream>
#include <cstdarg>
using namespace std;
int findmaximun(int count, ...)
{
    int max, value;
    va_list list;
    val_start (list, count);
    max = va_arg(list, int);
    for(int arg = 1; arg <count; ++arg)
    {
        value = va_arg(list, int);
        if(max < value)
    }
}
