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

ll n, m;
ll a[MAXN], b[MAXN];

bool check(ll t)
{
    int j = 0;
    FOR(i, 0, n - 1)
    {
        if (a[i] >= t)
        {
            continue;
        }
        while (a[i] + b[j] < t && j < m)
        {
            j++;
        }
        if (j >= m)
        {
            return 0;
        }
        j++;
    }
    return 1;
}

int main()
{
    read();
    cin >> n;
    FOR(i, 0, n - 1)
    {
        cin >> a[i];
    }
    cin >> m;
    FOR(i, 0, m - 1)
    {
        cin >> b[i];
    }
    ll l = 1, r = 2 * 1e9;
    ll res = -10000000000;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(mid))
        {
            res = max(res, mid), l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << res;
}