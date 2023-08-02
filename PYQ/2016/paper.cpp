#include <iostream>
#include <iomanip>
using namespace std;

int main()
// {
//     int m = 1, n = 2, i = 1, j = 5;
//     int r = (i--&&(4*++m<=n));
//     cout<<r;
//     cout<<"m,n,i,j = "<<m<<","<<n<<","<<i<<","<<j;
// }

// {
//     int n =5;
//     if(n = 0)
//     cout<<"n is zero"<<endl;
//     else
//     cout<<"n is not zero"<<endl;
//     cout<<"The square of n is"<<n*n<<endl;
// }

// {
//     int n, k= 5;
//     n = (100%k? k+1: k-1);
//     cout<<n<<" "<<k;
// }

// {
//     int list[] = {2,4,-5,6,7,0,-1,6};
//     bool pos = true;
//     int i =0;
//     while (pos and list[i] != 0)
//     {
//         pos = (list[i++]>0);
//     }
//     cout<<"pos = "<<pos<<" i = "<<i;
// }


// {
//     int i1 = -254;
//     float f1 = 53.6456;
//     int i2 = 8; 
//     cout<<"i1"<<setw(7)<<i1<<"i2"<<setw(4)<<i2; //i1   -254i2   8
//     cout.setf(ios::fixed,ios::floatfield);
//     cout<<setprecision(2);
//     cout<<"f1"<<f1;
//     cout.setf(ios::oct,ios::basefield);
//     cout<<"octal of i2"<<i2;
//     //i1   -254i2   8f153.65octal of i210

// }

// {
//     string x = "FROM:abcd@gmail.com";
//     int colonPos = x.find(':');
//     string prefix = x.substr(0,colonPos); //(pos,numberOfChar)
//     string suffix = x.substr(colonPos+1);
//     cout<<"-The message is from "<<suffix<<endl;
// }

// {
//     string str1("Brick house");
//     string str2("Mud house");
//     string str3("concrete");
//     if(str1.compare(6,5,str2) == 0 ) //str1 ka pos 6 se 5 char == str2
//         cout<<str1<<" is same as "<<str2<<endl;
//     else
//          cout<<str1<<" is not same as "<<str2<<endl;
//     string newstr = str1.substr(0,5);
//     newstr.append(str2);
//     cout<<"New string "<<newstr<<endl;
//     newstr.replace(5,3, str3);
//     cout<<"Now New string "<<newstr<<endl;
// }

// class base
// {
//     int no1;
//     public:
//     int no2;
//     base()
//     {
//         cout<<"Base Constructor"<<endl;
//     }
//     void getdata();
//     int getno1();
//     void showno1();
// };

// class derived : public base
// {
//     int no3;
//     public:
//     derived()
//     {
//         cout<<"Derived Constructor"<<endl;
//     }
//     void add();
//     void display();
// };

// void base :: getdata()
// {
//     no1 = 10;
//     no2 = 20;
// }
// int base :: getno1()
// {
//     return no1;
// }
// void base :: showno1()
// {
//     cout<<"Number 1 = "<<no1<<endl;
// }
// void derived :: add()
// {
//     no3 = no2 + getno1();
// }
// void derived :: display()
// {
//     cout<<"Number 1 "<<getno1()<<endl;
//     cout<<"Number 2 "<<no2<<endl;
//     cout<<"Sum"<<no3<<endl;
// }

// main()
// {
//     derived d;
//     d.getdata();
//     d.add();
//     d.showno1();
//     d.display();
//     d.add();
//     d.display();

//     return 0;
// }
// intf(int *aa , int &bb)
// {   
//     &bb = 8;
//     aa[1] = 8;
//     aa[0] == bb;

// }


// class try1
// {
//     int k;
//     public :
//     void try1(int l)
//     {
//         k = l;
//     }
//     friend void func(try1 &t);
// };

// void func(try &t)
// {
//     cout<<t.k;
// }
// int main()
// {
//     try1 t1(2); try1 t2(3);
//     t1.func(t2);

//     return 0;
// }


// {
//     int n;
//     cin>>n;

//     for (int i = 1; i <= n; i++ )
//     {
//         for(int j = 1; j <=i; j++)
//         {
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }