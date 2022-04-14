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
#define fi first
#define se second

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

ll n, x;
pair<ll, ll> a[MAXN];

bool check(ll t)
{
    ll tmp = 0;
    FOR(i, 1, n)
    {
        if (a[i].fi > t)
        {
            continue;
        }
        tmp += (t - a[i].fi + a[i].se - 1) / a[i].se;
    }
    if (tmp <= x)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    read();
    cin >> n >> x;
    FOR(i, 1, n)
    {
        cin >> a[i].fi >> a[i].se;
    }
    ll l = 1, r = 1e14, mid, ans;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (check(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans;
}