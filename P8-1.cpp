#include <iostream>
#include <string>
using namespace std;

string enrollment, name, branch;
int semester, m1, m2, m3, m4, m5, total;
float percentage;

void registration()
{
    cout << "Enter Enrollment Number : ";
    cin >> enrollment;

    cin.ignore();

    cout << "Enter Student Name     : ";
    getline(cin, name);

    cout << "Enter Branch           : ";
    cin >> branch;

    cout << "Enter Semester         : ";
    cin >> semester;

    cout << "\nEnter Marks" << endl;

    cout << "Subject 1 : ";
    cin >> m1;

    cout << "Subject 2 : ";
    cin >> m2;

    cout << "Subject 3 : ";
    cin >> m3;

    cout << "Subject 4 : ";
    cin >> m4;

    cout << "Subject 5 : ";
    cin >> m5;
}

void calculate()
{
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;
}

void report()
{
    string grade, result;

    if (percentage >= 80)
        grade = "A+";
    else if (percentage >= 70)
        grade = "A";
    else if (percentage >= 60)
        grade = "B";
    else if (percentage >= 50)
        grade = "C";
    else if (percentage >= 35)
        grade = "D";
    else
        grade = "F";

    if (m1 >= 35 && m2 >= 35 && m3 >= 35 &&
        m4 >= 35 && m5 >= 35)
        result = "PASS";
    else
        result = "FAIL";

    cout << "\n----------------------------------------" << endl;
    cout << "\nAcademic Report" << endl;
    cout << "----------------------------------------" << endl;

    cout << "\nEnrollment Number : " << enrollment << endl;
    cout << "\nStudent Name      : " << name << endl;
    cout << "\nBranch            : " << branch << endl;
    cout << "\nSemester          : " << semester << endl;

    cout << "\nTotal Marks       : " << total << endl;
    cout << "\nPercentage        : " << percentage << "%" << endl;
    cout << "\nGrade             : " << grade << endl;
    cout << "\nResult            : " << result << endl;

    cout << "\n----------------------------------------" << endl;
    cout << "Program Executed Successfully Using User-defined Functions." << endl;
    cout << "----------------------------------------" << endl;
}

int main()
{
    cout << "********************************************" << endl;
    cout << "    STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "********************************************" << endl;

    cout << "\n--------- Student Registration ---------" << endl;

    registration();

    calculate();

    report();

    return 0;
}
