#include <bits/stdc++.h>
#include "classes.h"
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
ll hos_budget=0;
ll sec_fine=0; 
ll moneyFromPart = 0;

// Event MGT Part 
void showPIC()
{
    if (profInCharge.size())
    {
        decor();
        cout << "The PICs are -" << endl;
        decor();
        for (auto &it : profInCharge)
        {
            it.intro();
            decor();
        }
    }
    else
    {
        cout << "No PICs";
    }

    getch();
}
void showSB()
{
    decor();
    cout << "Student Body Members :" << nn;
    decor();
    cout << nn;
    cout << "Security Team" << nn;
    decor();
    if (sec_team_wale.size())
    {
        for (auto &it : sec_team_wale)
        {
            it.intro();
            decor();
        }
        decor();
    }
    else
    {
        cout << "No Members" << nn;
    }
    decor();
    cout << "Management Team" << nn;
    decor();
    if (mgt_team_wale.size())
    {
        for (auto &it : mgt_team_wale)
        {
            it.intro();
            decor();
        }
        decor();
    }
    else
    {
        cout << "No Members" << nn;
    }
    decor();
    cout << "Hospitality Team" << nn;
    decor();
    if (hos_team_wale.size())
    {
        for (auto &it : hos_team_wale)
        {
            it.intro();
            decor();
        }
        decor();
    }
    else
    {
        cout << "No Members" << nn;
    }
    decor();
    cout << "PR Team" << nn;
    decor();
    if (pr_team_wale.size())
    {
        for (auto &it : pr_team_wale)
        {
            it.intro();
            decor();
        }
        decor();
    }
    else
    {
        cout << "No Members" << nn;
    }
    decor();
    getch();
}
void showSpon()
{
    ll sum = 0;
    if (paisa.size())
    {
        decor();
        cout << "The Sponsors are -" << endl;
        decor();
        for (auto &it : paisa)
        {
            it.intro();
            sum += it.money;
            decor();
        }
        cout << "Total Money Accumulated : " << sum << nn;
        decor();
    }
    else
    {
        cout << "No Sponsors";
    }
    getch();
}
void addEvent()
{
    string date, event;
    decor();
    cout << "Enter Date : ";
    fflush(stdin);
    getline(cin, date);
    cout << "Enter Event : ";
    fflush(stdin);
    getline(cin, event);
    decor();
    eventRecord[date].push_back(event);
}
void editEvent()
{
    decor();
    cout << "The Events are -" << endl;
    decor();
    for (auto &it : eventRecord)
    {
        cout << it.first << " : " << nn;
        for (auto &i : it.second)
        {
            cout << i << endl;
        }
        decor();
    }
    cout << "Enter date to edit : ";
    string date, event;
    fflush(stdin);
    getline(cin, date);

    if (eventRecord.find(date) == eventRecord.end())
    {
        cout << "Date is not present in the events";
    }
    else
    {
        cout << "Enter Event : ";
        fflush(stdin);
        getline(cin, event);
        eventRecord[date].clear();
        eventRecord[date].push_back(event);
        cout << "Event Edited Successfully" << nn;
    }
    getch();
}
void showEvent()
{

    if (eventRecord.size())
    {
        decor();
        cout << "The Events are -" << endl;
        decor();
        for (auto &it : eventRecord)
        {
            cout << it.first << " : " << nn;
            for (auto &i : it.second)
            {
                cout << i << endl;
            }
            decor();
        }
    }
    else
    {
        cout << "No Events";
    }

    getch();
}

// PIC part
void addPIC()
{
    string name, dept;
    int eli;
    decor();
    cout << "Enter Name : ";
    cin >> name;
    cout << "Enter Department : ";
    cin >> dept;
    cout << "Enter Eligibility : ";
    cin >> eli;
    decor();
    Prof p(name, dept, eli);
    profInCharge.push_back(p);
}
void changeEliPIC()
{
    if (!profInCharge.size())
    {
        cout << "No PICs" << endl;
        return;
    }
    ll choose;
    cout << "The PICs are -" << endl;
    decor();
    ll i = 1;
    for (auto &it : profInCharge)
    {
        cout << i << ". ";
        i++;
        it.intro();
        decor();
    }
    cout << "Enter Choice of Prof. to change Eligibility : ";
    cin >> choose;
    choose--;
    profInCharge[choose].changeEli();
}
void removePIC()
{
    if (!profInCharge.size())
    {
        cout << "No PICs" << endl;
        return;
    }
    ll choose;
    cout << "The PICs are -" << endl;
    decor();
    ll i = 1;
    for (auto &it : profInCharge)
    {
        cout << i << ". ";
        i++;
        it.intro();
        decor();
    }
    cout << "Enter Choice of Prof. to remove : ";
    cin >> choose;
    choose--;
    vector<Prof> temp;
    for (int i = 0; i < profInCharge.size(); i++)
    {
        if (i == choose)
            continue;
        temp.push_back(profInCharge[i]);
    }
    profInCharge = temp;
}

// Student Body Part
// Security Team
void addSecTeam()
{
    string sid;
    string name;
    string dept;
    int eli;
    string secId;

    decor();
    cout << "Enter Scholar ID : ";
    cin >> sid;
    cout << "Enter Name : ";
    cin >> name;
    cout << "Enter Department : ";
    cin >> dept;
    cout << "Enter Eligibility : ";
    cin >> eli;
    cout << "Enter Security Id : ";
    cin >> secId;
    decor();
    SecurityTeam sec_team(sid, name, dept, eli, secId);
    sec_team_wale.push_back(sec_team);
}
void removeSecTeam()
{
    if (!sec_team_wale.size())
    {
        cout << "No Security Team members" << endl;
        return;
    }
    ll choose;
    cout << "The Security Team members are -" << endl;
    decor();
    ll i = 1;
    for (auto &it : sec_team_wale)
    {
        cout << i << ". ";
        i++;
        it.intro();
        decor();
    }
    cout << "Enter Choice of Member to remove : ";
    cin >> choose;
    choose--;
    vector<SecurityTeam> temp;
    for (int i = 0; i < sec_team_wale.size(); i++)
    {
        if (i == choose)
            continue;
        temp.push_back(sec_team_wale[i]);
    }
    sec_team_wale = temp;
}
void fine()
{
    ll fine;
    decor();
    cout << "Enter Fine to be collected : ";
    cin >> fine;
    sec_fine += fine;
    cout << "Fine collected : " << fine;
    cout << nn;
    cout << "Security Money : " << sec_fine;
    decor();
}
void addSecTask()
{
    string date, task;
    decor();
    cout << "Enter Date : ";
    fflush(stdin);
    getline(cin, date);
    cout << "Enter Task : ";
    fflush(stdin);
    getline(cin, task);
    decor();
    secTask[date].push_back(task);
}
void editSecTask()
{
    decor();
    cout << "The Security Tasks are -" << endl;
    decor();
    for (auto &it : secTask)
    {
        cout << it.first << " : " << nn;
        for (auto &i : it.second)
        {
            cout << i << endl;
        }
        decor();
    }
    cout << "Enter date to edit : ";
    string date, event;
    fflush(stdin);
    getline(cin, date);

    if (secTask.find(date) == secTask.end())
    {
        cout << "Date is not present in the events";
    }
    else
    {
        cout << "Enter Task : ";
        fflush(stdin);
        getline(cin, event);
        secTask[date].clear();
        secTask[date].push_back(event);
        cout << "Task Edited Successfully" << nn;
    }
    getch();
}
void showSecTask()
{
    decor();
    cout << "The Security Tasks are -" << endl;
    decor();
    for (auto &it : secTask)
    {
        cout << it.first << " : " << nn;
        for (auto &i : it.second)
        {
            cout << i << endl;
        }
        decor();
    }
    decor();
    getch();
}

// Hos Team
void addHosTeam()
{
    string sid;
    string name;
    string dept;
    int eli;
    string hosId;

    decor();
    cout << "Enter Scholar ID : ";
    cin >> sid;
    cout << "Enter Name : ";
    cin >> name;
    cout << "Enter Department : ";
    cin >> dept;
    cout << "Enter Eligibility : ";
    cin >> eli;
    cout << "Enter Hospitality Id : ";
    cin >> hosId;
    decor();
    HospitalityTeam hos_team(sid, name, dept, eli, hosId);
    hos_team_wale.push_back(hos_team);
}
void removeHosTeam()
{
    if (!hos_team_wale.size())
    {
        cout << "No Hospitality Team members" << endl;
        return;
    }
    ll choose;
    cout << "The Hospitality Team members are -" << endl;
    decor();
    ll i = 1;
    for (auto &it : hos_team_wale)
    {
        cout << i << ". ";
        i++;
        it.intro();
        decor();
    }
    cout << "Enter Choice of Member to remove : ";
    cin >> choose;
    choose--;
    vector<HospitalityTeam> temp;
    for (int i = 0; i < hos_team_wale.size(); i++)
    {
        if (i == choose)
            continue;
        temp.push_back(hos_team_wale[i]);
    }
    hos_team_wale = temp;
}
void budget()
{
    decor();
    cout << "Enter the Budget : ";
    ll budget;
    cin >> budget;
    hos_budget += budget;
    cout << "Hospitality Money : " << hos_budget << nn;
    decor();
}

// Mgt Team
void addMgtTeam()
{
    string sid;
    string name;
    string dept;
    int eli;
    string mgtId;

    decor();
    cout << "Enter Scholar ID : ";
    cin >> sid;
    cout << "Enter Name : ";
    cin >> name;
    cout << "Enter Department : ";
    cin >> dept;
    cout << "Enter Eligibility : ";
    cin >> eli;
    cout << "Enter Management Id : ";
    cin >> mgtId;
    decor();
    ManagementTeam mg_team(sid, name, dept, eli, mgtId);
    mgt_team_wale.push_back(mg_team);
}
void removeMgtTeam()
{
    if (!mgt_team_wale.size())
    {
        cout << "No Management Team members" << endl;
        return;
    }
    ll choose;
    cout << "The Management Team members are -" << endl;
    decor();
    ll i = 1;
    for (auto &it : mgt_team_wale)
    {
        cout << i << ". ";
        i++;
        it.intro();
        decor();
    }
    cout << "Enter Choice of Member to remove : ";
    cin >> choose;
    choose--;
    vector<ManagementTeam> temp;
    for (int i = 0; i < mgt_team_wale.size(); i++)
    {
        if (i == choose)
            continue;
        temp.push_back(mgt_team_wale[i]);
    }
    mgt_team_wale = temp;
}
void addMgtTask()
{
    string date, task;
    decor();
    cout << "Enter Date : ";
    fflush(stdin);
    getline(cin, date);
    cout << "Enter Task : ";
    fflush(stdin);
    getline(cin, task);
    decor();
    mgtTask[date].push_back(task);
}
void editMgtTask()
{
    decor();
    cout << "The Management Tasks are -" << endl;
    decor();
    for (auto &it : mgtTask)
    {
        cout << it.first << " : " << nn;
        for (auto &i : it.second)
        {
            cout << i << endl;
        }
        decor();
    }
    cout << "Enter date to edit : ";
    string date, event;
    fflush(stdin);
    getline(cin, date);

    if (mgtTask.find(date) == mgtTask.end())
    {
        cout << "Date is not present in the events";
    }
    else
    {
        cout << "Enter Task : ";
        fflush(stdin);
        getline(cin, event);
        mgtTask[date].clear();
        mgtTask[date].push_back(event);
        cout << "Task Edited Successfully" << nn;
    }
    getch();
}
void removeMgtTask()
{
    decor();
    cout << "The Management Tasks are -" << endl;
    decor();
    for (auto &it : mgtTask)
    {
        cout << it.first << " : " << nn;
        for (auto &i : it.second)
        {
            cout << i << endl;
        }
        decor();
    }
    cout << "Enter date to remove : ";
    string date, event;
    fflush(stdin);
    getline(cin, date);

    if (mgtTask.find(date) == mgtTask.end())
    {
        cout << "Date is not present in the events";
    }
    else
    {
        mgtTask[date].clear();
        cout << "Task Removed Successfully" << nn;
    }
    getch();
}

// PR Team
void addPrTeam()
{
    string sid;
    string name;
    string dept;
    int eli;
    string prId;

    decor();
    cout << "Enter Scholar ID : ";
    cin >> sid;
    cout << "Enter Name : ";
    cin >> name;
    cout << "Enter Department : ";
    cin >> dept;
    cout << "Enter Eligibility : ";
    cin >> eli;
    cout << "Enter PR Id : ";
    cin >> prId;
    decor();
    PRTeam pr_team(sid, name, dept, eli, prId);
    pr_team_wale.push_back(pr_team);
}
void removePrTeam()
{
    if (!pr_team_wale.size())
    {
        cout << "No PR Team members" << endl;
        return;
    }
    ll choose;
    cout << "The PR Team members are -" << endl;
    decor();
    ll i = 1;
    for (auto &it : pr_team_wale)
    {
        cout << i << ". ";
        i++;
        it.intro();
        decor();
    }
    cout << "Enter Choice of Member to remove : ";
    cin >> choose;
    choose--;
    vector<PRTeam> temp;
    for (int i = 0; i < pr_team_wale.size(); i++)
    {
        if (i == choose)
            continue;
        temp.push_back(pr_team_wale[i]);
    }
    pr_team_wale = temp;
}
void addPrTask()
{
    string date, task;
    decor();
    cout << "Enter Date : ";
    fflush(stdin);
    getline(cin, date);
    cout << "Enter Task : ";
    fflush(stdin);
    getline(cin, task);
    decor();
    prTask[date].push_back(task);
}
void editPrTask()
{
    decor();
    cout << "The PR Tasks are -" << endl;
    decor();
    for (auto &it : prTask)
    {
        cout << it.first << " : " << nn;
        for (auto &i : it.second)
        {
            cout << i << endl;
        }
        decor();
    }
    cout << "Enter date to edit : ";
    string date, event;
    fflush(stdin);
    getline(cin, date);

    if (prTask.find(date) == prTask.end())
    {
        cout << "Date is not present in the events";
    }
    else
    {
        cout << "Enter Task : ";
        fflush(stdin);
        getline(cin, event);
        prTask[date].clear();
        prTask[date].push_back(event);
        cout << "Task Edited Successfully" << nn;
    }
    getch();
}
void removePrTask()
{
    decor();
    cout << "The PR Tasks are -" << endl;
    decor();
    for (auto &it : prTask)
    {
        cout << it.first << " : " << nn;
        for (auto &i : it.second)
        {
            cout << i << endl;
        }
        decor();
    }
    cout << "Enter date to remove : ";
    string date, event;
    fflush(stdin);
    getline(cin, date);

    if (prTask.find(date) == prTask.end())
    {
        cout << "Date is not present in the events";
    }
    else
    {
        prTask[date].clear();
        cout << "Task Removed Successfully" << nn;
    }
    getch();
}

// Sponsors Part
void addSpon()
{
    string name;
    ll money;
    decor();
    cout << "Enter Name : ";
    cin >> name;
    cout << "Enter Money : ";
    cin >> money;
    decor();
    Sponsors s(name, money);
    paisa.push_back(s);
}
void editSpon()
{
    if (!paisa.size())
    {
        cout << "No Sponsors" << endl;
        return;
    }
    ll choose, money;
    cout << "The Sponsors are -" << endl;
    decor();
    ll i = 1;
    for (auto &it : paisa)
    {
        cout << i << ". ";
        i++;
        it.intro();
        decor();
    }
    cout << "Enter Choice of Sponsor to change money : ";
    cin >> choose;
    cout << "Enter Money : ";
    cin >> money;
    choose--;
    paisa[choose].money = money;
}
void removeSpon()
{
    if (!paisa.size())
    {
        cout << "No Sponsors" << endl;
        return;
    }
    ll choose;
    cout << "The Sponsors are -" << endl;
    decor();
    ll i = 1;
    for (auto &it : paisa)
    {
        cout << i << ". ";
        i++;
        it.intro();
        decor();
    }
    cout << "Enter Choice of Sponsor to remove : ";
    cin >> choose;
    choose--;
    vector<Sponsors> temp;
    for (int i = 0; i < paisa.size(); i++)
    {
        if (i == choose)
            continue;
        temp.push_back(paisa[i]);
    }
    paisa = temp;
}

// Participants Part
void addInCampus()
{
    string name;
    string sid;
    string dept;
    string tid;
    string place;
    string pno;
    int eli;
    int mon_fees;

    decor();
    cout << "Enter Name : ";
    cin >> name;
    cout << "Enter Scholar ID : ";
    cin >> sid;
    cout << "Enter Department : ";
    cin >> dept;
    cout << "Enter Ticket ID : ";
    cin >> tid;
    cout << "Enter Place : ";
    cin >> place;
    cout << "Enter Phone No. : ";
    cin >> pno;
    cout << "Enter Eligibility : ";
    cin >> eli;
    cout << "Enter Primary Fees : ";
    cin >> mon_fees;
    decor();
    InParticipant ip(name, sid, dept, tid, place, pno, eli, mon_fees);
    andar_wale.push_back(ip);
}
void addOutCampus()
{
    string name;
    int extra_fee;
    string tid;
    string place;
    string pno;
    int eli;
    int mon_fees;

    decor();
    cout << "Enter Name : ";
    cin >> name;
    cout << "Enter Extra Fees : ";
    cin >> extra_fee;
    cout << "Enter Ticket ID : ";
    cin >> tid;
    cout << "Enter Place : ";
    cin >> place;
    cout << "Enter Phone No. : ";
    cin >> pno;
    cout << "Enter Eligibility : ";
    cin >> eli;
    cout << "Enter Primary Fees : ";
    cin >> mon_fees;
    decor();
    OutParticipant op(name, extra_fee, tid, place, pno, eli, mon_fees);
    bahar_wale.push_back(op);
}
void showParticipants()
{
    if (andar_wale.size())
    {
        decor();
        cout << "The Insiders are -" << endl;
        decor();
        for (auto &it : andar_wale)
        {
            it.intro();
            decor();
        }
    }
    else
    {
        cout << "No Insiders" << nn;
        decor();
    }
    if (bahar_wale.size())
    {
        decor();
        cout << "The Outsiders are -" << endl;
        decor();
        for (auto &it : bahar_wale)
        {
            it.intro();
            decor();
        }
    }
    else
    {
        cout << "No Outsiders" << nn;
        decor();
    }
    getch();
}
void showEliPart()
{
    if (andar_wale.size())
    {
        decor();
        cout << "The Insiders are -" << endl;
        decor();
        for (auto &it : andar_wale)
        {
            if (!it.eli)
                continue;
            it.intro();
            decor();
        }
    }
    else
    {
        cout << "No Insiders" << nn;
        decor();
    }
    if (bahar_wale.size())
    {
        decor();
        cout << "The Outsiders are -" << endl;
        decor();
        for (auto &it : bahar_wale)
        {
            if (!it.eli)
                continue;
            it.intro();
            decor();
        }
    }
    else
    {
        cout << "No Outsiders" << nn;
        decor();
    }
    getch();
}
void showFees()
{
    int sum1 = 0, sum2 = 0;
    int extra = 0;
    if (andar_wale.size())
    {
        decor();
        cout << "The Insiders are -" << endl;
        decor();
        for (auto &it : andar_wale)
        {
            if (!it.eli)
                continue;
            it.intro();
            decor();
            sum1 += it.mon_fees;
        }
    }
    else
    {
        cout << "No Insiders" << nn;
        decor();
    }
    cout << "Fees Collected from Insiders : " << sum1 << nn;
    decor();
    if (bahar_wale.size())
    {
        decor();
        cout << "The Outsiders are -" << endl;
        decor();
        for (auto &it : bahar_wale)
        {
            if (!it.eli)
                continue;
            it.intro();
            decor();
            sum2 += it.mon_fees;
            extra += it.fees;
        }
    }
    else
    {
        cout << "No Outsiders" << nn;
        decor();
    }
    cout << "Fees Collected from Outsiders and extra fees : " << sum2 << " & " << extra << nn;
    decor();
    moneyFromPart = sum1 + sum2 + extra;
    getch();
}
