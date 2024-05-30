#include <bits/stdc++.h>
#include <conio.h>
#include "menu.h"
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
int32_t main()
{
    tot_money = 0;
    loadMoney();
    loadEvent(eventRecord);
    loadPIC(profInCharge);
    loadSponsors(paisa);
    solve();
    tot_money+=moneyFromPart;
    tot_money+=hos_budget;
    tot_money+=sec_fine;
    saveMoney();
    saveEvent(eventRecord);
    savePIC(profInCharge);
    saveSponsors(paisa);
    return 0;
}