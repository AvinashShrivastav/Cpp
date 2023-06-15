#include <iostream>
#include <vector>
using namespace std;
void display(vector <int> &v)
{
    for(int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector <int> v;
    cout<<"Initial Size "<<v.size()<<endl;

    //putting values into the vectors
    int noOfItems;
    cout<<"Enter number of items you want : ";cin>>noOfItems;
    int x;
    cout<<"Enter Values of items "<<endl;
    for(int i = 0; i <noOfItems; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cout<<"Size of vector after entring values is "<<v.size()<<endl;

    cout<<"Content of the vector is "<<endl;
    display(v);
    
    //pusing double value to int vector;
    v.push_back(6.664);
    cout<<"Content after pushing double value "<<endl;
    display(v);


    //Inserting element;

    int pos;
    cout<<"Enter the position where you want to enter a value";
    cin>>pos;
    if(pos<v.size())
    {
        int val;
        cout<<"Enter the value ";cin>>val;
        v.insert(v.begin() + pos, val );
    }
    cout<<"After Inserting value"<<endl;
    display(v);

    //Inserting Element

    vector <int> :: iterator itr = v.begin();
    itr = itr + 2;
    v.insert(itr,22,9);
    cout<<"After inserting using itr"<<endl;
    display(v);

    //Removing element;
    int remPos;
    cout<<"Enter the postion to remove ";cin>>remPos;
    v.erase(v.begin()+remPos);
    display(v);

    cout<<"END";

    return 0;




    
}
