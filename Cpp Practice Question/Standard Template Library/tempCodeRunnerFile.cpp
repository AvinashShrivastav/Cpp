Display using Iterator

void display(list <int> &lst)
{
    list <int> :: iterator p ;
    for(p = lst.begin() ; p != lst.end(); ++p)
    {
        cout<<*p<<" ";
    }
    cout<<endl;
}