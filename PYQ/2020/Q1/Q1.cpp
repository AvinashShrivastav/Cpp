// Q1
#include <iostream>
#include <algorithm>
using namespace std;

float calculate(float marks[]);
char grade(float marks);

int main()
{
    float marks[5];
    for (int i = 0; i < 5; i++)
    {
        float mark;
        cout<<"Enter marks of subject"<<i+1<<" :";
        cin>> mark;
        marks[i] = mark;
    }
    cout<<"Average marks of best three subjects is "<<calculate(marks);
    cout<<"Grade obtained is "<<grade(calculate(marks));
}
float calculate(float marks[])
{
    
    sort(marks,marks+5);
    float top_three_avg = (marks[2]+ marks[3]+ marks[4])/3;
    return top_three_avg;
}

char grade(float percentage)
{
    if(percentage >= 80){return 'A';}
    else if(percentage >= 60){return 'B';}
    else if(percentage >= 40) { return 'C';}
    else {return 'D';}
}