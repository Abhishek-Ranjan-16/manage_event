#include "loading.h"
#include <bits/stdc++.h>
#define nn "\n"
#define ll long long
#define pb push_back
#define pll pair<ll, ll>
#define vll vector<ll>
#define all(_obj) _obj.begin(), _obj.end()
#define fr(x, y) for (ll x = 0; x < y; x++)
#define nach_basanti                  \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define inp(x) \
    ll x;      \
    cin >> x;
#define inpv(v, n) \
    vll v(n);      \
    fr(i, n) cin >> v[i];
#define printv(v) fr(i, v.size()) cout << v[i] << " ";
#define yes cout << "YES"
#define no cout << "NO"
#define home return; 
using namespace std;

void eventMgtCore()
{
    while (1)
    {
        system("cls");
        decor();
        cout << "Event Management Core Team : " << nn;
        decor();
        cout << "1. Show PIC" << nn;
        cout << "2. Show Student Body Members" << nn;
        cout << "3. Show Sponsors" << nn;
        cout << "4. Add Events" << nn;
        cout << "5. Edit Events" << nn;
        cout << "6. Show Events" << nn;
        cout << "7. Go Back to Homepage" << nn;
        decor_choice();

        inp(ch);
        switch (ch)
        {
        case 1:
            showPIC();
            break;
        case 2:
            showSB();
            break;
        case 3:
            showSpon();
            break;
        case 4:
            addEvent();
            break;
        case 5:
            editEvent();
            break;
        case 6:
            showEvent();
            break;
        case 7:
            cout << "Going to Homepage..." << nn;
            home;
            break;
        }
    }
}
void pic()
{
    while (1)
    {
        system("cls");
        decor();
        cout << "Professor In Charge : " << nn;
        decor();
        cout << "1. Add PIC" << nn;
        cout << "2. Change Eligibility" << nn;
        cout << "3. Remove PIC" << nn;
        cout << "4. Show PIC" << nn;
        cout << "5. Go Back to Homepage" << nn;
        decor_choice();

        inp(ch);
        switch (ch)
        {
        case 1:
            addPIC();
            break;
        case 2:
            changeEliPIC();
            break;
        case 3:
            removePIC();
            break;
        case 4:
            showPIC();
            break;
        case 5:
            cout << "Going to Homepage..." << nn;
            home;
            break;
        }
    }
}
void secTeam()
{
    while (1)
    {
        system("cls");
        decor();
        cout << "Security Team : " << nn;
        decor();
        cout << "1. Add Team Member" << nn;
        cout << "2. Remove Team Member" << nn;
        cout << "3. Fine" << nn;
        cout << "4. Add Task" << nn;
        cout << "5. Edit Task" << nn;
        cout << "6. Show Task" << nn;
        cout << "7. Go to Student Body" << nn;
        decor_choice();

        inp(ch);
        switch (ch)
        {
        case 1:
            addSecTeam();
            break;
        case 2:
            removeSecTeam();
            break;
        case 3:
            fine();
            break;
        case 4:
            addSecTask();
            break;
        case 5:
            editSecTask();
            break;
        case 6:
            showSecTask();
            break;
        case 7:
            cout << "Going to Student Body..." << nn;
            home;
            break;
        }
    }
}
void hosTeam()
{
    while (1)
    {
        system("cls");
        decor();
        cout << "Hospitality Team : " << nn;
        decor();
        cout << "1. Add Team Member" << nn;
        cout << "2. Remove Team Member" << nn;
        cout << "3. Budget" << nn;
        cout << "4. Go to Student Body" << nn;
        decor_choice();

        inp(ch);
        switch (ch)
        {
        case 1:
            addHosTeam();
            break;
        case 2:
            removeHosTeam();
            break;
        case 3:
            budget();
            break;
        case 4:
            cout << "Going to Student Body..." << nn;
            home;
            break;
        }
    }
}
void mgtTeam()
{
    while (1)
    {
        system("cls");
        decor();
        cout << "Management Team : " << nn;
        decor();
        cout << "1. Add Team Member" << nn;
        cout << "2. Remove Team Member" << nn;
        cout << "3. Add Task" << nn;
        cout << "4. Edit Task" << nn;
        cout << "5. Remove Task" << nn;
        cout << "6. Go to Student Body" << nn;
        decor_choice();

        inp(ch);
        switch (ch)
        {
        case 1:
            addMgtTeam();
            break;
        case 2:
            removeMgtTeam();
            break;
        case 3:
            addMgtTask();
            break;
        case 4:
            editMgtTask();
            break;
        case 5:
            removeMgtTask();
            break;
        case 6:
            cout << "Going to Student Body..." << nn;
            home;
            break;
        }
    }
}
void prTeam()
{
    while (1)
    {
        system("cls");
        decor();
        cout << "PR Team : " << nn;
        decor();
        cout << "1. Add Team Member" << nn;
        cout << "2. Remove Team Member" << nn;
        cout << "3. Add Task" << nn;
        cout << "4. Edit Task" << nn;
        cout << "5. Remove Task" << nn;
        cout << "6. Show Sponsors" << nn;
        cout << "7. Go to Student Body" << nn;
        decor_choice();

        inp(ch);
        switch (ch)
        {
        case 1:
            addPrTeam();
            break;
        case 2:
            removePrTeam();
            break;
        case 3:
            addPrTask();
            break;
        case 4:
            editPrTask();
            break;
        case 5:
            removePrTask();
            break;
        case 6:
            showSpon();
            break;
        case 7:
            cout << "Going to Student Body..." << nn;
            home;
            break;
        }
    }
}
void studentBody()
{
    while (1)
    {
        system("cls");
        decor();
        cout << "Student Body : " << nn;
        decor();
        cout << "1. Security Team" << nn;
        cout << "2. Hospitality Team" << nn;
        cout << "3. Management Team" << nn;
        cout << "4. PR Team" << nn;
        cout << "5. Go Back to Homepage" << nn;
        decor_choice();

        inp(ch);
        switch (ch)
        {
        case 1:
            secTeam();
            break;
        case 2:
            hosTeam();
            break;
        case 3:
            mgtTeam();
            break;
        case 4:
            prTeam();
            break;
        case 5:
            cout << "Going to Homepage..." << nn;
            home;
            break;
        }
    }
}
void sponsors()
{
    while (1)
    {
        system("cls");
        decor();
        cout << "Sponsors : " << nn;
        decor();
        cout << "1. Add Sponsors" << nn;
        cout << "2. Edit Sponsors" << nn;
        cout << "3. Remove Sponsors" << nn;
        cout << "4. Show Sponsors" << nn;
        cout << "5. Go Back to Homepage" << nn;
        decor_choice();

        inp(ch);
        switch (ch)
        {
        case 1:
            addSpon();
            break;
        case 2:
            editSpon();
            break;
        case 3:
            removeSpon();
            break;
        case 4:
            showSpon();
            break;
        case 5:
            cout << "Going to Homepage..." << nn;
            home;
            break;
        }
    }
}
void participants()
{
    while (1)
    {
        system("cls");
        decor();
        cout << "Participants : " << nn;
        decor();
        cout << "1. Add In Campus Participants" << nn;
        cout << "2. Add Out Campus Participants" << nn;
        cout << "3. Show Participants" << nn;
        cout << "4. Show Eligible Participants" << nn;
        cout << "5. Show Fees Generated" << nn;
        cout << "6. Go Back to Homepage" << nn;
        decor_choice();

        inp(ch);
        switch (ch)
        {
        case 1:
            addInCampus();
            break;
        case 2:
            addOutCampus();
            break;
        case 3:
            showParticipants();
            break;
        case 4:
            showEliPart();
            break;
        case 5:
            showFees();
            break;
        case 6:
            cout << "Going to Homepage..." << nn;
            home;
            break;
        }
    }
}
void mainMenu()
{
    cout << "Choose appropiate option : " << nn;
    cout << "1. Event Management Core Team" << nn;
    cout << "2. Professor In Charge" << nn;
    cout << "3. Student Body" << nn;
    cout << "4. Sponsors" << nn;
    cout << "5. Participants" << nn;
    cout << "6. Total Money" << nn;
    cout << "7. To Exit" << nn;
    decor_choice();
}
void solve()
{
    system("cls");
    ll purah_money = 0;
    while (1)
    {
        system("cls");
        decor();
        cout << "Welcome to Event Management Software" << endl;
        decor();
        mainMenu();
        inp(ch);
        switch (ch)
        {
        case 1:
            eventMgtCore();
            break;
        case 2:
            pic();
            break;
        case 3:
            studentBody();
            break;
        case 4:
            sponsors();
            break;
        case 5:
            participants();
            break;
        case 6:
            for (auto &it : paisa)
                purah_money += it.money;
            purah_money += tot_money;
            cout << "Total Money : " << purah_money << nn;
            getch();
            break;
        case 7:
            decor();
            cout << "Good Bye" << nn;
            decor();
            home;
            break;
        }
    }
}
