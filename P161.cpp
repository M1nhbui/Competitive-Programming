#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
#define ll long long
#define lb long double

int main()
{
    ll m, n;
    cin >> m >> n;
    ll summ, sumn;
    ll x = 0, y = 0;
    ;
    for (ll i = 0; i < m; i++)
    {
        cin >> summ;
        x *= 10;
        x += summ;
    }
    // cout << x;
    for (ll i = 0; i < n; i++)
    {
        cin >> sumn;
        y *= 10;
        y += sumn;
    }
    cout << x + y;
    return 0;
}