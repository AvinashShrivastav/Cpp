#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file;
    file.open("country");
    file<<"USA"<<endl;
    file<<"India"<<endl;

    file.close();

    file.open("capital");
    file<<"Washington"<<endl;
    file<<"New Delhi"<<endl;

    file.close();

    //Reading the files
    const int N  = 4; //3 char + terminating char
    char line[N];
    ifstream ifile;
    ifile.open("country");
    cout<<"Content of the country"<<endl;
    while(ifile)
    {
        ifile.getline(line, N);
        cout<<line<<endl;
        
    }

}