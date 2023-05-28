#include <iostream>
 using namespace std;

 class M
 {  
    protected:
        int m;
    public:
        void get_m(int);
 };

 void M :: get_m(int a)
 {
    m = a;
 }

 class N
 {  
    protected:
        int n;
    public:
        void get_n(int);
 };

  void N :: get_n(int a)
 {
    n = a;
 }
 
 class P : public M, public N
 {
    public:
    void display(void);
 };

 void P :: display(void)
 {
    cout<<m<<endl<<n;
 }

 int main()
 {
    P p;
    p.get_m(8); //it may appear that m,n are attributes of class P but they aren't. They are dervied from thier parent class
    p.get_n(5);
    p.display();

    return 0;

 }