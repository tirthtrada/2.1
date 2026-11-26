
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        //1.print space
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        //2.print number
        for (int j = 1; j <= i; j++)
        {
            cout << char('A'+j-1) << " ";
        }
        //3.print space and number
        for (int j = i - 1; j >= 1; j--)
        {
            cout << char('A'+j-1) << " ";
        }

        cout << endl;
    }

    return 0;
}

