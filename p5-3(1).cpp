#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter numbers:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=(1+i);j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
