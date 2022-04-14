#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

#define MAXN 900005
#define MAX 100
#define ll long long

#define ll long long
#define ull unsigned long long
#define endl "\n"
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define vecll vector<long long>
#define pb push_back
#define pathio "C:/Users/buile/OneDrive/Code/C++/InputOutput/"

void read()
{
    // ios_base::sync_with_stdio(false);
    // freopen("name.inp", "r", stdin);
    // freopen("name.out", "w", stdout);
    freopen(pathio "input.txt", "r", stdin);
    freopen(pathio "output.txt", "w", stdout);
    cin.tie(NULL);
    cout.tie(NULL);
    return;
}

bool check(ll a, ll b, ll c)
{
    if (c * a * (a + 1) / 2 > b || c * (a + 1) > b)
    {
        return false;
    }
    return true;
}

ll BS(ll a, ll b)
{
    ll res;
    ll l = 0, r = sqrt(2 * 1e18 / b);
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(mid, a, b))
        {
            l = mid + 1;
            res = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    return res;
}

int main()
{
    read();
    ll t, m, k;
    cin >> t;
    FOR(i, 1, t)
    {
        cin >> m >> k;
        if (m <= k)
        {
            cout << m << endl;
        }
        else
        {
            ll n = BS(m, k);
            ll s = k * n * (n + 1) / 2;
            cout << k * n + (m - s) / (n + 1) << endl;
        }
    }
}