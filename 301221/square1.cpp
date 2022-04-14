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

ll n, m, a[1005][1005], f[1005][1005];

int main()
{
    read();
    cin >> m >> n;
    FOR(i, 1, m)
    {
        FOR(j, 1, n)
        {
            cin >> a[i][j];
        }
    }
    FOR(i, 1, n)
    {
        f[1][i] = 1;
    }
    FOR(i, 1, m)
    {
        f[i][1] = 1;
    }
    ll ans = 1;
    FOR(i, 2, m)
    {
        FOR(j, 2, n)
        {
            if (a[i][j] == a[i - 1][j] && a[i][j] == a[i][j - 1] && a[i][j] == a[i - 1][j - 1] && a[i][j] == 1)
            {
                f[i][j] = min(f[i - 1][j], min(f[i][j - 1], f[i - 1][j - 1])) + 1;
            }
            else if (a[i][j] == 1)
            {
                f[i][j] = 1;
            }
            else
            {
                f[i][j] = 0;
            }
            ans = max(ans, f[i][j]);
        }
    }
    cout << ans;
    return 0;
}