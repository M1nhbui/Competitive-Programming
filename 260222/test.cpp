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

ll s[MAXN], f[MAXN], g[MAXN], a[MAXN];
ll n, k;

int main()
{
    read();
    cin >> n >> k;
    FOR(i, 1, n)
    {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    FOR(i, 1, n)
    {
        if (i >= k)
        {
            f[i] = max(f[i - 1], s[i] - s[i - k]);
        }
        else
            f[i] = -1e9;
    }
    FOD(i, n, 1)
    {
        if (i <= n - k + 1)
        {
            g[i] = max(g[i + 1], s[i + k - 1] - s[i - 1]);
        }
        else
            g[i] = -1e9;
    }
    ll kq = oo;
    FOR(i, 1, n - k + 1)
    {
        kq = min(kq, max(f[i - k], g[i + 1]));
    }
    cout << kq;
    return 0;
}