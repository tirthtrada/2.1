#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<"******************************************"<<endl;
    cout<<"SPORTS EVENT SCORE ANALYSIS "<<endl;
    cout<<"******************************************"<<endl;
    short int n,i,s[5],l,k,T;
    float av;
    char id[5][5],name[15][5];
    cout<<"Enter number of participant:";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"Enter participant ID:";
        cin>>id[i];
        cout<<endl<<"Enter participant Name:";
        cin>>name[i];
        cout<<"Enter score:";
        cin>>s[i];
    }
    //participant performance details
    cout<<"-------------------------------------------------"<<endl;
    cout<<"    Participant Performance "<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<setw(5)<<"ID"<<setw(7)<<"name"<<setw(8)<<"score"<<endl;
    cout<<"------------------------------------------------"<<endl;
    for (k=0; k<n; k++)
    {
        cout<<setw(5)<<id[k]<<setw(7)<<name[k]<<setw(8)<<s[k]<<endl;

    }
    cout<<"---------------------------------------------------"<<endl;

    T=0;
    for(l=0; l<n; l++)
    {
        T=T+s[l];
    }
    cout<<"Total marks:"<<T<<endl;
    av=T/n;
    cout<<"Average score:"<<av<<endl;
    //find highest score
    int highest=s[0];
    int lowest =s[0];
    for(i=0; i<n; i++)
    {

        if(s[i]>highest)
        {
            highest=s[i];

        }

        else if(s[i+1]<s[i])
        {
            lowest=s[i+1];
        }
    }
    cout<<"Highest score:"<<highest<<endl;
    cout<<"Lowest score:"<<lowest;
    return 0;

}
