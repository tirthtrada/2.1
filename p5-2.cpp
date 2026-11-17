#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    string name,branch,enroll;
    int n,i,sem,ch;
    long long int number;
    //student registration
    cout<<"----------------------------------------"<<endl;
    cout<<"STUDENT REGISTRATION"<<endl;
    cout<<"----------------------------------------"<<endl;

    //students details
    cout<<left<<setw(27)<<"Enter  enrollment number"<<": ";
    cin>>enroll;
    cout<<left<<setw(27)<<"Enter student name"<<":";
    cin>>name;
    cout<<left<<setw(27)<<"Enter branch"<<":";
    cin>>branch;
    cout<<left<<setw(27)<<"Enter semester"<<":";
    cin>>sem;
    cout<<left<<setw(27)<<"Enter mobile number"<<":";
    cin>>number;
    cout<<"student registration succesfull"<<endl;
M:
    cout<<"registration the another student? (Y/N)"<<endl;
    cout<<"if Y so press 1 and if N so press 2"<<endl;
    cin>>ch;
    switch(ch)
    {
    case 1:
        //students details
        cout<<left<<setw(27)<<"Enter  enrollment number"<<": ";
        cin>>enroll;
        cout<<left<<setw(27)<<"Enter student name"<<":";
        cin>>name;
        cout<<left<<setw(27)<<"Enter branch"<<":";
        cin>>branch;
        cout<<left<<setw(27)<<"Enter semester"<<":";
        cin>>sem;
        cout<<left<<setw(27)<<"Enter mobile number"<<":";
        cin>>number;
        cout<<"student registration succesfull"<<endl;
        goto M;
    case 2:
        cout<<"returning to main menu";
        break;
    }
}
