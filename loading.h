#include "functions.h"
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
ll tot_money = 0;
void loadEvent(map<string, vector<string>> &eventRecord)
{
    ifstream file("event_record.txt");
    if (file.is_open())
    {
        string date = "";
        string line;
        while (getline(file, line))
        {
            if (line.find("Date: ") != string::npos)
            {
                date = line.substr(6);
            }
            else
            {
                eventRecord[date].push_back(line);
            }
        }
        file.close();
    } 
    ofstream eraseFile("event_record.txt", ofstream::trunc);
    eraseFile.close();
}
void saveEvent(map<string, vector<string>> &eventRecord)
{
    ofstream file("event_record.txt");
    if (file.is_open())
    {
        for (const auto &emp : eventRecord)
        {
            file << "Date: " << emp.first << endl;
            for (auto &it : emp.second)
            {
                file << it << endl;
            }
        }
        file.close();
    } 
}
void loadPIC(vector<Prof> &profInCharge)
{
    ifstream file("pic.txt");
    if (file.is_open())
    {
        Prof pro = Prof("", "", 1);
        string line;
        while (getline(file, line))
        {
            if (line.find("Name: ") != string::npos)
            {
                pro.name = line.substr(6);
            }
            else if (line.find("Department: ") != string::npos)
            {
                pro.dept = line.substr(12);
            }
            else if (line.find("Eligible: ") != string::npos)
            {
                pro.eli = stoi(line.substr(10));
                profInCharge.push_back(pro);
            }
        }
        file.close();
    }
    else
    {
        cout << "Unable to open file for reading pic." << endl;
    }
    ofstream eraseFile("pic.txt", ofstream::trunc);
    eraseFile.close();
}
void savePIC(vector<Prof> &profInCharge)
{
    ofstream file("pic.txt");
    if (file.is_open())
    {
        for (const auto &emp : profInCharge)
        {
            file << "Name: " << emp.name << endl;
            file << "Department: " << emp.dept << endl;
            file << "Eligible: " << emp.eli << endl;
        }
        file.close();
    }
    else
    {
        cout << "Unable to open file for writing pic." << endl;
    }
}
void loadMoney()
{
    ifstream file("money.txt");
    if (file.is_open())
    {
        string line;
        if (getline(file, line))
            tot_money = stoi(line);
    }
    ofstream eraseFile("money.txt", ofstream::trunc);
    eraseFile.close();
}
void saveMoney()
{
    ofstream file("money.txt");
    if (file.is_open())
    {
        file << tot_money << endl;
        file.close();
    }
}
void loadSponsors(vector<Sponsors> &paisa)
{
    ifstream file("company_data.txt");
    if (file.is_open())
    {
        string line;
        Sponsors spon = Sponsors("", 0);
        while (getline(file, line))
        {
            if (line.find("Name: ") == 0)
            {
                spon.name = line.substr(6);
            }
            else if (line.find("Money Invested: ") == 0)
            {
                spon.money = stoi(line.substr(16));
                paisa.push_back(spon);
            }
        }
        file.close();
    }
    ofstream eraseFile("company_data.txt", ofstream::trunc);
    eraseFile.close();
}
void saveSponsors(vector<Sponsors> &paisa)
{
    ofstream file("company_data.txt");
    if (file.is_open())
    {
        for (const auto &company : paisa)
        {
            file << "Name: " << company.name << endl;
            file << "Money Invested: " << company.money << endl;
        }
        file.close();
    }
}
