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
class StudentBody
{
public:
    string sid;
    string name;
    string dept;
    int eli;

    StudentBody(string sid, string name, string dept, int eli)
    {
        this->sid = sid;
        this->name = name;
        this->dept = dept;
        this->eli = eli;
    }

    void intro()
    {
        cout << "Scholar ID : " << sid << nn;
        cout << "Name : " << name << nn;
        cout << "Department : " << dept << nn;
        cout << "Eligibility : " << (eli ? "Yes" : "No") << nn;
    }
};
class SecurityTeam : public StudentBody
{
public:
    string secId;
    SecurityTeam(string sid, string name, string dept, int eli, string secId) : StudentBody(sid, name, dept, eli)
    {
        this->secId = secId;
    }
    void intro()
    {
        cout << "Scholar ID : " << sid << nn;
        cout << "Name : " << name << nn;
        cout << "Department : " << dept << nn;
        cout << "Eligibility : " << (eli ? "Yes" : "No") << nn;
        cout << "Security ID : " << secId << nn;
    }
};
class HospitalityTeam : public StudentBody
{
public:
    string hosId;
    HospitalityTeam(string sid, string name, string dept, int eli, string hosId) : StudentBody(sid, name, dept, eli)
    {
        this->hosId = hosId;
    }
    void intro()
    {
        cout << "Scholar ID : " << sid << nn;
        cout << "Name : " << name << nn;
        cout << "Department : " << dept << nn;
        cout << "Eligibility : " << (eli ? "Yes" : "No") << nn;
        cout << "Hospitality ID : " << hosId << nn;
    }
};
class PRTeam : public StudentBody
{
public:
    string prId;
    PRTeam(string sid, string name, string dept, int eli, string prId) : StudentBody(sid, name, dept, eli)
    {
        this->prId = prId;
    }
    void intro()
    {
        cout << "Scholar ID : " << sid << nn;
        cout << "Name : " << name << nn;
        cout << "Department : " << dept << nn;
        cout << "Eligibility : " << (eli ? "Yes" : "No") << nn;
        cout << "PR ID : " << prId << nn;
    }
};
class ManagementTeam : public StudentBody
{
public:
    string mgtId;
    ManagementTeam(string sid, string name, string dept, int eli, string mgtId) : StudentBody(sid, name, dept, eli)
    {
        this->mgtId = mgtId;
    }
    void intro()
    {
        cout << "Scholar ID : " << sid << nn;
        cout << "Name : " << name << nn;
        cout << "Department : " << dept << nn;
        cout << "Eligibility : " << (eli ? "Yes" : "No") << nn;
        cout << "Management ID : " << mgtId << nn;
    }
};
class Participant
{
public:
    string name;
    string tid;
    string place;
    string pno;
    int eli;
    int mon_fees;

    Participant(string name, string tid, string place, string pno, int eli, int mon_fees)
    {
        this->name = name;
        this->tid = tid;
        this->place = place;
        this->pno = pno;
        this->eli = eli;
        this->mon_fees = mon_fees;
    }

    void intro()
    {
        cout << "Name : " << name << nn;
        cout << "Ticket No. : " << tid << nn;
        cout << "Place : " << place << nn;
        cout << "Phone No. : " << pno << nn;
        cout << "Eligibility : " << (eli ? "Yes" : "No") << nn;
        cout << "Fees Given : " << mon_fees << nn;
    }
};
class InParticipant : public Participant
{
public:
    string sid;
    string dept;
    InParticipant(string name, string sid, string dept, string tid, string place, string pno, int eli, int mon_fees) : Participant(name, tid, place, pno, eli, mon_fees)
    {
        this->sid = sid;
        this->dept = dept;
    }
    void intro()
    {
        cout << "Name : " << name << nn;
        cout << "Scholar ID : " << sid << nn;
        cout << "Department : " << dept << nn;
        cout << "Ticket No. : " << tid << nn;
        cout << "Place : " << place << nn;
        cout << "Phone No. : " << pno << nn;
        cout << "Eligibility : " << (eli ? "Yes" : "No") << nn;
        cout << "Fees Given : " << mon_fees << nn;
    }
};
class OutParticipant : public Participant
{
public:
    int fees;
    OutParticipant(string name, int fees, string tid, string place, string pno, int eli, int mon_fees) : Participant(name, tid, place, pno, eli, mon_fees)
    {
        this->fees = fees;
    }
    void intro()
    {
        cout << "Name : " << name << nn;
        cout << "Extraa fees collected : " << fees << nn;
        cout << "Ticket No. : " << tid << nn;
        cout << "Place : " << place << nn;
        cout << "Phone No. : " << pno << nn;
        cout << "Eligibility : " << (eli ? "Yes" : "No") << nn;
        cout << "Fees Given : " << mon_fees << nn;
    }
};
class Prof
{
public:
    string name;
    string dept;
    int eli;
    Prof(string name, string dept, int eli)
    {
        this->name = name;
        this->dept = dept;
        this->eli = eli;
    }
    void intro()
    {
        cout << "Name : " << name << nn;
        cout << "Department : " << dept << nn;
        cout << "Eligible : " << (eli == 0 ? "No" : "Yes") << nn;
    }
    void changeEli()
    {
        eli = !eli;
    }
};
class Sponsors
{
public:
    string name;
    ll money;
    Sponsors(string name, ll money)
    {
        this->name = name;
        this->money = money;
    }
    void intro()
    {
        cout << "Name : " << name << nn;
        cout << "Money Invested : " << money << nn;
    }
};


vector<Prof> profInCharge;
map<string, vector<string>> eventRecord;
vector<Sponsors> paisa;
vector<InParticipant> andar_wale;
vector<OutParticipant> bahar_wale;

vector<SecurityTeam> sec_team_wale;
vector<PRTeam> pr_team_wale;
vector<HospitalityTeam> hos_team_wale;
vector<ManagementTeam> mgt_team_wale;

map<string, vector<string>> mgtTask;
map<string, vector<string>> secTask;
map<string, vector<string>> prTask;


void decor()
{
    cout << "**********************************************" << nn;
}
void decor_choice()
{
    cout << "Your Choice : ";
}