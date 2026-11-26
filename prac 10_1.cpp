#include <iostream>
#include<iomanip>
#include <string>
using namespace std;

struct Student
{
    string enrollment, name, branch;
    int semester;
    float percentage;
    string grade, mobile, email;
};

int main()
{
    Student s[100];
    int n;

    cout << "STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "====================================\n";

    cout <<left<<setw(25)<< "\nEnter Number of Students: ";
    cin >> n;

    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        cout <<left<<setw(25)<< "Enrollment Number "<<":";
        getline(cin, s[i].enrollment);

        cout <<left<<setw(25)<< "Student Name "<<":";
        getline(cin, s[i].name);

        cout <<left<<setw(25)<< "Branch"<<":";
        getline(cin, s[i].branch);

        cout <<left<<setw(25)<< "Semester "<<":";
        cin >> s[i].semester;

        cout <<left<<setw(25)<< "Percentage "<<":";
        cin >> s[i].percentage;

        cin.ignore();

        cout <<left<<setw(25)<< "Grade "<<":";
        getline(cin, s[i].grade);

        cout <<left<<setw(25)<< "Mobile Number "<<":";
        getline(cin, s[i].mobile);

        cout <<left<<setw(25)<< "Email ID "<<":";
        getline(cin, s[i].email);
    }

    for (int i = 0; i < n; i++)
    {
        cout << "\n-----------------------------\n";
        cout << "Student " << i + 1 << endl;

        cout << "Enrollment Number : " << s[i].enrollment << endl;
        cout << "Student Name      : " << s[i].name << endl;
        cout << "Branch            : " << s[i].branch << endl;
        cout << "Semester          : " << s[i].semester << endl;
        cout << "Percentage        : " << s[i].percentage << endl;
        cout << "Grade             : " << s[i].grade << endl;
        cout << "Mobile Number     : " << s[i].mobile << endl;
        cout << "Email ID          : " << s[i].email << endl;
    }
    cout << "\n=============================\n";
    cout << "Student Records\n";
    cout << "=============================\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\n" << s[i].enrollment << " "
             << s[i].name << " " << s[i].branch << endl;

        cout << "Semester : " << s[i].semester << endl;
        cout << "Percentage : " << s[i].percentage << endl;
        cout << "Grade : " << s[i].grade << endl;
        cout << "Mobile : " << s[i].mobile << endl;
        cout << "Email : " << s[i].email << endl;
    }

    return 0;
}
