#include <iostream>
#include <string>
using namespace std;

int main()
{
    string enrollment, name, branch;
    string firstName, lastName, keyword;

    cout << "********************************************" << endl;
    cout << "     STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "********************************************" << endl;

    cout << "\nEnter Enrollment Number : ";
    cin >> enrollment;

    cin.ignore();

    cout << "\nEnter Student Name    : ";
    getline(cin, name);

    cout << "\nEnter Branch          : ";
    getline(cin, branch);

    cout << "\n----------------------------------------" << endl;

    cout << "\nStudent Reference" << endl;
    cout << name << "-" << enrollment << endl;

    cout << "\n----------------------------------------" << endl;

    int space = name.find(' ');

    firstName = name.substr(0, space);
    lastName = name.substr(space + 1);

    cout << "\nFirst Name" << endl;
    cout << firstName << endl;

    cout << "\nLast Name" << endl;
    cout << lastName << endl;

    cout << "\n----------------------------------------" << endl;

    cout << "\nEnter Keyword : ";
    cin >> keyword;

    if (name.find(keyword) != string::npos)
    {
        cout << "\nKeyword Found." << endl;
    }
    else
    {
        cout << "\nKeyword Not Found." << endl;
    }

    cout << "\n----------------------------------------" << endl;

    cout << "\nStudent Report" << endl;
    cout << "\nEnrollment Number : " << enrollment << endl;
    cout << "\nStudent Name      : " << name << endl;
    cout << "\nBranch            : " << branch << endl;

    return 0;
}
