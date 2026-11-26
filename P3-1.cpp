#include<iostream>
#include<iomanip>

using namespace std;
 
int main()

{
    float sv;
    string e,n,b;
    int mn,s,m,p,pf;
    
    

    cout<<"***********************************"<<endl;
    cout<<"STUDENT RECORD MANAGEMENET SYSTEM"<<endl;
    cout<<"***********************************"<<endl;
    
    cout<<"Software Virson "<<": ";
    cin>>sv;
    
    cout<<"------------------------------------"<<endl;
    cout<<"SYUDENT REGISTRASTION"<<endl;
    cout<<"------------------------------------"<<endl;
    
    cout<<left<<setw(24)<<"Enter Enrollment Number"<<":";
    cin>>e;
    cin.ignore();
    cout<<left<<setw(24)<<"Enter Student Name"<<":";
    getline(cin,n);
    cout<<left<<setw(24)<<"Enter branch"<<":";
    cin>>b;
    cout<<left<<setw(24)<<"Enter Semester"<<":";
    cin>>s;
    cout<<left<<setw(24)<<"Enter Mobile Number"<<":";
    cin>>mn;
    cout<<endl;
    
    cout<<"-------------------------------------"<<endl;
    cout<<"Acadamic Information"<<endl;
    cout<<"-------------------------------------"<<endl;
    
    cout<<left<<setw(35)<<"Enter Mathemetics Marks"<<":";
    cin>>m;
    cout<<left<<setw(35)<<"Enter Physics Marks"<<":";
    cin>>p;
    cout<<left<<setw(35)<<"Enter Programming Foundation Marks"<<":";
    cin>>pf;
    
    cout<<"--------------------------------------"<<endl;
    cout<<"Acadamic Summary"<<endl;
    cout<<"--------------------------------------"<<endl;
    
    float tm=m+p+pf;
    float am=tm/3;
    float pr=(tm/300)*100;
    
    
    cout<<left<<setw(16)<<"total marks"<<":"<<static_cast<int>(tm)<<endl;
    cout<<fixed<<setprecision(2);
    cout<<left<<setw(16)<<"Average Marks"<<":"<<am<<endl;
    cout<<left<<setw(16)<<"percentage"<<":"<<pr<<"%"<<endl;
    
    cout<<"--------------------------------------"<<endl;
    cout<<"Student Information"<<endl;
    cout<<"--------------------------------------"<<endl;
    
    
    cout<<left<<setw(20)<<"Enrollment Number"<<":"<<e<<endl;
    cout<<left<<setw(20)<<"Student Name"<<":"<<n<<endl;
    cout<<left<<setw(20)<<"Branch"<<":"<<b<<endl;
    cout<<left<<setw(20)<<"Semester"<<":"<<s<<endl;
    cout<<left<<setw(20)<<"Mobile Number"<<":"<<mn<<endl;
    cout<<"--------------------------------------"<<endl;
    
    return 0;
    
}
