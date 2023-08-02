#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ifstream file("textfile.txt");
    int count = 0;
    string line;
    while(getline(file,line))
    {
        count++;
    }
    cout<<"Number of lines = "<<count;

    return 0;
}
