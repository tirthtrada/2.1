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
        cout<<left<<setw(10)<<"\nRESULT"<<": pass"<<endl;
        cout<<"\nCongratulation!! You have successfully Passed"<<endl;
    }
    
    else
    {
        cout<<left<<setw(10)<<"\nRESULT"<<": fail"<<endl;
        cout<<"\nBetter luck next time"<<endl;
        
    }
    
    if (pr>90)
    {
        cout<<left<<setw(10)<<"\nGRADE"<<": O"<<endl;
        cout<<left<<setw(10)<<"Outstanding"<<endl;
    }
    
    else if (pr>80)
    {
        cout<<left<<setw(10)<<"\nGRADE"<<": A+"<<endl;
        cout<<left<<setw(10)<<"Excellent"<<endl;
    }
    else if (pr>70)
    {
        cout<<left<<setw(10)<<"\nGRADE"<<": A"<<endl;
        cout<<left<<setw(10)<<"Very Good"<<endl;
    }
    else if (pr>60)
    {
        cout<<left<<setw(10)<<"\nGRADE"<<": B+"<<endl;
        cout<<left<<setw(10)<<"Good"<<endl;
    }
    else if (pr>50)
    {
        cout<<left<<setw(10)<<"\nGRADE"<<": B"<<endl;
        cout<<left<<setw(10)<<"Satisfactory"<<endl;
    }
    else if (pr>40)
    {
        cout<<left<<setw(10)<<"\nGRADE"<<": c"<<endl;
        cout<<left<<setw(10)<<"Needs Improvement"<<endl;
        
    }
    return 0;
    
}


 

