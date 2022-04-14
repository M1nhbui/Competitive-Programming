#include <bits/stdc++.h>
using namespace std;

#define MAXN 1000005
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define matrix vector<vector<long long>>
const long long INF = 2000000000000000000LL;
const long long mod = 1000000007;
const long long K = 10000000;

ll n, m, a[5005], c[MAXN];
ll x[MAXN], f[MAXN];
ll cp[MAXN];

signed main(void)
{
    faster;

    cin >> n >> m;
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    for (ll i = 1; i <= m; i++)
        cin >> c[i];
    f[0] = 0, c[0] = 0, cp[m + 1] = INF;
    for (ll i = m; i >= 1; i--)
        cp[i] = min(cp[i + 1], c[i]);
    for (ll i = 1; i <= n; i++)
    {
        f[i] = f[i - 1] + cp[1];
        for (ll j = i; j >= 1; j--)
        {
            if (a[i] - a[j] + 1 <= m)
                f[i] = min(f[i], f[j - 1] + cp[a[i] - a[j] + 1]);
        }
    }
    cout << f[n];
#ifndef LOCAL_DEFINE
    cerr << "\nTime elapsed: " << fixed << setprecision(9) << (double)clock() / CLOCKS_PER_SEC << "s.";
#endif
    return 0;
}