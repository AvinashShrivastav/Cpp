#include <iostream>
using namespace std;

class weight
{
    int leter, ML;
    public:
    void getdata();
    void putdata();
    void sum_of_weight(weight, weight);
};

void weight :: getdata()
{
    cout<<"in leter:";
    cin>>leter;
    cout<<"in ML:";
    cin>>ML;
}

void weight :: putdata()
{
    cout<<leter<<"leter and "<<ML<<" ML ";
}

void weight:: sum_of_weight(weight w1, weight w2)
{
    ML = w1.ML + w2.ML;
    leter = ML/1000;
    ML = ML%1000;
    leter += w1.leter + w2.leter;
}

int main()
{
    weight w1, w2, w3;
    w1.getdata();
    w2.getdata();
    sum_of_weight(w1, w2); //member function must be called with object
    w3.putdata();

    return 0;
}