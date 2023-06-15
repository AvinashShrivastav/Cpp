#include <iostream>
#include <list>
#include <cstdlib> //for using rand() function

using namespace std;

// void display(list <int> &lst)
// {
//     for (int i : lst)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }

// Display using Iterator

void display(list <int> &lst)
{
    list <int> :: iterator p ;
    for(p = lst.begin() ; p != lst.end(); ++p)
    {
        cout<<*p<<" ";
    }
    cout<<endl;
}


int main()
{
    list <int> list1; //Empty list of zero length
    list <int> list2(5); //Empty list of length 5
    display(list2);

    for(int i = 0; i <3; i++)
    {
        list1.push_back(rand()/100);
    }
    
    list <int> :: iterator p;
    for(p = list2.begin(); p != list2.end(); ++p)
    {
        *p = rand()/100;
    }

    cout<<"List 1"<<endl;
    display(list1);
    cout<<"List 2"<<endl;
    display(list2);

    //Add two elements at the end of the list
    list1.push_front(1);
    list1.push_back(2000);

    cout<<"List 1"<<endl;
    display(list1);


    //Remove an element front

    list2.pop_front();
    display(list2);

    list <int> listA, listB;
    listA = list1;
    listB  = list2;

    //Merging two lists(unsorted)
    list1.merge(list2);
    cout<<"Merged unsoted List"<<endl;
    display(list1);

    //sorting and mergin
    listB = {1,2,3,4,5};
    listA = {1,2,3,4,5};
    listA.sort(); //A is sorted 
    listB.sort(); //B is sorted
    listA.merge(listB); //I expect {1,2,3,4,5,1,2,3,4,5} //Actual output 1 1 2 2 3 3 4 4 5 5
    cout<<"Merged soted List"<<endl; //How?? final list should not be sorted;
    display(listA);
    
    //Reversing a list
    listA.reverse();
    cout<<"Reversed List";
    display(listA);

    listA.remove(1);
    listA.unique();
    display(listA);

    // listA.splice(listA.begin()+1,listB);
    // display(listA);



    return 0;



}
