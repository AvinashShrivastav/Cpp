#include <iostream>
using namespace std;
void printPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}
int main()
{
    int n = 3;
    printPattern(n);

    return 0;

}