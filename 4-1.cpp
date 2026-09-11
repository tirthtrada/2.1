#include<iostream>
#include<iomanip>

using namespace std;
int main()

{
    int m,p,f;
    
    
    
    
    cout<<"Enter Mathemetics Marks"<<":";
    cin>>m;
    cout<<"Enter Physics Marks"<<":";
    cin>>p;
    cout<<"Enter Programming Foundation Marks"<<":";
    cin>>f;
    
    cout<<"\n\n***********************************"<<endl;
    cout<<"STUDENT RECORD MANAGEMENET SYSTEM"<<endl;
    cout<<"***********************************"<<endl;
    
    cout<<"\n\n------------------------------------"<<endl;
    cout<<"Academic Summary"<<endl;
    cout<<"------------------------------------"<<endl;
    
    
    float tm=m+p+f;
    float am=(m+p+f)/3;
    float pr=(tm/300)*100;
        
    
    cout<<left<<setw(16)<<"\ntotal marks"<<" :"<<tm<<endl;
    
    cout<<left<<setw(16)<<"Average Marks"<<":"<<am<<endl;
    cout<<left<<setw(16)<<"percentage"<<":"<<pr<<"%"<<endl;

    cout<<"\n\n--------------------------------------"<<endl;
    cout<<"Acadamic Result"<<endl;
    cout<<"--------------------------------------"<<endl;

    if (pr>=33)
    {
        cout<<"\nRESULT   :   pass"<<endl;
        cout<<"\nCongratulation!! You have successfully Passed"<<endl;
    }
    
    else
    {
        cout<<"\nRESULT  :  fail"<<endl;
        cout<<"\nBetter luck next time"<<endl;
        
    }

    return 0;
    
}


 
