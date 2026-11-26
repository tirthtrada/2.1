#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct Student
{
    string enrollment;
    string name;
    string branch;
    int semester;
    float percentage;
    string grade;
    };
    int main()
    {
        int n;
        cout << "********************************************\n";
        cout << "      STUDENT RECORD MANAGEMENT SYSTEM\n";
        cout << "********************************************\n";
        cout << "Enter Number of Students : ";
        cin >> n;
        if (n <= 0)
        {
        cout << "Invalid number of students.\n";
        return 1;
        }
        Student *s = new Student[n];
        cout << "Dynamic Memory Allocated Successfully\n";
        cout << "--------------------------------------------\n";
        cout << "Enter Student Details\n\n";
        for (int i = 0; i < n; i++)
        {
        cout << "Student " << i + 1 << endl;
        cout << "Enrollment Number : ";
        cin >> s[i].enrollment;
        cout << "Student Name : ";
        getline(cin >> ws, s[i].name);
        cout << "Branch : ";
        cin >> s[i].branch;
         cout << "Semester : ";
         cin >> s[i].semester;
         cout << "Percentage : ";
         cin >> s[i].percentage;
         cout << "Grade : ";
         cin >> s[i].grade;
         cout << "--------------------------------------------\n";
         }
         float total = 0;
          float highest = s[0].percentage;
           float lowest = s[0].percentage;
           cout << "\nStudent Records using Address-based Access\n";
           for (int i = 0; i < n; i++)
            {
            Student *ptr = s + i;
           cout << "Address : " << static_cast<void*>(ptr) << endl;
           cout << ptr->enrollment << " "<< ptr->name << " "<< ptr->branch << " "<< ptr->semester << " "<< fixed << setprecision(2) << ptr->percentage<< " " << ptr->grade << endl;
           cout << "--------------------------------------------\n";
           total += ptr->percentage;
           if (ptr->percentage > highest)
            highest = ptr->percentage;
           if (ptr->percentage < lowest)
            lowest = ptr->percentage;
           }
            cout << "\nAcademic Summary\n";
            cout << fixed << setprecision(2);
            cout << "Class Average Percentage : "<< total / n << " %\n";
            cout << "Highest Percentage : " << highest << " %\n";
            cout << "Lowest Percentage : " << lowest << " %\n";
            cout << "--------------------------------------------\n";
            delete[] s;
            s = nullptr;
            cout << "Dynamic Memory Released Successfully\n";
            cout << "Address Variable Reset Successfully\n";
            cout << "--------------------------------------------\n";
            cout << "Program Executed Successfully\n";
            cout << "--------------------------------------------\n";
            return 0;
            }
