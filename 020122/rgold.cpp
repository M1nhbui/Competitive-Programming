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

int n, t, f[3005][3005];
pair<int, int> a[MAXN];

int main()
{
    read();
    cin >> n >> t;
    FOR(i, 1, n)
    {
        cin >> a[i].fi >> a[i].se;
    }
    sort(a + 1, a + n + 1);
    FOR(i, 1, n)
    {
        FOR(j, 1, t)
        {
            f[i][j] = max(f[i][j], f[i - 1][j]);
            if (j > a[i].fi)
            {
                f[i][j] = max(f[i][j], f[i - 1][j - a[i].fi] + a[i].se);
            }
        }
    }
    int ans = 0;
    FOR(i, 1, n)
    {
        ans = max(ans, f[i - 1][t] + a[i].se);
    }
    cout << ans;
    return 0;
}