#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int c,sem;
    string enrol,name,branch;
    long long int number;
    int m1,m2,m3,t;
    float a,p;
A:
    cout<<"******************************************************"<<endl;
    cout<<"STUDENT RCORD MANAGEMENT SYSTEM"<<endl;
    cout<<"******************************************************"<<endl;
    cout<<"-------------------main-------------------------------"<<endl;
    cout<<"1.register new student"<<endl;
    cout<<"2.display student record"<<endl;
    cout<<"3.enter stuent marks"<<endl;
    cout<<"4.dispay academicyear"<<endl;
    cout<<"5.exit"<<endl;
    cout<<"enter your choice"<<":";
    cin>>c;

    //accoding to your choice

    switch(c)
    {
    case 1:
        //student registration
        cout<<"----------------------------------------"<<endl;
        cout<<"STUDENT REGISTRATION"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<left<<setw(25)<<"Enter  enrollment number"<<": ";
        cin>>enrol;
        cout<<left<<setw(25)<<"Enter student name"<<": ";
        cin>>name;
        cout<<left<<setw(25)<<"Enter branch"<<": ";
        cin>>branch;
        cout<<left<<setw(25)<<"Enter semester"<<": ";
        cin>>sem;
        cout<<left<<setw(25)<<"Enter mobile number+"<<": ";
        cin>>number;
        cout<<"student registered succesfully."<<endl;
        cout<<"-----------------------------------";
        goto A;
    case 2:
        //display student records
        if( 1)
        {
            cout<<left<<setw(25)<<"Enter  enrollment number"<<": "<<enrol<<endl;
            cout<<left<<setw(25)<<"Enter student name:"<<": "<<name<<endl;
            cout<<left<<setw(25)<<"Enter branch"<<": "<<branch<<endl;
            cout<<left<<setw(25)<<"Enter semester"<<": "<<sem<<endl;
            cout<<left<<setw(25)<<"Enter mobile number+"<<": "<<number<<endl;
        }
        else
        {
            cout<<"go to registration";
        }
        goto A;
    case 3:
        //students marks details enter
        cout<<"-------------------------------------"<<endl;
        cout<<"student record"<<endl;
        cout<<"-------------------------------------"<<endl;

        cout<<left<<setw(35)<<"Enter marks of maths"<<":";
        cin>>m1;
        cout<<left<<setw(35)<<"Enter marks of physics"<<":";
        cin>>m2;
        cout<<left<<setw(35)<<"Enter marks of programing fondation"<<":";
        cin>>m3;
        t=m1+m2+m3;
        cout<<left<<setw(14)<<"Total marks:"<<t<<endl;

        a=(float)t/3.0;
        p=(float)t/3.0;

        cout<<left<<setw(14)<<"Average marks:"<<a<<endl;
        cout<<left<<setw(14)<<"Percentage:"<<p<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"Academic result"<<endl;
        cout<<"------------------------------------------"<<endl;
        goto A;
    case 4:

        //display academic result of student
        if(3)
        {
            cout<<"-------------------------------------"<<endl;
            cout<<"academic summary"<<endl;
            cout<<"-------------------------------------"<<endl;
            if(p>=90)
            {
                cout<<"grade: o"<<endl;
                cout<<"resuls:passed"<<endl;
            }
            else if(p>=80)
            {
                cout<<"grade :A+"<<endl;
                cout<<"resuls:passed"<<endl;
            }
            else if(p>=70)
            {
                cout<<"grade : A"<<endl;
                cout<<"resuls:passed"<<endl;
            }
            else if (p>=60)
            {
                cout<<"grade : B"<<endl;
                cout<<"resuls:passed"<<endl;
            }
            else if (p>=50)
            {
                cout<<"grade : B"<<endl;
                cout<<"resuls:passed"<<endl;
            }
            else if(p>=40)
            {
                cout<<"grade:c"<<endl;
                cout<<"resuls:passed"<<endl;
            }
            else if (p<40)
            {
                cout<<"grade:f"<<endl;
                cout<<"result is failed"<<endl;
            }
            cout<<"--------------------------------------"<<endl;
            goto A;
        case 5:
            goto A;
        }
    }
}
