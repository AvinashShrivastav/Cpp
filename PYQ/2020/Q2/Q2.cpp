#include <iostream>
#include <fstream>
#include <string>

using namespace std;
bool isPalindrome(int number);
void storePalindrome(int number);



int main( int argc, char* argv[])
{
    if(argc != 6)
    {
        cout<<"Please enter only 5 integers"<<endl;
        return 1;
    }
    for (int i = 1 ; i < argc; i++)
    {
        int num = atoi(argv[i]);
        if (num <= 0 )
        {
            cout<<"Non positive integer found. Please enter only positive integer"<<endl;
            return 1;
        }

        if (isPalindrome(num))
        {
            cout<<num <<" is palindrome"<<endl;
            storePalindrome(num);
        }
        else
        {
             cout<<num <<" is not palindrome"<<endl;
        }
    }


}

bool isPalindrome(int number)
{
    string numString = to_string(number);
    int left = 0;
    int right = numString.length() - 1;
    while(left < right)
    {
        if(numString[left] != numString[right])
        {return false;}
        left++;
        right--;


    }
    return true;
}

void storePalindrome(int number)
{
    ofstream file("Palindrome.txt",ios::app);
    if(file.is_open())
    {
        file<< number <<endl;
        file.close();
    }
    else
    {
        cout<<"Unable to open file"<<endl;
    }
}