#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
    short int n, i, j, s[20];
    char id[20][20], name[20][20];
    char searchid[20];
    char tempid[20], tempname[20];
    short int temps;

    cout << "****************************************************" << endl;
    cout << "             SPORTS EVENT SCORE ANALYSIS" << endl;
    cout << "****************************************************" << endl;

    cout << left << setw(23) << "Enter Number Of Participants : ";
    cin >> n;


    for(i = 0; i < n; i++)
    {
        cout << "\nEnter Details of Participant " << i + 1 << endl;

        cout << left << setw(23) << "Enter Participant ID "<<":";
        cin >> id[i];

        cout << left << setw(23) << "Enter Participant Name"<<":";
        cin >> name[i];

        cout << left << setw(23) << "Enter Score"<<":";
        cin >> s[i];
    }


    cout <<"--------------------------------- "<<endl;
    cout<<"Search Participant"<<endl;
    cout<<" --------------------------------- "<< endl;

    cout << left << setw(23) << "Enter Participant ID"<<":";
    cin >> searchid;

    bool found = false;

    for(i = 0; i < n; i++)
    {
        if(strcmp(id[i], searchid) == 0)
        {
            cout << "\n---------------- Participant Found ----------------" << endl;

            cout << left << setw(10) << "ID" << ": " << id[i] << endl;
            cout << left << setw(10) << "Name" << ": " << name[i] << endl;
            cout << left << setw(10) << "Score" << ": " << s[i] << endl;

            found = true;
            break;
        }
    }

    if(found == false)
    {
        cout << "\nParticipant Not Found!" << endl;
    }


    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(s[i] < s[j])
            {

                temps = s[i];
                s[i] = s[j];
                s[j] = temps;


                strcpy(tempid, id[i]);
                strcpy(id[i], id[j]);
                strcpy(id[j], tempid);


                strcpy(tempname, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], tempname);
            }
        }
    }

    // Display ranking list
    cout << "\n\n------------------- Ranking List -------------------" << endl;

    cout << left << setw(8) << "Rank"
         << setw(15) << "Name"
         << setw(10) << "Score" << endl;

    for(i = 0; i < n; i++)
    {
        cout << left << setw(8) << i + 1
             << setw(15) << name[i]
             << setw(10) << s[i] << endl;
    }


    cout << "\n---------------- Top Three Performers ----------------" << endl;

    for(i = 0; i < 3 && i < n; i++)
    {
        cout << i + 1 << ". "
             << name[i] << " - "
             << s[i] << endl;
    }

    return 0;
}
