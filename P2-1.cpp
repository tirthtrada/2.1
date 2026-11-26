#include <iostream>
using namespace std;

int main ()
{
    string e,n,b;
    int s,m;
    
    
    cout<<"-----------------------------------------------"<<endl;
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    
    cout<<"Enter Enrollment No : ";
    cin>>e;
    cin.ignore();
    cout<<"Enter Student Name : ";
    getline(cin,n);
    cout<<"Enter Branch : ";
    cin>>b;
    cout<<"Enter Semester : ";
    cin>>s;
    cout<<"Enter Mobile No : ";
    cin>>m;
    
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Student Information"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    
    cout<<"Enrollment No : "<<e<<endl;
    cout<<"Student Name : "<<n<<endl;
    cout<<"Branch : "<<b<<endl;
    cout<<"Semester : "<<s<<endl;
    cout<<"Mobile No : "<<m<<endl;
    
    return 0;
}


