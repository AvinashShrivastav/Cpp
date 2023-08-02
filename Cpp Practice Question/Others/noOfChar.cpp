#include <iostream> 
#include<string>
using namespace std; 

int numofchar(string word, char ch){
     int count=0;
     for(int i=0; i<word.length(); i++){
        if(ch==word[i]){
           count++;
        }
     }
     return count;
}

int main(int argc, char*argv[]){  
    string text= argv[1];
    string printedchar;
    cout<<"String= "<<text<<endl;
    cout<<" char | occurence "<<endl;
    for(int i=0; i<text.length(); i++){
        printedchar += text[i];
        if(numofchar(printedchar, text[i])==1){
            cout<< text[i]<<" | "<<numofchar(text, text[i])<<endl;
        }
    }
    return 0;
}