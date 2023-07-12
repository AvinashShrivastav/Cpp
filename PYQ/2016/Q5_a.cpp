#include <iostream>
using namespace std;

class Time
{
    int hours, minutes, seconds;
    public:
        int operator++(int a):
        {
             return (a = a+1)
            
        }
}