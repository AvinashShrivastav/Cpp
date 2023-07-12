#include <iostream>

using namespace std;

int isPalindrome(int &num)
{
    string numStr = to_string(num);
    int left, right;
    left = 0;
    right = numStr.length() - 1;
    while (left < right)
    {
        if(numStr[left] != numStr[right])
        {
            return 1;
        }
        left++;
        right--;
    }
    return 0;

}
int main()
{
    int num = 121;
    cout<<isPalindrome(num);

}
