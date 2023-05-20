// #include <iostream>
// using namespace std;

// int main()
// {
//     string m;
//     cout << "Enter String : ";
//     getline(cin ,m);
//     int count ;
//     for (int i = 0 ; i < m.size(); i++)
//     {
//         count = 0;
//         for (int j = 0 ; j < m.size(); j++)
//         {
//             if (m[i] == m[j])
//             {
//                 count++;
//             }
//         }
//         cout<<m[i]<<" Appears "<< count << " times"<<endl;
//     }
// }
#include <iostream>
using namespace std;
int count;

void remove(string &x,char c){
    for(int i=0;i<x.length();i++){
        if(x[i]==c){
            x[i]=' ';
        }
    }
};

int main(){
    string x;
    int count;
    cout<<"Enter a string: "<<endl;
    cin>>x;

    for(int i=0;i<x.length();i++){
        
        if(x[i]==' '){
            continue;
        }
        count=0;
        for(int j=0;j<x.length();j++){
            if(x[i]==x[j]){
                count++;
            }
        }
        cout<<"+----+----+"<<endl;
        cout<<"| "<<x[i]<<"  | "<<count<<" "<<" |"<<endl;
    remove(x,x[i]);
    }
    cout<<"+----+----+"<<endl;
}