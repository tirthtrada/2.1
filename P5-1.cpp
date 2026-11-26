#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    //student record management system
    cout<<"******************************************************"<<endl;
    cout<<"STUDENT RCORD MANAGEMENT SYSTEM"<<endl;
    cout<<"******************************************************"<<endl;
    int n,t,m,i;
    float av,p;
    t=0;
    //enter number of subjects and marks
    cout<<"Enter number of subjects:";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cout<<"Enter marks of subject"<<" "<<i<<":";
        cin>>m;
        t=t+m;
    }
    av=(float)t/n;
    p=av;

    //acedemic resulf details
    cout<<"------------------------------------------"<<endl;
    cout<<"           Academic result                "<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<left<<setw(14)<<"Total marks"<<":"<<t<<endl;
    cout<<left<<setw(14)<<"Average marks"<<":"<<av<<endl;
    cout<<left<<setw(14)<<"Percentage"<<":"<<av<<"%"<<endl;
    if(p>35)
    {
        cout<<left<<setw(14)<<"result:"<<" pass"<<endl;
    }
    else
    {
        cout<<left<<setw(14)<<"result"<<":"<<" fail";

        if(p>=90)
        {
            cout<<left<<setw(14)<<"grade: o"<<endl;

        }
        else if(p>=80)
        {
            cout<<left<<setw(14)<<"grade "<<":A+"<<endl;
        }
        else if(p>=70)
        {
            cout<<left<<setw(14)<<"grade "<<": A"<<endl;
        }
        else if (p>=60)
        {
            cout<<left<<setw(14)<<"grade"<<" : B"<<endl;
        }
        else if (p>=50)
        {
            cout<<left<<setw(14)<<"grade "<<": B"<<endl;
        }
        else if(p>=40)
        {
            cout<<left<<setw(14)<<"grade"<<":c"<<endl;
        }
        else if (p<40)
        {
            cout<<left<<setw(14)<<"grade"<<":f"<<endl;
        }
        cout<<"--------------------------------------"<<endl;
    }
}


