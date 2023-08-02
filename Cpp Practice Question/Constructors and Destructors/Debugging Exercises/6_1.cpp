#include <iostream>
using namespace std;
class cube
{
    int length;
    int breadth;
    int width;
    public:
    cube() : length(5), breadth(5), width(5) {}
    cube(int l, int b): length(l), breadth(b){}
    int area_of_cube(){return length*breadth;}
    int volume_of_cube(){ return length*breadth*width;}
    void display(int temp)
    {
        cout << temp<< endl;
    }

};

int main()
{
    cube A1(4),B1, A2(4,4);
    int temp;
    temp = A1.area_of_cube();
    A1.display(temp);
    temp = B1.volume_of_cube();
    A1.display(temp);
    temp = A2.area_of_cube();
    B1.display(temp);

    return 0;
    
}