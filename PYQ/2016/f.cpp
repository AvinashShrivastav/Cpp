#include <iostream>
#include <string>

using namespace std;
int isPalindrome(int &num)
{
    string numStr = to_string(num);
    int left = 0;
    int right = numStr.length() - 1;
    while(left < right)
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
    int num = 1221;
    if(!isPalindrome(num))
    {
        cout<<"is palindrome";
    }
    else{
        cout<<"not palindrome";
    }

    return 0;

}