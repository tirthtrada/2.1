
#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {
        {2, 5, 8},
        {3, 6, 9},
        {4, 7, 10}
    };

    int b[3][3] = {
        {2, 3, 4},
        {9, 7, 6},
        {1, 5, 2}
    };

    int c[3][3];

    cout << "******** MATRIX MULTIPLICATION ********" << endl;

    cout << "\nFirst Matrix" << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nSecond Matrix" << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            c[i][j] = 0;

            for(int k = 0; k < 3; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    cout << "\nResultant Matrix" << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    int x[4] = {10, 20, 30, 60};
    int y[5] = {15, 25, 35, 45, 55};
    int z[9];

    int i = 0, j = 0, k = 0;

    cout << "\n******** MERGE SORTED ARRAYS ********" << endl;

    cout << "\nFirst Array" << endl;
    for(int i = 0; i < 4; i++)
    {
        cout << x[i] << " ";
    }

    cout << "\nSecond Array" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << y[i] << " ";
    }

    while(i < 4 && j < 5)
    {
        if(x[i] < y[j])
        {
            z[k] = x[i];
            i++;
        }
        else
        {
            z[k] = y[j];
            j++;
        }
        k++;
    }

    while(i < 4)
    {
        z[k] = x[i];
        i++;
        k++;
    }

    while(j < 5)
    {
        z[k] = y[j];
        j++;
        k++;
    }

    cout << "\n\nMerged Sorted Array" << endl;
    for(int i = 0; i < 9; i++)
    {
        cout << z[i] << " ";
    }

    return 0;
}
