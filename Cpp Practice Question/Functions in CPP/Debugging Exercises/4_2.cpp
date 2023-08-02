#include <iostream>
using namespace std;
int main(){
    int a = 2;
    float b = 2.5;
    int show(a); //conflicting declaration
    float show(b);

    return 0;
}