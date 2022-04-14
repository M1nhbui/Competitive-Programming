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
#define se second
#define fi first

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

pll a[MAXN];
ll n, f[MAXN];
bool c[MAXN];

int main()
{
    read();
    cin >> n;
    FOR(i, 1, n)
    {
        cin >> a[i].fi >> a[i].se;
    }
    sort(a + 1, a + 1 + n);
    FOR(i, 1, n)
    {
        c[i] = true;
    }
    f[0] = -1;
    FOR(i, 1, n)
    {
        f[i] = max(f[i - 1], a[i].fi + a[i].se);
    }
    FOR(i, 1, n)
    {
        if (a[i].fi + a[i].se <= f[i - 1])
        {
            c[i] = false;
        }
    }
    f[n + 1] = -1e17;
    FOD(i, n, 1)
    {
        f[i] = max(f[i + 1], a[i].se - a[i].fi);
    }
    FOR(i, 1, n)
    {
        if (a[i].se - a[i].fi <= f[i + 1])
        {
            c[i] = false;
        }
    }
    ll cnt = 0;
    FOR(i, 1, n)
    {
        if (c[i] == true)
        {
            cnt++;
        }
    }
    if (cnt == 0)
    {
        cout << 1;
        return 0;
    }
    cout << cnt;
    return 0;
}