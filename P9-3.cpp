#include <iostream>
using namespace std;
int main()
{
    cout << "********************************************\n";
    cout << "       MEMORY ORGANIZATION ANALYZER\n";
    cout << "********************************************\n";
    // Stack Memory
    int local = 100;
    cout << "--------------- Stack Memory ----------------\n";
    cout << "Local Variable Value\n";
    cout << local << endl;
    cout << "Memory Address\n";
    cout << &local << endl;
    cout << "---------------------------------------------\n";
    // Dynamically Allocated Memory
    int *dynamic = new int(250);
    cout << "--------------- Dynamically Allocated Memory ------------\n";
    cout << "Allocated Value\n";
    cout << *dynamic << endl;
    cout << "Memory Address\n";
    cout << static_cast<void*>(dynamic) << endl;
    cout << "---------------------------------------------\n";
    // Multi-level Referencing
    int original = 50;
    int *p1 = &original;
    int **p2 = &p1;
    int ***p3 = &p2;
    cout << "----------- Multi-level Referencing ----------\n";
    cout << "Original Value\n";
    cout << original << endl;
    cout << "Single-level Address\n";
    cout << static_cast<void*>(p1) << endl;
    cout << "Double-level Address\n";
    cout << static_cast<void*>(p2) << endl;
    cout << "Triple-level Address\n";
    cout << static_cast<void*>(p3) << endl;
    cout << "Value Accessed through Three Levels\n";
    cout << ***p3 << endl;
    cout << "---------------------------------------------\n";
    // Memory Safety: Null Pointer
    int *nullPtr = nullptr;
    cout << "--------------- Memory Safety ----------------\n";
    cout << "Null Reference\n"; if (nullPtr == nullptr)
    { cout << "Safe (Reference is NULL)\n";
    }
    // Release dynamically allocated memory
    cout << "---------------------------------------------\n";
    cout << "Invalid Reference\n";
    delete dynamic;
    dynamic = nullptr;
    cout << "Memory Released Successfully\n";
    cout << "Reference Invalid\n";
    cout << "---------------------------------------------\n";
    return 0;
    }
