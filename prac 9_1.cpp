#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
   {
       int num = 25;
        char ch = 'A'; float fl = 85.60f;
         cout << "********************************************\n";
         cout << "MEMORY ADDRESS EXPLORER\n";
         cout << "********************************************\n";
         cout << "------------ Variable Information ------------\n";
         cout << "Integer Value : " << num << endl;
         cout << "Memory Address : " << &num << endl;
         cout << "----------------------------------------------\n";
         cout << "Character Value : " << ch << endl;
         cout << "Memory Address : " << static_cast<void*>(&ch) << endl;
         cout << "----------------------------------------------\n";
         cout << "Floating Value : " << fixed << setprecision(2) << fl << endl;
         cout << "Memory Address : " << &fl << endl;
         cout << "----------------------------------------------\n"; int *ptr = &num;
         cout << "Indirect Referencing\n";
         cout << "Stored Value : " << *ptr << endl;
         *ptr = 30;
         cout << "\nModified Value : " << num << endl;
         cout << "----------------------------------------------\n";
         int arr[] = {10, 20, 30, 40, 50};
         cout << "Sequential Data Collection\n";
         cout << "Array using Index\n";
         for (int i = 0; i < 5; i++)
         {
         cout << arr[i] << " ";
         }
         cout << "\nArray using Address-based Access\n";
         for (int i = 0; i < 5; i++)
         {
         cout << *(arr + i) << " ";
         }
         cout << "\n----------------------------------------------\n";
         cout << "Observation\n";
         cout << "Both approaches access the same memory locations.\n";
         cout << "----------------------------------------------\n";
         return 0;
         }
