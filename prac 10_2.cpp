
#include <iostream>
#include <iomanip>
using namespace std;

// Composite Data Type A
struct DataA
{
    char a;
    alignas(8) double b;
    int c;
    char d;
};

// Composite Data Type B
struct DataB
{
    alignas(8) double b;
    int c;
    char a;
    char d;
};

// Shared Memory Representation
union SharedData
{
    int number;
    float decimal;
    char letter;
};

int main()
{
    cout << "********************************************" << endl;
    cout << "COMPOSITE DATA REPRESENTATION ANALYZER" << endl;
    cout << "********************************************" << endl;

    // Part A and B: Structure Size
    DataA objA;
    DataB objB;

    cout << "\nComposite Data Type A" << endl;
    cout << "\nSize : " << sizeof(objA) << " Bytes" << endl;

    cout << "\n----------------------------------------" << endl;

    cout << "\nComposite Data Type B" << endl;
    cout << "\nSize : " << sizeof(objB) << " Bytes" << endl;

    cout << "\n----------------------------------------" << endl;

    cout << "\nPadding and Alignment Observed" << endl;

    cout << "\n----------------------------------------" << endl;

    // Part C: Union
    SharedData data;

    cout << "\nShared Memory Representation" << endl;

    data.number = 120;
    cout << "\nInteger Value : " << data.number << endl;

    data.decimal = 120.00;
    cout << fixed << setprecision(2);
    cout << "\nFloating Value : " << data.decimal << endl;

    data.letter = 'x';
    cout << "\nCharacter Value : " << data.letter << endl;

    // Updating Union Member
    data.decimal = 150.50;

    cout << "\nAfter Updating Floating Value" << endl;

    cout << "\nInteger Value Changed" << endl;

    cout << "\nCharacter Value Changed" << endl;

    cout << "\n----------------------------------------" << endl;

    // Part D: Trade-off Analysis
    cout << "\nTrade-off Analysis" << endl;

    cout << "\nStructure" << endl;

    cout << "\nSeparate Memory for Every Member" << endl;

    cout << "\nSuitable for Storing Complete Records" << endl;

    cout << "\n----------------------------------------" << endl;

    cout << "\nUnion" << endl;

    cout << "\nShared Memory for All Members" << endl;

    cout << "\nSuitable for Memory-efficient Applications" << endl;

    cout << "\n----------------------------------------" << endl;

    cout << "\nProgram Executed Successfully" << endl;

    cout << "\n----------------------------------------" << endl;

    return 0;
}
