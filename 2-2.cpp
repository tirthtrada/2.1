#include<iostream>
#include<iomanip>

using namespace std;

int main()

{
    float sv;
    string i,e,n,b;
    int a,s,m;
    
    cout<<"--------------------------------------------"<<endl;
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM"<<endl;
    cout<<"--------------------------------------------"<<endl;
    
    cout<<left<<setw(14)<<"Software virsion "<<":";
    cin>>sv;
    cin.ignore();
    cout<<left<<setw(14)<<"Institute "<<":";
    getline(cin,i);
    cout<<left<<setw(14)<<"Acadamic Year "<<":";
    cin>>a;
    
    cout<<"--------------------------------------------"<<endl;
    cout<<"Student Registretion"<<endl;
    cout<<"--------------------------------------------"<<endl;
    
    cout<<"Enter Enrollment No "<<":";
    cin>>e;
    cin.ignore();
    cout<<"Enter Student Name"<<":";
    getline(cin,n);
    cout<<"Enter Branch"<<":";
    cin>>b;
    cout<<"Enter Semester"<<":";
    cin>>s;
    cout<<"Enter Mobile No"<<":";
    cin>>m;
    
    cout<<"--------------------------------------------"<<endl;
    cout<<"Student Information"<<endl;
    cout<<"--------------------------------------------"<<endl;
    
    cout<<left<<setw(14)<<"Enrollment No"<<":"<<e<<endl;
    cout<<left<<setw(14)<<"Student Name"<<":"<<n<<endl;
    cout<<left<<setw(14)<<"Branch"<<":"<<b<<endl;
    cout<<left<<setw(14)<<"Semester"<<":"<<s<<endl;
    cout<<left<<setw(14)<<"Mobile No"<<":"<<m<<endl;
    
    return 0;
    
}
    
