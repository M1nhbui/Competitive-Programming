#include <bits/stdc++.h>
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define int long long
#define fi first
#define se second
#define endl "\n"
#define INF 1e18
using namespace std;

const long long mod = 1e9 + 7;
const long long oo = 1e18;
const long long MAXN = 1e6;

typedef long long lli;
typedef lli TLLArray[MAXN];

stack<int> s;
int n, res;
TLLArray a, l, f, g;

void tinh(TLLArray &f)
{
    s.push(0);
    for (int i = 1; i <= n; i++)
    {
        while (a[s.top()] < a[i])
            s.pop();
        l[i] = s.top();
        s.push(i);
    }
    s.push(n + 1);
    for (int i = n; i >= 1; i--)
    {
        while (a[s.top()] <= a[i])
            s.pop();
        int r = s.top();
        s.push(i);
        f[i] = (i - l[i]) * (r - i);
    }
}

void solve()
{
    tinh(f);
    for (int i = 1; i <= n; i++)
        a[i] = -a[i];
    tinh(g);
}

signed main()
{
    speed;
    if (ifstream(".INP"))
    {
        freopen(".INP", "r", stdin);
        freopen(".OUT", "w", stdout);
    }
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    a[0] = a[n + 1] = 1e18;
    tinh(f);
    for (int i = 1; i <= n; i++)
        a[i] = -a[i];
    tinh(g);
    res = 0;
    for (int i = 1; i <= n; i++)
        res += lli(a[i]) * (g[i] - f[i]);
    cout << res;
    return 0;
}