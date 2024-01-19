#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

using namespace std;

int main()
{
    int a, i = 0;
    string text, old, password0, password1, password2, pass, name, age, user, word, word1;
    string creds[2], cp[2];

    cout<<"  Security System Password"<<endl;
    cout<<"_____________________________________"<<endl;
    cout<<"______|Menu Users Manager|___________"<<endl<<endl;
    cout<< "|     1. Register                  |"<<endl;
    cout<< "|     2. Login                     |"<<endl;
    cout<< "|     3. Change password           |"<<endl;
    cout<< "|_____4. Exit______________________|"<<endl;<<endl;

    do{
        cout<<endl<<endl;
        cout<<"Enter your choice:- ";
        cin>>a;
        swich(a)
        {
           case 1:{
                    cout<<"_______________________________"<<endl<<endl;
                    cout<<"|---------Register-------------|"<<endl;
                    cout<<"|______________________________|"<<endl<<endl;
                    cout<<"Please enter username:-";
                    cin>>name;
                    cout<<"Please enter the password";

           } 
        }
    }
}
