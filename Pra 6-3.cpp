#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Student
{
    string enrollment, name, grade;
    float percentage;
};

int main()
{
    Student s[100];
    int n, pos;

    cout << "STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "---------------------------------\n";

    cout << "\nEnter Number of Students : ";
    cin >> n;

    cout << "\nEnter Student Details\n";

    for (int i = 0; i < n; i++)
    {
        cin >> s[i].enrollment;
        cin.ignore();
        getline(cin, s[i].name);
        cin >> s[i].percentage;
        cin >> s[i].grade;
    }

    cout << "\n-----------------------------";
    cout << "\nCurrent Student Records\n";

    for (int i = 0; i < n; i++)
    {
        cout << s[i].enrollment << "  "
             << s[i].name << "  "
             << fixed << setprecision(2)
             << s[i].percentage << endl;
    }

    cout << "\n-----------------------------";
    cout << "\nInsert New Student\n";

    cout << "\nEnter Position : ";
    cin >> pos;

    if (pos >= 1 && pos <= n + 1)
    {
        for (int i = n; i >= pos; i--)
        {
            s[i] = s[i - 1];
        }

        cout << "Enter Enrollment Number : ";
        cin >> s[pos - 1].enrollment;

        cin.ignore();

        cout << "Enter Student Name : ";
        getline(cin, s[pos - 1].name);

        cout << "Enter Percentage : ";
        cin >> s[pos - 1].percentage;

        cout << "Enter Grade : ";
        cin >> s[pos - 1].grade;

        n++;

        cout << "\nRecord Inserted Successfully.\n";
    }

    cout << "\nUpdated Student Records\n";

    for (int i = 0; i < n; i++)
    {
        cout << s[i].enrollment << "  "
             << s[i].name << "  "
             << s[i].percentage << endl;
    }

    string search;
    cout << "\n-----------------------------";
    cout << "\nUpdate Student Record\n";

    cout << "\nEnter Enrollment Number : ";
    cin >> search;

    int found = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i].enrollment == search)
        {
            cout << "\nEnter New Percentage : ";
            cin >> s[i].percentage;

            cout << "Enter New Grade : ";
            cin >> s[i].grade;

            found = 1;
            cout << "\nRecord Updated Successfully.\n";
            break;
        }
    }

    if (found == 0)
        cout << "Record Not Found.\n";

    cout << "\n-----------------------------";
    cout << "\nDelete Student Record\n";

    cout << "\nEnter Position : ";
    cin >> pos;

    if (pos >= 1 && pos <= n)
    {
        for (int i = pos - 1; i < n - 1; i++)
        {
            s[i] = s[i + 1];
        }

        n--;

        cout << "\nRecord Deleted Successfully.\n";
    }

    cout << "\n-----------------------------";
    cout << "\nFinal Student Records\n";

    for (int i = 0; i < n; i++)
    {
        cout << s[i].enrollment << "  "
             << s[i].name << "  "
             << fixed << setprecision(2)
             << s[i].percentage << "  "
             << s[i].grade << endl;
    }

    return 0;
}
