#include <iostream>
#include <string>
using namespace std;
int globalVariable = 100;
void hello()
{
    cout << "Hello World";
}
int number()
{
    return 50;
}
void square(int n)
{
    cout << n << " Square is " << n * n;
}
int addition(int a, int b)
{
    return a + b;
}

void callbyvalue(int x)
{
    x = 150;
}
void callByReference(int &a)
{
    a = 150;
}

void scopeDemo()
{
    int localVariable = 55;
    cout << "Inside Function " << endl;
    cout << "Local Variable: " << localVariable << endl;
    cout << "Global Variable: " << globalVariable << endl;
}
void studentDetails(string name)
{
    cout << "Name: " << name << endl;
}
void studentDetails(string name, int percentage)
{
    cout << "Name: " << name << endl;
    cout << "Percentage: " << percentage << endl;
}
void studentDetails(string name, int percentage, string mobNumber)
{
    cout << "Name: " << name << endl;
    cout << "Percentage: " << percentage << endl;
    cout << "Comtact Details: " << mobNumber << endl;
}
int main()
{
    cout<<"26CE091 Sneh satapara"<<endl;
    cout<<endl;
    cout << "--------Part A- Function Design-------" << endl;
    hello();
    cout << endl;
    cout << "Number returned by function is: " << number();
    cout << endl;
    square(3);
    cout << endl;
    cout << "Addition of 5 and 3: " << addition(5, 3);
    cout << "\n-------------------------------\n";
    cout << endl;
    cout << "-----------Part B- Parameter Passing---------" << endl;
    int a = 50;
    cout << "Before Call By Value: " << a << endl;
    callbyvalue(a);
    cout << "After Call By Value: " << a << endl;
    int b = 70;
    cout << "Before Call by Reference: " << b << endl;
    callByReference(b);
    cout << "After Call by Reference: " << b << endl;
    cout << endl;
    cout << "------------------Part C- Scope and Visibility----------" << endl;
    scopeDemo();
    cout << "\nInside the main" << endl;
    cout << "Global Variable: " << globalVariable << endl;
    cout << "------------------------------------------" << endl;
    cout << endl;
    cout << "-----------------Part D- Function Overloading-----------" << endl;
    studentDetails("sneh");
    cout << endl;
    studentDetails("sneh", 98);
    cout << endl;
    studentDetails("Sneh", 98, "8849685601  ");
    return 0;
}
