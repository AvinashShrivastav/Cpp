#include <iostream>
 using namespace std;

 class M
 {  
    protected:
        int m;
    public:
        void get_m(int);
        void display(void);
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
        void display(void);
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

 void M :: display(void)
 {
    cout<<"display of class M called"<<endl;
 }
 void N :: display(void)
 {
    cout<<"display of class N called"<<endl;
 }
 void P :: display(void)
 {
    cout<<"display of class P called"<<endl;
 }

 int main()
 {
    P p;
    p.get_m(8); //it may appear that m,n are attributes of class P but they aren't. They are dervied from thier parent class
    p.get_n(5);
    p.display(); //display of class P called--overwrites
    p.M::display();//display of class M called
    p.N::display();//display of class N called

    return 0;

 }