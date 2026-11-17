#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter numbers:";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j<n-i+1)
            {
                cout<<" ";
            }
            else
            {
                cout<<j;
            }
        }
        cout<<endl;
    }
}


