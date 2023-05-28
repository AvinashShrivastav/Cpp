#include <iostream>
#include <string>
using namespace std;

class TEST
{
    int TestCode;
    string Description;
    int NoOfCandidate;
    int CenterReqd;
    int CALCNTR(int NoOfCandidate)
    {
        return(NoOfCandidate/100+1); //calculating number of center required
    }
    public:
        void SCHEDULE();
        void DISPTEST();
};
void TEST :: SCHEDULE()
{
    cout<<"<--------TEST SCHEDULER--------->"<<endl;
    cout<<"_________________________________"<<endl;
    cout<<"Enter the Test Code: ";
    cin>>TestCode;

    cout<<"Enter the Description: ";
    cin.ignore(); //Ignoring cin before getline in order to drop /n left out of cin that terminates getline()
    getline(cin,Description);

    cout<<"Enter the number of candidates: ";
    cin>>NoOfCandidate;
    cout<<"__________________________________"<<endl;

    CenterReqd = CALCNTR(NoOfCandidate); 
}
void TEST :: DISPTEST()
{
    cout<<"<------Recorded Test Information------>"<<endl;
    cout<<"Test Code : "<<TestCode<<endl;
    cout<<"Description : "<<Description<<endl;
    cout<<"Number of Candidates : "<<NoOfCandidate<<endl;
    cout<<"Number of Center Required : "<<CenterReqd<<endl;
    cout<<"<-------------------------------------->"<<endl;

}

int main()
{
    TEST maths; //creating an object of TEST class
    maths.SCHEDULE(); //calling test scheduler function
    maths.DISPTEST(); //calling test data displayer function
    return 0;
}



// Output:
// <--------TEST SCHEDULER--------->
// _________________________________
// Enter the Test Code: 1002
// Enter the Description: CPP Test Unit 2 and 3
// Enter the number of candidates: 2000
// __________________________________
// <------Recorded Test Information------>
// Test Code : 1002
// Description : CPP Test Unit 2 and 3
// Number of Candidates : 2000
// Number of Center Required : 21
// <-------------------------------------->
// PS C:\Users\hp\Desktop\Cpp\Cpp Assignment> 