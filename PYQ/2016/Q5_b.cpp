#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream file;
    file.open("textfile.txt");
    string str;
    int noOfChar = 0;
    while(file)
    {
        getline(file, str);
        noOfChar += str.length();
    }
    cout<<noOfChar;
}