#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream file("text.txt");
    string line;
    int count = 0;
    while(getline(file, line))
    {
        count += line.length();
    }
    cout<<count;

}