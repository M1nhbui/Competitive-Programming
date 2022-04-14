#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

#define MAXN 900005
#define MAX 100

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

ll INF = 1e14;
ll n, m, a[5005], c[MAXN];
ll x[MAXN], f[MAXN], g[MAXN];

int main()
{
    read();
    cin >> n >> m;
    FOR(i, 1, n)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    FOR(i, 1, m)
    {
        cin >> c[i];
    }
    g[m + 1] = INF;
    FOD(i, m, 1)
    {
        g[i] = min(g[i + 1], c[i]);
    }
    FOR(i, 1, n)
    {
        f[i] = f[i - 1] + g[1];
        FOD(j, i, 1)
        {
            if (a[i] - a[j] + 1 <= m)
            {
                f[i] = min(f[i], f[j - 1] + g[a[i] - a[j] + 1]);
            }
        }
    }
    cout << f[n];
    return 0;
}