#include <iostream>
#include <vector>
using namespace std;

int main(){
    //initializing vectors

    vector <int> v1;
    // vector <double> v2(20); //20 element double vector
    // vector <double> v3(v2); 
    // vector <int> v(5,2);
    v1.push_back(5);
    v1.push_back(6);
    // cout<<v1[0];
    // v1.pop_back();
    // v1.pop_back();
    // cout<<v1[1]; //item remain temporarily accessible but is delected.
    // cout<<v1.size();
    // cout<<v1.at(1);
    vector<int> numbers = {10, 20, 30};
    numbers.insert(numbers.begin()+3, 30000000);
    v1.insert(v1.begin()+2,3);
    
    // numbers.pop_back();
    // cout<<numbers.at(0);
    // cout<<v1.at(2);
    // cout<<numbers.back();
    
    // v1.clear();
    v1.insert(v1.end(),789798);
    v1.erase(v1.end() -2);
    // cout<<v1.size()<<endl;
    // cout<<numbers.capacity()<<endl;
    // v1.resize(8);
    // cout<<v1.size()<<endl;
    // v1.push_back((2,3,4,5,7)); //last element is taken in
    // cout<<v1.at(3);
    // cout<<numbers.capacity()<<endl;
v1.swap(numbers);

if(!v1.empty())
{
for(int num : v1)
    {
        cout<<num;
    }
}
    



}
