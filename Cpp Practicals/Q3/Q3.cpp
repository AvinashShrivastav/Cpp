/*
3.	Write a program that prints a table indicating the number of 
occurrences of each alphabet in the text entered as command line arguments. 

*/
#include <iostream>
#include <string>
using namespace std;
int noOfChar(string str, char ch)
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (ch == str[i])
        {
            count++;
        }
    }

    return count;
}

int main(int argc, char *argv[])
{
    
    string text = argv[1];
    string printedChar;
    cout<<"String : "<<text<<endl;
    cout<<"| char |occurance |"<<endl;
    for (int i = 0; i < text.length(); i++)
    {
        printedChar += text[i];
        
        if(noOfChar(printedChar, text[i]) ==1 )
        {
            cout<<"|  "<<text[i]<<"   |   "<<noOfChar(text, text[i])<<"      |"<<endl;
        } 
        
    }

}


/*
Terminal output

PS C:\Users\hp\Desktop\Cpp\Cpp Practicals\Q3> ./Q3.exe "apple"                                                                       
String : apple
| char |occurance |
|  a   |   1      |
|  p   |   2      |
|  l   |   1      |
|  e   |   1      |
PS C:\Users\hp\Desktop\Cpp\Cpp Practicals\Q3>

*/