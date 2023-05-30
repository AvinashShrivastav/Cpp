char key;
    while (key != ' ')
    {
        cout<<"String Manipulation Program : Press a-g to manipulate strings, press spacebar to exit"<<endl;
         cout<<"       a.	Show address of each character in string"<<endl;
         cout<<"       b.	Concatenate two strings. "<<endl;
         cout<<"       c.	Compare two strings "<<endl;
         cout<<"       d.	Calculate length of the string (use pointers) "<<endl;
         cout<<"       e.	Convert all lowercase characters to uppercase "<<endl;
         cout<<"       f.	Reverse the string "<<endl;
         cout<<"       g.	Insert a string in another string at a user specified position"<<endl;

        char response;
        cout<<"Enter your response : ";
        cin>> response;

        switch (response)
        {
            case 'a' : 
            {
                string str;
                cout<<"Enter a string : ";
                cin>>str;
                showAddress(str);
                break;

            }

            case 'b': 
            {
                string str1, str2;
                cout<<"Enter first string : ";
                cin.ignore();
                getline(cin, str1);
                cout<<"Enter second string : ";
                getline(cin, str2);
                string concinated = concatenate(str1, str2);
                cout<<concinated<<endl; 
                break;

            }

            case 'c': 
            {
                string str1, str2;
                cout<<"Enter first string : ";
                cin.ignore();
                getline(cin, str1);
                cout<<"Enter second string : ";
                getline(cin, str2);
                compare(str1, str2);
                break;

            }

            case 'd':
            {
                string str;
                cout<<"Enter a string : ";
                cin>>str;
                int len = stringLength(str);
                cout << len<<endl;
                break;
            }

            case 'e' :
            {
                string str;
                cout<<"Enter a string : ";
                cin>>str;
                string upper_str = uppercase(str);
                cout <<upper_str<<endl;
                break;
            }
            case 'f':
            {
                string str;
                cout<<"Enter a string : ";
                cin>>str;
                string reversed_str = reverse(str);
                cout<<reversed_str<<endl;
                break;
            }
            case 'g':
            {
                string str1, str2;
                int pos;
                cout<<"Enter first string 1 : ";
                cin.ignore();
                getline(cin, str1);
                cout<<"Enter second string 2 : ";
                getline(cin, str2);
                cout<<"Enter position where you want to insert string 2 : ";
                cin>>pos;
                string newStr = insertString(str1, str2, pos);
                cout<<newStr<<endl;
                break;
            }
            default:
            {
                break;
            }
        }
    }
