#include <iostream>
#include <cstring>
using namespace std;

class Error{
    int err_code;
    char *err_desc;

    public:
        Error(int c, char *d)
        {
            err_code = c;
            err_desc = new char[strlen(d)];
            strcpy(err_desc,d);

        }
        void err_display(void)
        {
            cout<<"Error Code :"<<err_code<<endl<<"Error Description : "<<err_desc<<endl;
        }
};

int  main()
{
    try{
        cout<<"Press any key to throw an exception"<<endl;
        cin.get();
        throw Error(99,"Key Pressed Error");

    }
    catch(Error e)
    {
        cout<<"Error caught successfully"<<endl;
        e.err_display();
    }

    return 0; 
}
