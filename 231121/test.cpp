#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void placeholder()
{
    return;
}

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> d(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> d[i].first >> d[i].second;
    }
    ll sum = 0;
    ll a = 0;
    ll left = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        d[i].second -= left;
        if (d[i].second <= 0)
        {
            left = d[i].second;
            d[i].second = 0;
            continue;
        }
        ll steps = d[i].second / m;
        if (d[i].second % m == 0)
        {
            left = 0;
            sum += d[i].first * (d[i].second / m);
        }
        else
        {
            left = m - (d[i].second % m);
            sum += d[i].first * (d[i].second / m + 1);
        }
    }
    cout << sum * 2;
}